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
        vector<lli> arr(n , 0), ans(n , 0);
        for(lli i = 0 ; i < n ; i++) cin >> arr[i];
        lli minDis = n - 1;
        for(lli i = n-1 ; i >= 0 ; i--){
            minDis = min(minDis , i - arr[i]);
            if(i > minDis) ans[i] = 1;
            if(i == minDis) minDis--;
        }
        for(auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}