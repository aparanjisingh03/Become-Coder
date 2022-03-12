#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int count=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	count+=1;
	if(count==2)
	cout<<"prime";
	else
	cout<<"not a prime";
}
