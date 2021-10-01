#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    lli n , step = 0;
    cin >> n;

    for(int i = 5 ; i>=1 ; i--){
        step += (n / i);
        n%=i;
    }

    cout << step;
    return 0;
}