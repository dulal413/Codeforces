#include <bits/stdc++.h>
using namespace std;

int difference(string s1 , string s2){
    for(int i = 0 ; i < s1.length() ; i++){
        int val1 = s1[i] - (s1[i]>='a' && s1[i]<='z' ? 'a' : 'A');
        int val2 = s2[i] - (s2[i]>='a' && s2[i]<='z' ? 'a' : 'A');
        if(val1 < val2) return -1;
        else if(val1 > val2) return 1;
    }
    return 0;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    string s1 , s2;
    cin >> s1 >> s2;
    cout << difference(s1 , s2);
    return 0;
}