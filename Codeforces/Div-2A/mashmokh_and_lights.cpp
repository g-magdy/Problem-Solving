#include <iostream>
using namespace std;
int main()
{
    int n_lights, m_pushed;
    cin >> n_lights >> m_pushed;
    int *pushed = new int[m_pushed];
    for (int i = 0; i < m_pushed; i++)
        cin >> pushed[i];
    for (int light_i = 1; light_i <= n_lights ; light_i++)
        for (int j = 0; j < m_pushed; j++)
            if (pushed[j] <= light_i)
            {
                cout << pushed[j] << ' ';
                break;
            }
    return 0;
}