#include <bits/stdc++.h>
#define lli long long int
using namespace std;

class Solution{
    public:
    void solve(lli a , lli b){
        lli dif = abs(a - b);
        if(dif == 0){
            cout << "0 0\n";
            return;
        }
        lli v1 = a % dif;
        lli v2 = dif - v1;
        cout << dif << " " << min(v1 , v2) << endl;
    }
};

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    Solution obj;
    lli t;
    cin >> t;
    while(t--){
        lli a , b;
        cin >> a >> b;
        obj.solve(a , b);
    }
    return 0;
}