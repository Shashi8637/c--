// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
// int arr[4]={1,2,3,4};
// int arr2[5]={5,6,7,8,9};
// int arr3[9];
// int i=0; 
// int j=0; 
// int k=0;
// while(i<=k || j<=k){
//     if(arr[i]<=arr2[j]){
//         arr3[k]=arr[i];
//         i++;
//         k++;
//     }else if(arr[i]>=arr2[j]){
//         arr3[k]=arr2[j];
//         j++;
//         k++;
//     }
//     if(i==4){
//         while(arr2[j]<=5){
//             arr3[k]=arr2[j];
//             k++;
//         }
//     }
//     if(j==5){
//         while(arr[i]<=4){
//             arr3[k]=arr[i];
//         }
//     }
// }
// for(int i=0; i<9; i++){
//     cout<<arr3[i]<<" ";
// }
 
 
 
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int arr2[5] = {5, 6, 7, 8, 9};
    int arr3[9];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < 4 && j < 5) {
        if (arr[i] <= arr2[j]) {
            arr3[k] = arr[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < 4) {
        arr3[k] = arr[i];
        i++;
        k++;
    }

    while (j < 5) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    for (int i = 0; i < 9; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
