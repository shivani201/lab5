#include<iostream>
using namespace std;
int main()
{
	//asking for input
	cout<<"enter the number"<<endl;
	int a;
	//taking input
	cin>>a;
	//checking for both the conditions 
	if(a%5==0 && a%11==0)
	{
		cout<<a<<" is divisible by 5 and 11";
	}
	else
	{
		cout<<a<<" is not divisible by 5 and 11";
	}
	return 0;
}
