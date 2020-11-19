#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector< tuple<double, int, string> > alumnos;
	
	alumnos.push_back(make_tuple(10.0, 1, "Julia"));
	alumnos.push_back(make_tuple(5.0, 2, "Julio"));
	alumnos.push_back(make_tuple(7.0, 3, "Gerardo"));
	alumnos.push_back(make_tuple(10.0, 4, "Ana"));
	alumnos.push_back(make_tuple(6.0, 5, "Sergio"));
	alumnos.push_back(make_tuple(8.0, 6, "Maria"));
	
	for(int i=0; i<alumnos.size(); i++){			    //Imprime los datos sin ordenar por calificaciones
		cout<<"Numero de lista: "<<get<1>(alumnos.at(i))<<endl;
		cout<<"Nombre: "<<get<2>(alumnos.at(i))<<endl;
		cout<<"Calificacion: "<<get<0>(alumnos.at(i))<<endl<<endl;
	}
	sort(alumnos.begin(), alumnos.end());		            //Ordenamiento
	
	cout<<"Despues de ordenar: "<<endl<<endl;
	for(int i=0; i<alumnos.size(); i++){			    //Imprime los datos ordenados por calificaciones
		cout<<"Numero de lista: "<<get<1>(alumnos.at(i))<<endl;
		cout<<"Nombre: "<<get<2>(alumnos.at(i))<<endl;
		cout<<"Calificacion: "<<get<0>(alumnos.at(i))<<endl<<endl;
	}
	return 0;
}
