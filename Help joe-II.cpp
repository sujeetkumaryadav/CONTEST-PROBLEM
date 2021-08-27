#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	long long arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		arr[i]=arr[i]%m;
	}
	sort(arr,arr+n);
	int q;
	cin>>q;
	while(q--)
	{
	long long x;
	cin>>x;
	x=x%m;
	long long *ptr=upper_bound(arr,arr+n,m-x-1);
	if(ptr!=arr)
      ptr--;
	
	cout<<max((arr[n-1]+x)%m,(*ptr+x)%m)<<endl;
	}
}