#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> goodCars;
    int car;
    for (int i = 0; i < n; i++)
    {
        bool good = true;
        for (int j = 0; j < n && good; j++)
        {
            cin >> car;
            if (car == 1 || car == 3)
                good = false;
        }
        if (good)
            goodCars.push_back(i + 1);
    }
    int g = goodCars.size();
    cout << g << endl;
    for (int i = 0; i < g; i ++)
        cout << goodCars[i] << ' ';
    return 0;
}