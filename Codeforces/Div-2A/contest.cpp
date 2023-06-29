#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float misha = max(0.3 * a, (double)a - (a / 250) * c);
    float vasya = max(0.3 * b, (double)b - (b / 250) * d);
    cout << (misha > vasya ? "Misha" : misha < vasya ? "Vasya" : "Tie");
    return 0;
}