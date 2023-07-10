#include <iostream>
using namespace std;
int main()
{
    int days, bowls, plates;
    int wash = 0;
    cin >> days >> bowls >> plates;
    for (int i = 0, x = 0; i < days; i++)
    {
        cin >> x;
        if (x == 1)
        {
            if (bowls == 0)
                wash++;
            else
                bowls--;
        }
        else if (x == 2)
        {
            if (plates == 0 && bowls == 0)
                wash++;
            else if (plates != 0)
                plates--;
            else
                bowls--;
        }
    }
    cout << wash;
    return 0;
}