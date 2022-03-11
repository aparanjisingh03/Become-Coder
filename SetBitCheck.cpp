#include<iostream>
using namespace std;
int main()
{
	int n;
	int p;
	cin>>n;
	cin>>p;
	n=n>>p;
	if(n&1)
	cout<<"true";
	else
	cout<<"false";
	
}
