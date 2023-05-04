#include<iostream>
#include <string>
using namespace std;
int main()
{
    string path;
    string instructions;

    cin >> path >> instructions;

    int current_index = 0;
    for (int i = 0; instructions[i] != '\0'; i++)
    {
        if (path[current_index] == instructions[i])
            current_index++;
    }
    cout << current_index + 1;
    return 0;
}