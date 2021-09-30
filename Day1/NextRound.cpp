#include <bits/stdc++.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    int n , k ,  ans=0;
    cin >> n >> k;
    vector<int> arr(n , 0);
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    int val = arr[k-1];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] >= val && arr[i]!=0) ans++;
    }
    cout << ans ;
    return 0;
}