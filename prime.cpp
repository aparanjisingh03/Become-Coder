#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int count=0;
	for(i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			if(n%i!=i)
			{
				count++;
			}
		}
	}
	if(count==2)
	cout<<"prime";
	else
	cout<<"not a prime";
}
