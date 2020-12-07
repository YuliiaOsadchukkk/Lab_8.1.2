#include <iostream>
#include <string>
using namespace std;

bool IsOrNot(char* str, size_t i)
{
    if (str[i] == str[i + 1] && str[i] == str[i + 2] && str[i] == str[i + 3])
        return true;
    else
        if (i < strlen(str) - 4)
            return  IsOrNot(str, ++i);
        else
            return false;
}



char* change(char* str, char* strNew, size_t l, size_t i)
{
    if (i < strlen(str) - 4)
    {
        if (str[i] == str[i + 1] && str[i] == str[i + 2] && str[i] == str[i + 3])
        {
            strNew[l] = '*';
            strNew[l + 1] = '*';
            l += 2;
            i += 3;
        }
        else
        {
            strNew[l] = str[i];
            ++l;
        }
        return   change(str, strNew, l, ++i);
    }
    else
    {
        strNew[l++] = str[i++];
        strNew[l++] = str[i];
        strNew[l] = '\0';
        strcpy_s(str, strlen(strNew) + 1, strNew);
        return str;
    }
}



int main()
{
    char* str = new char[101];
    char* strNew = new char[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    if (IsOrNot(str, 0))
    {
        cout << endl;
        cout << "There is 4 similar neighbour symbols" << endl;
        cout << endl;
        cout << change(str, strNew, 0, 0);
    }
    else
    {
        cout << endl;
        cout << "There is NOT any 4 similar neighbour symbols" << endl;
    }


    delete[] strNew;
    delete[] str;
    cout << endl;
    return 0;
}