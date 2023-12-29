#include<bits/stdc++.h>
using namespace std;
void print(int arr[][4],int n, int m){

    for(int i=0; i<n; i++){
     for(int j=0; j<m; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;

}
 
int main()
{
int arr[4][4]={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

print(arr,4,4);


for(int i=0; i<4; i++){
    for(int j=i+1; j<4; j++){
        int temp = arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
}

print(arr,4,4);

for(int k=0; k<4; k++){
    int i =0; 
    int j = 3;
    while(i<j){
        int temp = arr[k][i];
        arr[k][i] = arr[k][j];
        arr[k][j]=temp;
        i++;
        j--;
    }
}

print(arr,4,4);

 
 
 
    return 0;
}