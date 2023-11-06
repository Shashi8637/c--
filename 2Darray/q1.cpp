#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
int roll;
int marks;
cin>>roll>>marks;
int arr[roll][marks];
for(int i=0; i<roll; i++){
    for(int j=0; j<marks; j++){
        cin>>arr[i][j];
    }
}for(int i=0; i<roll; i++){
    for(int j=0; j<marks; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
 
 
 
    return 0;
}