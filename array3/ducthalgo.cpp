#include<bits/stdc++.h>
using namespace std;
 void display(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;
}

void sort012(vector<int>&v){
    int low =0; 
    int mid =0;
    int high=v.size()-1;

   while(mid<=high){
    if(v[mid]==2){
        int temp = v[mid];
        v[mid]=v[high];
        v[high]=temp;
        high--;
    }
    else if(v[mid]==0){
        int temp =v[mid];
        v[mid]=v[low];
        v[low]=temp;

        mid++;
        low++;
    }else{
        mid++;
    }
   }
}
 
int main()
{
vector<int>v;
v.push_back(0);
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(2);
v.push_back(1);

display(v);
sort012(v);
display(v);
 
 
 
    return 0;
}