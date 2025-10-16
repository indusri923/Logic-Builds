#include<iostream>
using namespace std;
inline int add(int a ,int b)
{
	return(a+b);
}
int main()
{
	int a,b;
	cout<<"Enter the value of A:";
	cin>>a;
	cout<<"Enter the value of B:";
	cin>>b;
	cout<<"Addition of 'a' and 'b' is:"<<add(a,b);
	return 0;
}
