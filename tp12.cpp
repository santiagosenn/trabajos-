#include <iostream>
using namespace std;
int ContarValor(string frase);
int main()
{
	int contador=1;
	string frase;
	
	cout<<"introduce una frase"<<endl;
    getline(cin,frase);
	
	cout<<ContarValor(frase)<<endl;
	
	return 0;
}
int ContarValor(string frase)
{
	int i,contador=0;
	
	for(i=0;i<frase.size(); i++)
	{
		if(frase[i]==' ')
		{
			contador+=1;
		}
	}
	return contador;
}
