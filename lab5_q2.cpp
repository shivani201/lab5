#include<iostream>
using namespace std;
int main()
{
	//asking for input
	cout<<"enter the three numbers"<<endl;
	float a,b,c;
	//taking the input
	cin>>a>>b>>c;
	//the condition game
	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<" is the biggest number";
		}
		else
		{
			cout<<c<<" is the biggest number";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<b<<" is the biggest number";
		}
		else
		{
			cout<<c<<" is the biggest number";
		}
	}
	return 0;
}
