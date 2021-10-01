#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    lli rev , num , k;
    cin >> num >> k;
    
    while(k > 0){
        int ld = num % 10;
        if(k < ld){
            num -= k;
            k = 0;
            break;
        }
        else if(ld == 0){
            num /= 10;
            k--;
            continue;
        }
        num -= ld;
        k -= ld;
    }
    cout << num;
    return 0;
}