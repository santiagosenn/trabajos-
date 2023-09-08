#include<iostream>
using namespace std;
int EsMayor(int a,int b, int c, int d);
int main()
{
	int a, b, c, d;
	
	cout<<"introduce el valor de a"<<endl;
	cin>>a;
	
	cout<<"introduce el valor de b"<<endl;
	cin>>b;
	
	cout<<"introduce el valor de c"<<endl;
	cin>>c;
	
	cout<<"el numero mayor es:"<<EsMayor(a, b, c, d)<<endl;
	
	return 0;
}
int EsMayor(int a, int b, int c, int d)
{
	
	if(a>b && a>c)
	{
		d=a;
	}
	if(b>a && b>c)
	{
		d=b;
	}
	if(c>a && c>b)
	{
		d=c;
	}
	
	return d;	
}
