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
        string s;
        lli n , k , count = 0;
        cin >> n >> k;
        cin >> s;

        lli l = 0 , r = n-1;
        while(l < r && s[l] == s[r]){
            count++;
            l++;
            r--;
        }
        if(count>=k+1 || (count*2 < n && count >= k)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}