#include <bits/stdc++.h>
using namespace std;
int main()
{
  queue<int> fila;
  fila.push(10);
  fila.push(20);
  fila.push(30);
  cout<<fila.size()<<endl;          //Imprime tamaño
  fila.pop();                       //Borra el primer dato
  
  cout<<fila.front()<<endl;         //Imprime el primer dato
  cout<<fila.back()<<endl;          //Imprime el último dato
  cout<<fila.size()<<endl;          //Imprime tamaño
  
  if(fila.empty()){
      cout<<"La cola esta vacia";
  }
  else{
      cout<<"La cola no esta vacia";
  }
  return 0;
}
