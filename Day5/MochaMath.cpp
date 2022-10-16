#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve1(){
    lli n;
    cin >> n;
    lli ans = 0;
    for(lli i = 0 ; i < n ; i++){
        if(i == 0){
            cin >> ans;
        }
        else{
            lli val;
            cin >> val;
            ans = ans & val;
        }
    }
    cout << ans << endl;
}

void solve2(){
    lli t;
    cin >> t;
    while(t--){
        solve1();
    }
}

int main(){

    solve2();
    return 0;
}
