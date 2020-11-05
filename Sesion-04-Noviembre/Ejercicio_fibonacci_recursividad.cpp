#include <bits/stdc++.h>

using namespace std;

int fibo(int n){			//funcion fibonacci
	if(n==0 || n==1)		//condicion base
	return n;
	
	else			        //condicion recursiva
	return fibo(n-1)+fibo(n-2);
}

int main(){				//funcion principal
	int n;
	cin>>n;
	for(int i=0; i<=n; i++){
	cout<< fibo(i) << endl;	
	}
	return 0;
}
