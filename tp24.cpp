#include <bits\stdc++.h>
#include <algorithm>

using namespace std;



vector<int>GenerarVector(vector<int> A , int n);

int BuscarModa(vector <int> A);

void MostrarVector(vector<int> A);

int main()
{
    int n;
   
    vector<int> A;
   
    cout<<"ingrese cantidad de elementos"<<endl;
    cin>>n;
   
    A=GenerarVector(A ,n);
   
    sort(A.begin() , A.end());
    cout<<"la moda es :"<<BuscarModa(A)<<endl;
   
    MostrarVector(A);
   
    return 0;
}
vector<int>GenerarVector(vector<int> A , int n)
{
    int i;        
    srand (time (NULL));
    int e;
    for(i=0; i<n; i++)
    {
        e=rand()%10;
       
    A.push_back (e);
    }
    return A;
}

int BuscarModa(vector <int> A)
{
    int i;
   
    int auxiliar;
   
    int contador;
   
    int elemento=A[0];
   
    int cantidadelemento=0;
   
    for(i=0; i<A.size(); i++)
    {
        contador=0;
       
        auxiliar=A[i];
       
        while( A[i]==A[i+1] )
        {
            contador++;
            i++;
            //cout<<"el contador es "<<contador<<endl;
        }
        if(contador > cantidadelemento )
        {
            elemento=A[i];
            cantidadelemento = contador;
           
            contador=0;
        }
    }
    return elemento;
}

void MostrarVector(vector <int> A)
{
    int i;
   
    for( i=0; i<A.size(); i++ )
    {
   
    cout<<A[i]<<"/";
    }
        cout<<endl;
    }

