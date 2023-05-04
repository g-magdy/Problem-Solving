#include <iostream>
using namespace std;
int main()
{
    srand(time(0));
    for (int i = 0; i < 50; i++)
        cout << rand() << endl;
    return 0;
}