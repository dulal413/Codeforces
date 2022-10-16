#include <bits/stdc++.h>
#define lli long long int
using namespace std;

class Solution{
    public:
    lli solve(lli n , lli sum){
        if(sum % n == 0) return 0;
        lli ans = 0;
        lli v1 = sum % n;
        lli v0 = n - v1;
        return v0 * v1;
    }
};

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif
    //end

    lli t;
    cin >> t;

    while(t--){
        lli n , sum=0 , val;
        cin >> n;
        for(lli i = 0 ; i < n ; i++) {
            cin >> val;
            sum += val;
        }
        Solution obj;
        cout << obj.solve(n , sum) << endl;
    }
    return 0;
}
