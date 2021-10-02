#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int isBY(int year){
    map<int , int> mp;
    while (year != 0)
    {
        int rem = year % 10;
        mp[rem]++;
        if(mp[rem] > 1) return false;
        year /= 10;
    }
    return true;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    // #endif

    int year;
    cin >> year;
    year++;
    while(year){
        if(isBY(year)) break;
        year++;
    }
    cout << year;
    return 0;
}