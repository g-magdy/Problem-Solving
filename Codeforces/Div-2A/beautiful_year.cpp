#include <iostream>
using namespace std;

bool isDistinct (string s)
{
    while (!s.empty())
    {
        char c = s.back();
        s.pop_back();
        for (int i = 0; s[i] != '\0'; i++)
            if (s[i] == c)
                return false;
    }
    return true;
}

int main()
{
    int year;
    cin >> year;
    year++;
    while (!isDistinct(to_string(year)))
        year++;
    cout << year;
    return 0;
}