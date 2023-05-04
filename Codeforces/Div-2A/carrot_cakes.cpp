#include<iostream>
using namespace std;
int main()
{
    int n_cakes, time_bake_k, k, time_build;
    cin >> n_cakes >> time_bake_k >> k >> time_build;
    float t1 = ((float)n_cakes / k) * time_bake_k; // without second oven
    
    float t2 = 0;
    // while i'm building the second i'll let the first bake.
    //t2 += 
    return 0;
}