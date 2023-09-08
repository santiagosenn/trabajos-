#include <iostream>
using namespace std;
int ContarValor(string frase);
int main()
{
	int contador;
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
		if(frase[i]=='a' || frase[i]=='e' || frase[i]=='o' || frase[i]=='s' || frase[i]=='d' || frase[i]=='i' || frase[i]=='n' || frase[i]=='r' || frase[i]=='c' || frase[i]=='l' || frase[i]=='t' || frase[i]=='u' || frase[i]=='m' || frase[i]=='p' || frase[i]=='b' || frase[i]=='f' || frase[i]=='g' || frase[i]=='h' || frase[i]=='j' || frase[i]=='q' || frase[i]=='v' || frase[i]=='x' || frase[i]=='y' || frase[i]=='z' || frase[i]=='k' || frase[i]=='w')
		{
			contador+=1;
		}
	}
	return contador;
}
