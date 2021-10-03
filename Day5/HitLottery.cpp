#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){

    vector<int> arr({100,20,10,5,1});
    lli money;
    cin >> money;
    lli cur = 0;
    for(auto it : arr){
        cur += (money / it);
        money %= it;
    }
    cout << cur;
    return 0;
}