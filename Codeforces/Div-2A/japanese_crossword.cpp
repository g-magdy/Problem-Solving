#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> vec;
    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'B')
        {
            sum++;
            if (str[i+1] == '\0')
                vec.push_back(sum);
        }
        else if (sum != 0)
        {
            vec.push_back(sum);
            sum = 0;
        }
    }
    cout << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}