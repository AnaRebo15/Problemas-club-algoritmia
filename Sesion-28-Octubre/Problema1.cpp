#include <iostream>
using namespace std;

unsigned long long exponenciar(unsigned long long a, unsigned long long b){
	unsigned long long c=1;
	while(b--){
		c = c*a;
	}
	return c;
}

int main(){
	unsigned long long w, x, y, z;
	cin>>w>>x>>y>>z;
	unsigned long long r = exponenciar((exponenciar(w,x) + exponenciar(x,w))/(exponenciar(y,z) - exponenciar(z,y)), w+x-y-z);
	cout<<r;
}
