#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> rats, women_children, men;
    string captain;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name, role;
        cin >> name >> role;
        if (role == "rat")
            rats.push(name);
        else if (role == "man")
            men.push(name);
        else if (role == "captain")
            captain = name;
        else
            women_children.push(name);
    }
    while (!rats.empty())
    {
        cout << rats.front() << endl;
        rats.pop();
    }
    while (!women_children.empty())
    {
        cout << women_children.front() << endl;
        women_children.pop();
    }
    while (!men.empty())
    {
        cout << men.front() << endl;
        men.pop();
    }
    cout << captain;
    return 0;
}