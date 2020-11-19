#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 1;
	int a[5] = {1, 2, 3, 4, 5};      //Se crean 2 pair, uno auto y otro declarado, usando make_pair.
	auto p1 = make_pair(n, a[1]);
	cout<< "The value of p1 is "<<"("<<p1.first<<", "<<p1.second<<")\n";
	pair<int, int> p1_dif = make_pair(n, a[1]);
	cout<<"The value of p1 is "<<"("<<p1.first<<", "<<p1.second<<")\n";
	  //Pair auto y declarada, usando make_pair y el pair es un entero referenciado.
	  //Arreglo de enteros al que se accede con punteros.
	auto p2 = make_pair(ref(n), a);
	n=7;
	cout<<"The value of p2 is "<<"("<<p2.first<<", "<<(*p2.second + 2)<<")\n";
	n=9;
	cout<<"The value of p2 is "<<"("<<p2.first<<", "<<*p2.second<<")\n";
}
