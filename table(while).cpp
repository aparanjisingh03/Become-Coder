#include<iostream>
using namespace std;
int main()
{
	int i=1,n,range;
	cin>>n;
	cin>>range;
	while(i<=range)
	{
		cout<<n<<"X"<<i<<"="<<n*i<<endl;
		i+=2;
	}
	return 0;
}
