#include <iostream>
using namespace std;
string CalcularDDD(int codigo);
int main()
{
	int codigo;
	
	cout<<"introduce un codigo"<<endl;
	cin>>codigo;
	
	cout<<CalcularDDD(codigo)<<endl;
	
	return 0;
}
string CalcularDDD(int codigo)
{
    string msj=0;
	
	if(codigo==61)
	{
		msj=="brasilia";
	}
	if(codigo==71)
	{
		msj=="salvador";
	}
	if(codigo==11)
	{
		msj=="san paulo";
	}
	if(codigo==21)
	{
		msj=="rio de janeiro";
	}
	if(codigo==32)
	{
		msj=="juiz de fora";
	}
	if(codigo==19)
	{
		msj=="campinas";
	}
	if(codigo==27)
	{
		msj=="victoria";
	}
	if(codigo==31)
	{
		msj=="Belo horizonte";
	}
	
	return msj;
	
}
