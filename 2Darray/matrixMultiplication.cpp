#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int m = 5;
int n = 3;
int p = 3;
int q = 4;
int a[m][n]={{1,2,3},{4,5,6},{1,5,6},{5,6,8},{1,5,7}};
int b[p][q]={{1,2,3,5},{3,4,5,6},{5,6,7,8}};

int res[m][q]={};

if(n==p){
    for(int i=0; i<m; i++){
    for(int j=0; j<q; j++){
        for(int k=0; k<n; k++){
            res[i][j] += a[i][k] * b[k][j];
        }
    }
}
}

else{
    cout<<"enter valid input";
}

for(int i=0; i<m; i++){
    for(int j=0; j<q; j++){
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
}

 
 
 
    return 0;
}