#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sorto(vector<int>&v){
    int n= v.size();
    int no0 = 0;
    int no1 = 0;
    for(int i=0; i<n; i++){
        if(v[i]==0){
            no0++;
        }else{
            no1++;
        }
    }
    for(int i=0; i<n; i++){
        if(i<no0){
            v[i]=0;
        }else{
            v[i]=1;
        }
    }

}
 
int main()
{
vector<int>v;
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(0);
v.push_back(1);
display(v);

sorto(v);
display(v);
 
 
 
    return 0;
}