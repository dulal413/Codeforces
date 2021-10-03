#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    lli n , val , sum = 0;
    cin >> n;
    for(lli i = 0 ; i < n ; i++){
        cin >> val;
        sum += val;
    }
    if(sum >= 1) cout << "HARD";
    else cout << "EASY";

    return 0;
}