#include <bits/stdc++.h>
using namespace std;

long long compute_hash(string s);
map<long long, bool> tablaArcoiris;

int main()
{
    int n, contador=0;
    long long hashActual = compute_hash(s);
    string s;
    cin>>s;
    cout<<"El hash de la cadena "<<s<<" es: "<<compute_hash(s);
    
    return 0;
}

long long compute_hash(string s){
    const int m = 1e9 + 9;
    int p = 31;
    long long hash = 0;
    long long power = 1;
    
    for(int i=0; i<s.size(); i++){
        hash = (hash + (s[i]-'a' +1) * power) % m;
        power = (power * p) % m;
    }
    return hash%m;
}
