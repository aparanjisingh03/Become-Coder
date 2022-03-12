#include<iostream>
using namespace std;
int main()
{
	int money;
	cin>>money;
	if(money>=1000)
		cout<<"bunk the college";
	else if(money>=500 && money<=1000)
	    cout<<"party";
	else if(money>100)
		cout<<"bunk";
	else
	    cout<<"cyringg class again!";
}
