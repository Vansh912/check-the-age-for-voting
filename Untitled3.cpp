#include<iostream>

using namespace std;

int main()
{
	int age;
	
	cout<<"please enter your age ";
	
	cin>>age;
	
	if(age<0)
	{
		cout<<"please enter valid age ";
		
	}
	else
	{
		if(age<18)
		{
			cout<<"you are not eligible for voting ";
			
		}
		if(age>=18)
		{
			cout<<"you are eligible to vote please make sure to vote ";
		}
	}
	return 0;
}
