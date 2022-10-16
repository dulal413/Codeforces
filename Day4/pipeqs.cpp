#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, r;
	vector<int> inc, oug;
	cin>>n>>m>>r;
	for (int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		inc.push_back(p-r);
	}
	for (int i=0;i<m;i++)
	{
		int q;
		cin>>q;
		oug.push_back(q-r);
	}
	int sin=accumulate(inc.begin(),inc.end(),0);
	int sou=accumulate(oug.begin(),oug.end(),0);
	if(sin==sou)
		cout<<"BALANCED";

	else if(sin-sou>0)
		cout<<-(sin-sou+2);
	else
		cout<<sou-sin+2;

return 0;

}
