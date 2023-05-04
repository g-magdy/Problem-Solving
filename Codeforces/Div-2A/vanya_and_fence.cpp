#include <iostream>
using namespace std;
int main()
{
    int n, h;
    cin>>n>>h;
    int width = 0; // IMPORTANT
    for (int i = 0; i < n; i++)
    {
        int h_friend;
        cin>>h_friend;
        width += (h_friend > h) ? 2 : 1;
    }
    cout<<width;
    return 0;
}