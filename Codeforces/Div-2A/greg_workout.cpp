#include <iostream>
using namespace std;
int main()
{
    int execrises[3] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        execrises[i % 3] += val;
    }
    int maximum = max(max(execrises[0], execrises[1]), execrises[2]);
    if (maximum == execrises[0])
        cout << "chest";
    else if (maximum == execrises[1])
        cout << "biceps";
    else
        cout << "back";
    return 0;
}