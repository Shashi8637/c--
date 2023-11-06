#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int m,n;
    cin>>m>>n;
int arr[m][n];
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
    cout<<endl;
}
cout<<endl;

int t[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        t[i][j]=arr[j][i];
    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<t[i][j];
    }
    cout<<endl;
}
 
 
 
    return 0;
}