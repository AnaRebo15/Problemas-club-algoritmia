#include <bits/stdc++.h>
using namespace std;

int main(){
	tuple<int, string, string> alumno1, alumno2;
	alumno1 = make_tuple(1, "Julio", "Perez");
	alumno2 = make_tuple(2, "Julia", "Miller");	
	
	//Swap
	alumno1.swap(alumno2);
	
	cout<<get<1>(alumno2)<<endl;
	cout<<get<1>(alumno1)<<endl;
	return 0;
}
