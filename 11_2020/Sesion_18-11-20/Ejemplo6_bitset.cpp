#include <bits/stdc++.h>
using namespace std;

bitset<4> misbits;

int main(){
	cin>>misbits;
	misbits.flip();
	cout<<misbits.any()<<endl;      //Muestra un 1 si el numero ingresado tiene algun 0.
	return 0;
}
