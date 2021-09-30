#include <bits/stdc++.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    int x , y , val;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> val;
            if(val){
                x = i+1;
                y = j+1;
            }
        }
    }
    cout << abs(x-3) + abs(y-3) ;
}