#include <bits/stdc++.h>
using namespace std;

//Problema de OmegaUp, DFS mayor 1: https://omegaup.com/arena/problem/DFS-mayor-1/#problems

vector<int> grafo[100000];
bool visitados[100000];

void dfs(int nodo){
    cout<<nodo+1<<" ";
    visitados[nodo]=true;
    for(int i=0; i<grafo[nodo].size(); i++){
        int v = grafo[nodo].at(i);
        if(!visitados[v]){
            dfs(v);
        }
    }
}

void addArista(int origen, int destino){
    grafo[origen].push_back(destino);
    grafo[destino].push_back(origen);
}

int main(){
    int numNodos;
    cin>>numNodos;
    
    int numAristas;
    cin>>numAristas;
    
    int nodoInicial;
    cin>>nodoInicial;
    
    int o, d;
    while(numAristas--){
        cin>>o>>d;
        addArista(o-1, d-1);
    }
    /*
    cout<<"Imprimir listas"<<endl;
    for(int i=0; i<numNodos; i++){
        cout<<"El vertice "<<i+1<<" tiene arista con: ";
        for(int j=0; j<grafo[i].size(); j++){
            cout<<grafo[i].at(j)+1<<" ";
        }
        cout<<endl;
    }
    */
    for(int i=0; i<numNodos; i++){
        sort(grafo[i].begin(), grafo[i].end());
        reverse(grafo[i].begin(), grafo[i].end());
    }
    /*
    cout<<"Imprimir listas"<<endl;
    for(int i=0; i<numNodos; i++){
        cout<<"El vertice "<<i+1<<" tiene arista con: ";
        for(int j=0; j<grafo[i].size(); j++){
            cout<<grafo[i].at(j)+1<<" ";
        }
        cout<<endl;
    }
    */
    memset(visitados, false, sizeof(visitados));
    dfs(nodoInicial-1);
    
    return 0;
}
