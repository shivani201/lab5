	#include<iostream>
	using namespace std;
	int main()
	{
		//asking for input 
		cout<<"enter the character"<<endl;
		char a;
		//taking input	
		cin>>a;
		//converting it to ascii
		int c=int(a);
		
		//checking of the character ascii code lies within the range of alphabets i.e.(65,90)and(97,122);
		if((c<=90 && c>=65) || (c>=97 && c<=122))
		{
			cout<<a<<" is a character";
		}
		else
		{
			cout<<a<<" is not a character";
		}


		return 0;
	}
