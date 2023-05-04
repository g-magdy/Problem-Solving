#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int n_distinct = name.length();
    for (int i = 0; name[i] != '\0'; i++)
    {
        for (int j = 0; name[j] != '\0'; j++)
        {
            if (i < j && name[i] == name[j])
            {
                //cp_name.erase(j, 1);
                n_distinct--;
            }
        }
    }
    //cout << name.length() << endl << n_distinct << endl;
    if (n_distinct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}