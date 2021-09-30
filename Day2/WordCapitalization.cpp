#include <bits/stdc++.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    string s;
    cin >> s;
    if(s[0] >='A' && s[0]<='Z'){
        cout << s;
    }
    else{
        s[0] -= ('a' - 'A');
        cout << s;
    }
    return 0;
}