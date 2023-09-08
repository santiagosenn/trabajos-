#include <iostream>
#include <string>

using namespace std;
string InsertarCaracter(string palabra,string caracter);
int main()
{	int i;
	string palabra,caracter;
	
	cout<<"ingrese palabra"<<endl;
	cin>>palabra;
	
	cout<<"ingrese caracter"<<endl;
	cin>>caracter;
	
	cout<<InsertarCaracter(palabra,caracter)<<endl;
	
	return 0;
}
string InsertarCaracter(string palabra,string caracter)
{
	int i;
	string nuevapalabra;
    for(i=0;i<palabra.size();i++)
	{
		nuevapalabra += palabra[i];
		nuevapalabra += caracter[0];
	}

	
	return nuevapalabra;
	
}
