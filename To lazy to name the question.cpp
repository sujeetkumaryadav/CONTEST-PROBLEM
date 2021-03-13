#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A,B,C;
	cin>>A>>B>>C;
	int cth_num;
	for(int i=2;C>0;i++)
	{
		if(i%A==0||i%B==0)
		{
         C--;
		 cth_num=i;
		}
	}
	int lcm;
	for(int i=1;i<=(A*B);i++)
	{
		if(i%A==0 && i%B==0)
		{
			lcm=i;
			break;
		}
	}
	int step;
	if(cth_num%A==0 && cth_num%B==0)
	{
	step =lcm;
	}
	else if(cth_num%A==0)
	{
	step=A;
	}
	else
	{
	step=B;
	}
	for(int i=cth_num;i>=0;i=i-step)
	{
		cout<<i<<" ";
	}
}
