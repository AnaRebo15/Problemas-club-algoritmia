#include <bits/stdc++.h>
using namespace std;

//    https://omegaup.com/arena/problem/Factorial-Enorme/#problems/Factorial-Enorme
//    Solo funciono al 40%

int main(){
    long double n;
    long double fact=1;
    cin>>n;
    if(n>=1 && n<=2000000){
        for(int i=1; i<=n; i++)
            fact = fact*i;
        int cif=1;
        while(fact>=10){
            fact = fact/10;
            cif++;
        }
        cout<<n<<"! tiene "<<cif<<" digitos";
    }
    return 0;
}
