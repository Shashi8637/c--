#include<bits/stdc++.h>
using namespace std;
 
int main()
{

 vector<int>v;
 v.push_back(9);
 v.push_back(3);
 v.push_back(2);
 v.push_back(17);
 for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;
 sort(v.begin(),v.end());
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
 }
 
 
 
    return 0;
}