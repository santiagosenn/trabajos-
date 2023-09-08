#include<iostream>
using namespace std;
float CalcularSalario(int salario);
int main()
{
	int salario;
	
	cout<<"insira seu salário"<<endl;
	
	cout<<"seu novo salário é"<<CalcularSalario(salario)<<endl;

	return 0;
}
float CalcularSalario(int salario)
{
	int nsalario;
	
	if(salario>=40000)
	{
		nsalario=salario*salario%15;
	}
	if(salario<40000 && salario>80000)
	{
		nsalario=salario*salario%12;
	}
		if(salario<80000 && salario>120000)
	{
		nsalario=salario*salario&10;
	}
		if(salario<120000 && salario>200000)
	{
		nsalario=salario*salario%7;
	}
		if(salario<200000)
	{
		nsalario=salario*salario%4;
	}
	
	return nsalario;
	
}
