#include <bits/stdc++.h>
using namespace std;

//Grafo dirigido ponderado

int main()
{
    int numNodos;
    cin>>numNodos;
    
    vector< pair <int, int>> grafo[numNodos];
    
    for(int i=0; i<numNodos; i++){
        for(int j=0; j<numNodos; j++){
            int a;
            cin>>a;
            if(a!=-1){
                //i vertice origen
                //j vertice destino
                //a peso
                grafo[i].push_back(make_pair(j, a));
            }
        }
    }
    
    for(int i=0; i<numNodos; i++){
        cout<<"El vertice "<<i+1<<" tiene caminos con: ";
        for(int j=0; j<grafo[i].size(); j++){
            cout<<"("<<grafo[i].at(j).first+1<<" , "<<grafo[i].at(j).second<<")"<<endl;
        }
    }
    return 0;
}
