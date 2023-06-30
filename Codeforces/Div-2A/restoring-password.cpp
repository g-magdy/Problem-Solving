#include <iostream>
#include <unordered_map>
#include <string.h>

using namespace std;
int main()
{
    string pw;
    cin >> pw;
    unordered_map<string, int> numbers;
    for (int i = 0; i< 10; i++)
    {
        string s;
        cin >> s;
        numbers[s] = i;
    }
    for (int i = 0; pw[i] != '\0'; i+= 10)
    {
        string n = pw.substr(i, 10);
        cout << numbers[n];
    }
    return 0;
}