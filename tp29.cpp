#include<iostream>
using namespace std;
 class CCircle
{	
private:
	float radius;
	
public:
	CCircle(float r);

int SetRadius(float r);
float CalcularArea(float r);
float CalcularPerimetro();
};
CCircle::CCircle(float r)
{
	radius=SetRadius(r);
}
int CCircle::SetRadius(float r)
{
	radius=r;
    return radius;
}
float CCircle::CalcularArea(float r)
{
    return 3.14159 * radius * radius;
}
float CCircle::CalcularPerimetro()
{
    return 2 * 3.14159 * radius;
}

int main()
{
	float r=10;
	float area, Perimetro;
    CCircle	Circulo(r);
	area = Circulo.CalcularArea(r);
	cout<<"el area del Circulo es "<<area<<endl;
	Perimetro = Circulo.CalcularPerimetro();
	cout<<"el perimetro del Circulo es "<<Perimetro<<endl;
	return 0;
}

