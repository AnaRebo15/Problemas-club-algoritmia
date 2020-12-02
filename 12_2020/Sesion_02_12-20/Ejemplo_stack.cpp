#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> stack1;
  if(stack1.empty()){
      cout<<"La lista esta vacia"<<endl;
  }
  
  stack1.push(10);
  stack1.push(20);
  
  if(stack1.empty()){
      cout<<"La lista esta vacia"<<endl;
  }
  else{
      cout<<stack1.size()<<endl;
      cout<<stack1.top()<<endl;
      stack1.pop();
      cout<<stack1.top()<<endl;
  }
  return 0;
}
