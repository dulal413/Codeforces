#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli Solve(vector<lli> arr){
    bool isEqual = true;
    for(lli i = 1 ; i <= arr.size() ; i++){
        if(arr[i-1] != i){
            isEqual = false;
            break;
        }
    }
    if(isEqual) return 0;
    else if(arr[arr.size()-1] == 1 && arr[0] == arr.size()) return 3;
    else if(arr[0] == 1 || arr[arr.size()-1] == arr.size()) return 1;
    return 2;
}

void solve(){
    lli n;
    cin >> n;
    vector<lli> arr(n);
    for (lli i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << Solve(arr) << endl;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    lli t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
