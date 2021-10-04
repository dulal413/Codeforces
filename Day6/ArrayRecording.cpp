#include <bits/stdc++.h>
#define lli long long int
using namespace std;

vector<lli> modifyArr(vector<lli> arr){
    vector<lli> temp(arr.size());
    lli count = 0;
    for(auto it : arr){
        if(it % 2 == 0) temp[count++] = it;
    }
    for(auto it : arr){
        if(it % 2 != 0) temp[count++] = it;
    }
    return temp;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    lli t;
    cin >> t;
    while(t--){
        lli n , count = 0;
        cin >> n;
        vector<lli> arr(n);
        for(lli i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        arr = modifyArr(arr);
        for(lli i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(__gcd(arr[i] , 2*arr[j]) > 1) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}