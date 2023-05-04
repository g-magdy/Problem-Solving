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
    cout << right << endl;
    cout << res << endl;

    right += res.back();
    res.pop_back();
    
    cout << right << endl;
    cout << res;
    return 0;
}