#include<bits/stdc++.h>
using namespace std;
 
int main()
{

unordered_map<string,int>m;
m["shashi"] = 15;
m["Achinta"] = 16;
m["Nilay"] = 17;
m["ayush"] = 18;
m["sajal"] = 19;
m["sayan"] = 20;
m["joydeep"] = 21;
m["mahakash"] = 22;

for(auto x : m){
    cout<<x.first<<" "<<x.second<<" "<<endl;
}

 
 
 
    return 0;
}