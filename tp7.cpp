#include<iostream>
using namespace std;
int ContarLetraA(string frase);
int main()
{
	int contador;
	string frase;
	
	cout<<"introduce una frase"<<endl;
	getline(cin,frase);
	
	cout<<ContarLetraA(frase)<<endl;
	
	return 0;
}
int ContarLetraA(string frase)
{
	
	int contador=0;
	
	for(int i=0; i<frase.size(); i++)
	{
		if(frase[i]=='a' || frase[i]=='A')
		{
			contador++;
		}
	}
	return contador;
}
