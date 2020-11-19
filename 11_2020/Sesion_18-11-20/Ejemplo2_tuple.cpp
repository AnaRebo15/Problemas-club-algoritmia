  
#include <bits/stdc++.h>
using namespace std;

int main(){
	tuple<int, string, string> alumno;
	alumno = make_tuple(1, "Julio", "Perez");

	//Imprimir el tamaño de la tupla.
	cout<<tuple_size<decltype(alumno)>::value<<endl;
	return 0;
}
