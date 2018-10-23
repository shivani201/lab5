#include<iostream>
using namespace std;
int main()
{
	//asking for input 
	cout<<"enter the number"<<endl;
	int a;
	//taking input
	cin>>a;
	//checking divisibility by 2
	if(a%2==0)
	{
		cout<<a<<" is even";
	}
	else
	{
		cout<<a<<" is odd";
	}
	return 0;
}
