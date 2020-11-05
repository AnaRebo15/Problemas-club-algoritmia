#include <bits/stdc++.h>

using namespace std;

int f(int n){				//funcion factorial
	if(n==0 || n==1)		//condicion base
	return 1;
	
	else				//condicion recursiva
	return n*f(n-1);
}

int main(){				//funcion principal
	int n;
	cin>>n;
	cout<<"Factorial de "<< n << " es: " << f(n) << endl;
	return 0;
}
