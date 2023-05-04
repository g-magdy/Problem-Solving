#include <iostream>
using namespace std;
int main()
{
    string left, right, s;
    cin >> s;
    int delimiter = s.find('|'); // returns index of |
    left = s.substr(0, delimiter); // start from inclusiv
    right = s.substr(delimiter+1); // till end
    string res;
    cin >> res;
    while (!res.empty())
    {
        if (left.size() <= right.size())
        {
            left += res.back();
            res.pop_back();
        }
        else if (left.size() > right.size())
        {
            right += res.back();
            res.pop_back();
        }
    }
    if (left.size() == right.size())
        cout << left << "|" << right;
    else
        cout << "Impossible";
    return 0;
}