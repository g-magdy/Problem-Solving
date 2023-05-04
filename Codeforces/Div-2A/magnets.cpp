#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //int *magnets = new int[n];
    int old = 0, groups = 0;
    for (int i = 0; i < n; i++)
    {
        int neew;
        cin >> neew;
        if(neew != old)
            groups++;
        old = neew;
    }
    cout << groups;
    return 0;
}