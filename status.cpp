#include<iostream>
using namespace std;
int main()
{
	int status;
	cin>>status;
	float discount=(30000*0.05);
	if(status==1)
	 cout<<"pay:"<<30000-discount;
	else
	  cout<<"pay:"<<30000;
}
