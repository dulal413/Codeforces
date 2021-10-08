#include<bits/stdc++.h>
using namespace std;
int knapsack(vector<int> v,vector<int> w, int cp, int n){
	int dp[n+1][cp+1];
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<cp+1;j++){
			if(i==0||j==0)
				dp[i][j]=0;
		}
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<cp+1;j++){
			if(w[i-1]<=cp)
				dp[i][j]=max(v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][cp];
}

int main(){
	int n,cp;
	vector <int> v,w;
	cin>>n>>cp;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		w.push_back(x);
	}
	cout<<knapsack(v,w,cp,n)<<endl;
	return 0;


}
