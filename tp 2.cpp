#include <iostream>
using namespace std;
float ConvertirPesos(float cantidad);

int main()
{
	int dolar;
	
	cout<<"introducir cantidad de dolares"<<endl;
	cin>>dolar;
	
	cout<<"la cantidad total de pesos es:"<<ConvertirPesos(dolar)<<endl;

	return 0;
}
float ConvertirPesos(float cantidad)
{
	float pesos=333.37;
	
	cantidad=cantidad*pesos;
	
	return cantidad;
}
