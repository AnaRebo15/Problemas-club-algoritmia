#include <bits/stdc++.h>
using namespace std;

int main(){
	tuple<int, string, string> alumno1, alumno2;
	alumno1 = make_tuple(1, "Julio", "Perez");
	alumno2 = make_tuple(2, "Julia", "Miller");	
	
	//Alumno1 + Alumno2 tamaño final = 6
	tuple<int, string, string, int, string, string> a1_mas_a2;
	a1_mas_a2 = tuple_cat(alumno1, alumno2);
	//Imprimir nombres
	cout<<get<1>(a1_mas_a2)<<" "<<get<4>(a1_mas_a2)<<endl;
	return 0;
}
