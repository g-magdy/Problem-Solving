#include <iostream>
#include <string>
using namespace std;

int main()
{
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char direction;
    cin >> direction; // 'L' or 'R'
    int shift = (direction == 'L') ? 1 : -1;
    string s;
    cin >> s;

    int target;
    for (int i = 0; s[i] != '\0'; i++)
    {
        target = keyboard.find(s[i]) + shift;
        cout << keyboard[target];
    }
    return 0;
}