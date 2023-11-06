#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int arr[5];
    int idx;
    int n;
    Stack(){
        idx = -1;
        int n = sizeof(arr)/sizeof(arr[0]);
    }
    void push(int val){
        if(idx==n){
           cout<<" stack is full"<<endl;
           return;
        } 
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
          cout<<"stack is empty!"<<endl;
          return;
        } 
        idx--;
    }
    int top(){
        if(idx==-1){
          cout<<"stack is empy"<<endl;
          return -1;
        } 
        return arr[idx];
    }

    void  display(){
        for(int i=0; i<=idx; i++){
            cout<<arr[i]<<" ";
        }
    }



};
 
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
    

 
 
 
    return 0;
}