#include<bits/stdc++.h>
using namespace std;
int hof(int x)
{
	for(int i=9;i>=2;i--)
	{
		if(x%i==0){
			return i;
			break;
		}
	}
	return 0;

}

int main()
{
	int n,i=1,ar[21], ans=0;
	ar[0]=0;
	cin>>n;
	while(n>0)
	{
		ar[i]=hof(n);
		cout<<ar[i];
		i++;
		if(hof(n)==0)
			break;
		n=n/hof(n);
	}
	for(int j=i;j>=1;j--)
		cout<<ar[i]<<endl;
}
