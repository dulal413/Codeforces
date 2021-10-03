#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli getPrize(lli n){
    if(n < 6) return 15;
    else if(n % 6 == 0) return (n / 6) * 15;
    else    if(n % 6 <= 2) return (n / 6) * 15 + 5;
    else if( n % 6 <= 4) return (n / 6) * 15 + 10;
    else return (n / 6) * 15 + 15;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    lli t;
    cin >> t;
    while(t--){
        lli n;
        cin >> n;
        cout << getPrize(n) << endl;
    }
    return 0;
}