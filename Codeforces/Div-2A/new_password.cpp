#include <iostream>
#include <string>
using namespace std;
int main()
{
    int length, distinct;
    cin >> length>> distinct;
    string password = "";
    for (int i = 0; i < length; i++)
    {
        for (int l = 0; l < distinct; l++)
            if (password.length() < length)
                password+= 'a' + l;
            else
                break;

        if (password.length() == length)
            break;
    }
    cout << password;
    return 0;
}