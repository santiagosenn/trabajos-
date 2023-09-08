#include<iostream>
using namespace std;
 class CShape
{	
private:
	int base;	
	int altura;	
	
public:
	CShape(int b,int a);

int SetBase(int b);
int SetAltura(int a);
float CalcularTriangulo(int b,int a);
float CalcularRectangulo();
};
CShape::CShape(int b,int a)
{
	base=SetBase(b);
    altura=SetAltura(a);
}
int CShape::SetBase(int b)
{
	base=b;
    return base;
}
int CShape::SetAltura(int a)
{
	altura=a;
    return altura;
}
float CShape::CalcularTriangulo(int b,int a)
{
     return b * a / 2;
}
float CShape::CalcularRectangulo()
{
     return base * altura;
}

int main()
{
	int b=10;
    int	a=7;
	float triangulo, rectangulo;
	CShape Formas(b,a);
	triangulo = Formas.CalcularTriangulo(b,a);
	cout<<"la superficie del triangulo es "<< triangulo<<endl;
	rectangulo = Formas.CalcularRectangulo();
	cout<<"la superficie del rectangulo es "<< rectangulo<<endl;
	triangulo = Formas.CalcularTriangulo(100,20);
	cout<<"la superficie del triangulo es "<< triangulo<<endl;
	return 0;
}

