#include<bits/stdc++.h>
using namespace std;
void display(vector<int>a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}
 
int main()
{
vector<int>v;
v.push_back(1);
v.push_back(6);
v.push_back(2);
v.push_back(3);
v.push_back(7);
v.push_back(4);
display(v);
cout<<endl;
vector<int>v2(v.size());
for(int i=0; i<v2.size(); i++){
    v2[i]=v[v.size()-1-i];
}
display(v2);
 
 
 
    return 0;
}