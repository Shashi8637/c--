#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
    vector<int>hp;
    public:
   void upheapify(int ci){
    while(ci>0){
        int pi = (ci-1)/2;
        if(hp[pi]<hp[ci]){
            swap(hp[pi],hp[ci]);
            ci = pi;
        }else{
            break;
        }
    }

   }
   void push(int ele){
    hp.push_back(ele);
    upheapify(hp.size()-1);
   }

   int peek(){
    if(hp.empty()) return INT_MIN;
    return hp[0];
   }

   bool empty(){
    return hp.size()==0;
   }

   void display(){
    for(int i=0; i<hp.size(); i++){
        cout<<hp[i]<<" ";
    }
   }

};
 
int main()
{
    MaxHeap hp;
    hp.push(10);
    hp.push(20);
    hp.push(30);
    hp.push(40);
    hp.push(50);
    hp.push(60);
    hp.push(70);
    hp.push(80);
    hp.push(90);
    hp.push(100);
    hp.push(101);
    hp.push(102);
    hp.push(103);
    hp.display();
    cout<<endl;
    cout<<hp.peek();


 
 
 
    return 0;
}