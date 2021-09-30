#include <bits/stdc++.h>
using namespace std;

string sortString(string str){
    int num[] = {0 , 0 , 0} , count = 0;
    string s1 = "";
    for(int i = 0 ; i < str.length() ; i+=2){
        num[str[i] - '1']++;
        count++;
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < num[i] ; j++){
            s1 += to_string(i+1);
            count--;
            if(count) s1 += '+';
        }
    }
    return s1;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif
    string str;
    cin >> str;
    cout << sortString(str);
    return 0;
}