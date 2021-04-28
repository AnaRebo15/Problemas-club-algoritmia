#include <bits/stdc++.h>
using namespace std;

vector<int> grafo[100];
bool visitados[100];

int main()
{
    int numNodos;
    cin>>numNodos;
    
    for(int i=0; i<numNodos; i++){
        for(int j=0; j<numNodos; j++){
            int camino;
            cin>>camino;
            if(camino==1){
                //Hay camino desde vi hasta vj
                grafo[i].push_back(j);
            }
        }
    }
    
    cout<<"Imprimir listas"<<endl;
    for(int i=0; i<numNodos; i++){
        cout<<"El vertice "<<i<<" tiene caminos con: ";
        vector<int> list_n = grafo[i];
        for(int j=0; j<list_n.size(); j++){
            cout<<list_n.at(j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
