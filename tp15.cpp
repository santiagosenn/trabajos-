#include <iostream>
using namespace std;
string IntroducirCaracter(string caracter, string cadena);
int main()
{
	string cadena, caracter;
	
	cout<<"introduce una frase"<<endl;
	getline(cin,cadena);
	
	cout<<"introduce un caracter"<<endl;
	cin>>caracter;
	
	cout<<IntroducirCaracter(caracter, cadena)<<endl;
	
	
	return 0;
}
string IntroducirCaracter(string caracter, string cadena)
{
	int i;
	
	string ncadena;
	
	for(i=0; i<cadena.size(); i++)
	{
		if(cadena[i]==' ')
		{
			ncadena += caracter;
		}
		else
		{
			ncadena += cadena[i];
		}
	}
	
	return ncadena;
}
