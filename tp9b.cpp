#include <iostream>
#include <string>
using namespace std;

int main()
{
	string palabra, npalabra, cartel="no es palindroma";
	int i,l;
	bool flag= true;
	cout<<"ingrese frase"<<endl;
	getline (cin, palabra);
	
	for(i = 0; i< palabra.size () ; i++)
	{
		if(palabra[i]=' ')
		{
			i++;
		}
	    else
	    {
		npalabra += palabra [i];
     	}
	} 
	  l=npalabra.size();
	  for(i=0; i<npalabra.size()/2;i++)
	  {
	  	if(npalabra[i]!=npalabra[l-i])
	  	{
	  		flag = false;
	  		i = npalabra.size();
	  	}
	  
	  }
	  if(flag==true)
	  {
	  	cartel="es polindromo";
	  }
	  cout<<cartel<<endl;

	return 0;
}

