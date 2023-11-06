#include<bits/stdc++.h>
using namespace std;

void linear_search(int arr[],int key ){
    bool flag = false;
    cout<<"KEY: ";
    cin>>key;
   for(int i=0; i<5; i++){
    if(key==arr[i]){
        cout<<i;
    }
   
    }
 if(flag==true){
        cout<<"element is present";

    }else{
        cout<<"element is not present";
    }
}
 
int main()
{
cout<<"ELEMENT:";
int arr[5];

for(int i=0; i<5; i++){
    cin>>arr[i];
}


linear_search(arr,5);


    return 0;
}