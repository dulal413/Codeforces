#include <bits/stdc++.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    int n , ans = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int val , sum = 0;
        for(int j = 0 ; j < 3 ; j++){
            cin >> val;
            sum += val;
        }
        if(sum>=2) ans++;
    }
    cout << ans;
}