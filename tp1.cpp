#include<iostream>
using namespace std;
bool EsMultiplode3(int n);
int main()
{
	int n;
	bool flag;
	
	cout<<"ingresa un numero"<<endl;
	cin>>n;
	
	cout<<EsMultiplode3(n)<<endl;
	
	if(flag==true)
	{
		cout<<"es multiplo"<<endl;
	}
	if(flag==false)
	{
		cout<<"no es multiplo"<<endl;
	}
	return 0;
}
bool EsMultiplode3(int n)
{
	bool flag;
	
	if(n%3==0)
	{
		flag = true;
	}
	if(n&3!=0)
	{
		flag = false;
	}
	
	return flag;
	
}
