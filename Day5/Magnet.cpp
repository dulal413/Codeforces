#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    lli n;
    cin >> n;
    vector<string> arr(n);
    for(lli i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int count = 1;
    for(lli i = 1 ; i < n ; i++){
        if(arr[i][0] == arr[i-1][1]) count++;
    }
    cout << count ;

    return 0;
}