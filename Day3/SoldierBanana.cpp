// Sum of AP : (n * (n + 1) / 2)
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    lli k , n , w;
    cin >> k >> n >> w;
    lli price = ((w*(w+1)) / 2)*k;
    cout << ((price-n) > 0 ? (price-n) : 0);
    return 0;
}