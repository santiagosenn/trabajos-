#include <iostream>
int factorial(int factorial);
using namespace std;

int main()
{
	int n, factorial=1;
	long doblefactorial;
	
	cout<<"introduce un numero"<<endl;
	cin>>n;
	
     cout<<"factorial de"<<n<<"-"<<factorial<<(factorial)<<endl;

	return 0;
	
}
int factorial(int factorial)
{
	int i, n;
		for(i=1; i<=n; i++)
	{
		factorial=factorial * i;
	}
	
	return factorial;
}

