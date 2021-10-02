#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif
    string s;
    cin >> s;
    lli cap = 0 , small = 0;
    for(lli i = 0 ; i < s.length() ; i++){
        if(s[i] >= 'A' && s[i] <= 'Z') cap++;
        else small++;
    }
    if(small < cap){
        for(lli i = 0 ; i < s.length() ; i++){
            if(s[i]>='a' && s[i]<='z')
                s[i] -= ('a' - 'A');
        }
    }
    else{
        for(lli i = 0 ; i < s.length() ; i++){
            if(s[i]>='A' && s[i]<='Z')
                s[i] += ('a' - 'A');
        }
    }
    cout << s;
    return 0;
}