#include <bits/stdc++.h>
using namespace std;

//https://omegaup.com/arena/problem/Pilas-y-colas/#problems

int main()
{
  int N;
  char C;
  cin>>N;
  cin>>C;
  if(C=='P'){
      stack<int> stack1;
      for(int i=0; i<N; i++){
          string op; 
          cin>>op;
          if(op=="PUSH"){
              int V;
              cin>>V;
              stack1.push(V);
          }
          if(op=="POP"){
              cout<<stack1.top()<<endl;
              stack1.pop();
          }
      }
  }
  if(C=='C'){
      queue<int> cola1;
      for(int i=0; i<N; i++){
          string op; 
          cin>>op;
          if(op=="PUSH"){
              int V;
              cin>>V;
              cola1.push(V);
          }
          if(op=="POP"){
              cout<<cola1.front()<<endl;
              cola1.pop();
          }
      }
  }
  return 0;
}
