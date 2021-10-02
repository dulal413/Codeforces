#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif
    lli n;
    cin >> n;
    int count = 0;
    while(n--){
        lli p , q;
        cin >> p >> q;
        if(q-p >= 2) count++;
    }
    cout << count;
    return 0;
}