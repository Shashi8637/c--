#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int arr[5];
int max= INT_MIN;
for(int i=0; i<5; i++){
    cin>>arr[i];
}
for(int i=0; i<5; i++){
    if(max<arr[i]){
        max=arr[i];
    }

}
int smax=INT_MIN;
for(int i=0; i<5; i++){
    if(arr[i]!= max && smax<arr[i]){
        smax=arr[i];
    }


}
cout<<smax;
 
 
    return 0;
}