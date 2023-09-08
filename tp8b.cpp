#include <iostream>
#include <string>

using namespace std;
string ProcesaPalabra(string palabra);
int main()
{
	string palabra;
	
	cout<<"introduce una palabra"<<endl;
	cin>>palabra;
	
	cout<<ProcesaPalabra(palabra)<<endl;
	
	return 0;
}
string ProcesaPalabra(string palabra)
{
	int i;
	string nueva;
	for(i=0; i<palabra.size()-1; i++)
	{
		if(palabra[i]=='a')
		{
			nueva +='b';
		}
		else
		{
			nueva += palabra[i];
		}
	}
	
	return nueva;
}
