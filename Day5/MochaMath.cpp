#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    lli t;
    cin >> t;
    while(t--){
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
    return 0;
}