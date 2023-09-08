#include <iostream>
#include <string>

using namespace std;
string JaponizarNombre(string nombre);
int main()
{
	string nombre;
	
	cout<<"introduce un nombre"<<endl;
	getline(cin,nombre);
	
    cout<<JaponizarNombre<<(nombre)<<endl;
	
	return 0;
}
string JaponizarNombre(string nombre)
{
	int i;
	string nnombre;
	for(i=0; i<nombre.size(); i++)
	{
		if(nombre[i+1]=='s' || nombre[i]=='d' || nombre[i]=='i' || nombre[i]=='r' || nombre[i]=='c' || nombre[i]=='l' || nombre[i]=='t' || nombre[i]=='m' || nombre[i]=='p' || nombre[i]=='b' || nombre[i]=='f' || nombre[i]=='g' || nombre[i]=='h' || nombre[i]=='j' || nombre[i]=='q' || nombre[i]=='v' || nombre[i]=='x' || nombre[i]=='y' || nombre[i]=='z' || nombre[i]=='k' || nombre[i]=='w')
		{
			nnombre+='u';
		}
		else
		{
			nnombre+=nombre[i];
		}
	}
	
	return nnombre;
}
