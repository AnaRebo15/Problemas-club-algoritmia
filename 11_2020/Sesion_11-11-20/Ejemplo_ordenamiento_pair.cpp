#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector< pair<double, int> > alumnos;
	
	alumnos.push_back(make_pair(10.0, 1));
	alumnos.push_back(make_pair(5.0, 2));
	alumnos.push_back(make_pair(7.0, 3));
	alumnos.push_back(make_pair(10.0, 4));
	alumnos.push_back(make_pair(6.0, 5));
	alumnos.push_back(make_pair(8.0, 6));
	
	for(int i=0; i<alumnos.size(); i++){			    //Imprime los datos sin ordenar por calificaciones
		cout<<"Numero de lista: "<<alumnos.at(i).second<<endl;
		cout<<"Calificacion: "<<alumnos.at(i).first<<endl<<endl;
	}
	sort(alumnos.begin(), alumnos.end());		            //Ordenamiento
	
	cout<<"Despues de ordenar: "<<endl;
	for(int i=0; i<alumnos.size(); i++){			    //Imprime los datos ordenados por calificaciones
		cout<<"Numero de lista: "<<alumnos.at(i).second<<endl;
		cout<<"Calificacion: "<<alumnos.at(i).first<<endl<<endl;
	}
	return 0;
}
