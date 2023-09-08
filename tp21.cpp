#include<bits\stdc++.h>
using namespace std;
vector<int>GenerarVector(vector<int>V,int n);
vector<int>GenerarVectorResultado(vector<int>V);
void MostrarVector(vector<int>V);
int main()
{
	int num;
	vector<int>vectorA;
	cout<<"ingrese cantidad de elementos"<<endl;
	cin>>num;
	vectorA=GenerarVector(vectorA,num);
	VectorResultado=GenerarVectorResultado(VectorA)
	cout<<"numero aleatorio"<<endl;
    MostrarVector(vectorA);
	cout<<"nummero resultado"<<endl;
	MostrarVector(VectorResultado);
}
vector<int>GenerarVector(vector<int>V,int n)
{
	int i,e;
	srand(time(NULL));
	
	for(i=0,i<n;i++)
	{
		e=rand()%30;
		V.push_back(e);
	}
	return V;
}
vector<int>GenerarVectorResultado(vector<int>V)
{
	int i;
	int par=0;
	int impar=0;
	
	vector<int>VectorResultado;
	for(i=0,i<V.size();i++)
	{
		if(par[i]%2==0)
		{
			par+=V[i];
		}
		else
		{
			impar+=V[i];
		}
	}
	
	VectorResultado.push_back(par);
	VectorResultado.push_back(impar);
	
    return VectorResultado;
}
void MostrarVector(vector<int>V)
{
	int i;
	
	for(i=0,i<V.size();i++)
	{
		cout<<V[i]<<"/";
	}
	cout<<endl;
}
