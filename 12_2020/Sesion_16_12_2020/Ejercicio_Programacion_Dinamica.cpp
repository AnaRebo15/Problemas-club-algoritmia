#include <iostream>
using namespace std;

unsigned int arrM[11], cambio[11][1001], n, k;

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arrM[i+1];
    }
    
    cin>>k;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=k; j++){
            if (i==0){cambio[i][j] = -1; continue;}
            if (j==0){cambio[i][j] = 0; continue;}
            
            if(arrM[i] > j) 
                cambio[i][j] = cambio[i-1][j];
            else
                cambio[i][j] = (cambio[i-1][j] < (cambio[i][j-arrM[i]]+1)? cambio[i-1][j]:(cambio[i][j-arrM[i]]+1));
        }
    }
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=k; j++){
            cout<<cambio[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    cout<<cambio[n][k];
    return 0;
}
