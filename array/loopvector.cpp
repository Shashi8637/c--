#include<bits/stdc++.h>
using namespace std;
 
int main()
{
vector<int>v;
v.push_back(10);
v.push_back(11);
v.push_back(12);
v.push_back(13);
v.push_back(10);
v.push_back(16);
int x=10;
int idx =-1;
for(int i=v.size()-1; i>=0; i--){
    if(x==v[i]){
        idx =i;
        break;
        
    }
    
}
cout<<idx<<" ";
 
 
 
    return 0;
}