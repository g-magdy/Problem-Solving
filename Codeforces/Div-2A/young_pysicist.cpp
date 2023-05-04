#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *Xcomps = new int[n], *Ycomps = new int[n], *Zcomps = new int[n];
    int Sx = 0, Sy = 0, Sz = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> Xcomps[i] >> Ycomps[i] >> Zcomps[i];
        Sx += Xcomps[i];
        Sy += Ycomps[i];
        Sz += Zcomps[i];
    }
    if (!Sx && !Sy && !Sz)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}