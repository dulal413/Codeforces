#include <bits/stdc++.h>
using namespace std;

bool isPossibleToDivide(int num){
    return num > 3 && num%2 == 0;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    int n;
    cin >> n;
    if(isPossibleToDivide(n)) cout << "YES";
    else cout << "NO";
    return 0;
}