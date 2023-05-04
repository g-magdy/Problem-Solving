#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *wires = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wires[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        int wire_index = x - 1, bird_index = y - 1;

        // x and y are human indices
        int birds_left_on_wire = wires[wire_index] - 1;
        wires[wire_index] = 0; // dead bird and others fly
        
        if (wire_index > 0)
            wires[wire_index - 1] += bird_index;
        if (wire_index <= n - 2)
            wires[wire_index + 1] += birds_left_on_wire - bird_index;
    }
    for (int i = 0; i < n; i++)
        cout << wires[i] << endl;
    delete[] wires;
    return 0;
}