#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif
    
    lli a , b,ans = 0;
    cin >> a >> b;
    while(a <= b){
        a *= 3;
        b *= 2;
        ans++;
    }
    cout << ans;
    return 0;
}