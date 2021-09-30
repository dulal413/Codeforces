#include <bits/stdc++.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    int n;
    cin >> n;
    while(n--){
        string s;
        getline(cin >> ws , s);
        if(s.length() <= 10) cout << s << endl;
        else{
            string ans = "";
            ans += *s.begin();
            ans += to_string(s.length() - 2);
            ans += *(s.end() - 1);
            cout << ans << endl;
        }
    }
    return 0;
}