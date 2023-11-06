#include<bits/stdc++.h>
using namespace std;
 
int main()
{
vector<int>v;
int z=7;
cout<<"array size:";
int x;
cin>>x;
for(int i=0; i<x; i++){
    int q;
    cin>>q;
    v.push_back(q);
}
for(int i=0; i<=v.size()-2; i++){
    for(int j=i+1; j<=v.size()-1; j++){
        if(v[i]+v[j]==z){
            cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;

        }
    }
}

 
 
 
    return 0;
}