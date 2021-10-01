#include <bits/stdc++.h>
#define lli unsigned long long int
using namespace std;

bool isLucky(lli num){
    lli temp = num;
    lli count = 0;
    while(num != 0){
        int rem = num % 10;
        if(rem == 4 || rem == 7) count++;
        num /= 10;
    }
    num = temp;
    while(num != 0 && count > 0){
        int rem = num % 10;
        if(rem == count) return true;
        num /= 10;
    }
    return false;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif
    
    lli n;
    cin >> n;

    if(isLucky(n)) cout << "YES";
    else cout << "NO";

    return 0;
}