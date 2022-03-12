#include<iostream>
using namespace std;
int main()
{
	int year;
	int backlogs;
	string branch;
	float percentage;
	cin>>year;
	cin>>backlogs;
	cin>>branch;
	cin>>percentage;
	if(year==3&&backlogs==0&&(branch=="it"||branch=="cse"||branch=="ece")&&percentage>70)
		cout<<"he/she is eligible";
	else
	    cout<<"not eligible";
}
