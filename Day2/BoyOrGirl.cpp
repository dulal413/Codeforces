#include <bits/stdc++.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif
    
    vector<int> arr(26 , 0);
    string s;
    cin >> s;
    for(int i = 0 ; i < s.length() ; i++){
        arr[s[i] - 'a']++;
    }

    int count = 0;
    for(int i = 0 ; i < 26 ; i++){
        if(arr[i] > 0) count++;
    }
    
    if(count % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}