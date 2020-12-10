#include <iostream>
using namespace std;

unsigned long n, k, maxiS, maxiT, arrV[1000], arrP[1000], resp[1000][1000];

int main(){
    
    cin>>n>>k;
    
    for(int i=0; i<n; i++){
        
        cin>>arrP[i]>>arrV[i];
        
    }
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=k; j++){
            if(i==0 | j==0) {resp[i][j] = 0; cout<<resp[i][j]<<" "; continue;}

            if(arrP[i-1] <= j){
                maxiS = resp[i-1][j];
                
                maxiT = arrV[i-1] + resp[i-1][j-arrP[i-1]];
                
                resp[i][j] = (maxiS > maxiT? maxiS : maxiT);
            } else {
                resp[i][j] = resp[i-1][j];
            }
            
            cout<<resp[i][j]<<" ";
            
        }
        
        cout<<"\n";
        
    }
    cout<<"\n";
    cout<<resp[n][k];
    
return 0;
}
