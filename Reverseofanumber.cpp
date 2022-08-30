#include<iostream>
using namespace std;

int main()
{
	int i,rev=0;
	cout<<"enter the no to find reverse : ";
	cin>>i;
	
	while(i>0)
	{
		rev=(rev*10)+(i%10);
		i=i/10;
	}
	cout<<"Reverse : "<<rev;
	return 0;
	
}
