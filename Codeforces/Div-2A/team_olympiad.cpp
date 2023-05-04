#include <iostream>
#include <vector>
using namespace std;
int find_n(const int & a, const int &b, const int & c)
{
    if (a == 0 ||  b == 0 || c == 0)
        return 0;
    int arr[3] = {a, b, c};
    int s = a;
    for (int i = 1; i < 3; i++)
        if (arr[i] < s)
            s = arr[i];
    return s;
}

int main()
{
    int num_players;
    cin >> num_players;
    vector <int>players;
    int state[num_players] = {0};
    int n1 = 0, n2 = 0, n3 = 0;
    for (int i = 0; i < num_players; i++)
    {
        int p;
        cin >> p;
        players.push_back(p);
        switch (p)
        {
            case 1:
                n1++;
                break;
            case 2:
                n2++;
                break;
            case 3:
                n3++;
                break;
        }
    }

    int n_teams = find_n(n1, n2, n3);
    cout << n_teams<<endl;
    for (int tem_num = 0; tem_num < n_teams; tem_num++)
    {
        bool prog = 0, maths = 0, pe = 0;
        for (int i = 0; i < num_players; i++)
        {
            if (state[i] == 0)
            {
                if (!prog && players[i] == 1)
                {
                    prog = 1;
                    cout<<i+1<<" ";
                    state[i] = 1;
                }
                else if (!maths && players[i] == 2)
                {
                    maths = 1;
                    cout<<i+1<<" ";
                    state[i] = 1;
                }
                else if (!pe && players[i] == 3)
                {
                    pe = 1;
                    cout<<i+1<<" ";
                    state[i] = 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}