#include <iostream>
using namespace std;
int main()
{
    int y, w;
    cin >> y >> w;
    int dot = (y > w) ? 6 - y + 1 : 6 - w + 1;
    switch (dot)
    {
    case 0:
        cout << "0/1";
        break;
    case 1:
        cout << "1/6";
        break;
    case 2:
        cout << "1/3";
        break;
    case 3:
        cout << "1/2";
        break;
    case 4:
        cout << "2/3";
        break;
    case 5:
        cout << "5/6";
        break;
    case 6:
        cout << "1/1";
        break;
    }
    return 0;
}