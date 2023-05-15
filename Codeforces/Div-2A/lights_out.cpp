#include <iostream>
using namespace std;
# define valid(i, j) (i > -1 && i < 3) && (j > -1 && j < 3)

void toggle(int leds[3][3] , int i, int j)
{
    leds[i][j] = valid(i, j) ? !leds[i][j] : leds[i][j];
    leds[i - 1][j] = valid(i - 1, j) ? !leds[i - 1][j] : leds[i - 1][j];
    leds[i + 1][j] = valid(i + 1, j) ? !leds[i + 1][j] : leds[i + 1][j];
    leds[i][j - 1] = valid(i, j - 1) ? !leds[i][j - 1] : leds[i][j - 1];
    leds[i][j + 1] = valid(i, j + 1) ? !leds[i][j + 1] : leds[i][j + 1];
}

int main()
{
    int t;
    int lights[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cin >> t;
            if (t % 2 == 1)
                toggle(lights, i, j);
        }

    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
            cout << lights[i][j];
        cout << endl;
    }
    return 0;
}