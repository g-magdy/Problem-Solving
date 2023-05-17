#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string x, y, z;
    cin >> x >> y >> z;
    bool hope = true;
    for (int i = 0; x[i] != '\0' && hope; i++)
    {
        int a = z.find(x[i]);
        if (a < 0)
            hope = false;
        else
            z.replace(a, 1, "");
    }

    for (int i = 0; y[i] != '\0' && hope; i++)
    {
        int a = z.find(y[i]);
        if (a < 0)
            hope = false;
        else
            z.replace(a, 1, "");
    }
    cout << ((hope && z.size() == 0) ? "YES" : "NO") << endl;
    return 0;
}