#include <iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int steps = 0;
    char previous = 'a';
    for (int i = 0; name[i] != '\0'; i++)
    {
        char current = name[i];
        int diff = abs(current - previous);
        steps += (diff < 13) ? diff : 26 - diff;
        previous = current;
    }
    cout << steps;
    return 0;
}