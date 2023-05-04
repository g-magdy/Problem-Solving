#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    // 26 english letters
    bool letters[26] = {0};
    
    int n;
    cin >> n;
    char *word = new char[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
        char l = tolower(word[i]);
        letters[l - 'a'] = true;
    }
    bool result = true;
    for (int i = 0; i < 26; i++)
        if (letters[i] == 0)
        {
            result = false;
            break;
        }

    if (result)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
