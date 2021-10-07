#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve(){
    lli n , step = 0;
    cin >> n;

    for(int i = 5 ; i>=1 ; i--){
        step += (n / i);
        n%=i;
    }

    cout << step;
}

int main(){
    solve();
    return 0;
}
