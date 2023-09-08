#include <iostream>
#include <string>

using namespace std;
string CambiarDictado(int contador, string palabra);
int main()
{
	string palabra;
	int contador;
	
	cout<<"introduce una palabra"<<endl;
	cin>>palabra;
	
	cout<<CambiarDictado(contador, palabra)<<endl;
	
	return 0;
}
string CambiarDictado(int contador, string palabra)
{
	int i;
	string nueva;
	for(i=0; i<palabra.size()+1; i++)
	{
		if(palabra[i]==palabra[i]-1)
		{
			palabra[i]==palabra[i]-1;
		}
		else
		{
			contador ++;
		}
	}
	
	return contador;
}
