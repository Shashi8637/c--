#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int arr[7];
for(int i=0; i<7; i++){
    cin>>arr[i];
}
int key;
cin>>key;
for(int i=0; i<7; i++){
    if(arr[i]<key){
        cout<<arr[i]<<" ";
    }
}

    return 0;
}