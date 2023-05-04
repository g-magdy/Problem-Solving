#include <iostream>
using namespace std;
int main()
{
    int n_oranges, accepted_size, waste_max;
    cin >> n_oranges >> accepted_size >> waste_max;
    int num_empty = 0;
    int currentTotal = 0;
    for (int i = 0; i < n_oranges; i++)
    {
        int orange;
        cin >> orange;
        if (orange <= accepted_size)
        {
            currentTotal += orange;
            if (currentTotal > waste_max)
            {
                currentTotal = 0;
                num_empty++;
            }
        }
    }
    cout << num_empty;
    return 0;
}