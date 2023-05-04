#include <iostream>
using namespace std;
int randint(int a)
{
    return rand() % a + 1;
}

int main ()
{
    srand(time(0));
    for (int i = 6; i <= 30; i++)
    {
        cout << i << " " << i << " " << randint(7) << " " << randint(3) << endl;
    }
    return 0;
}