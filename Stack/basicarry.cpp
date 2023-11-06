#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int  arr[5];
    int idx ;
    Stack(){
       idx = -1;
     }

        void Push(int val){
            if(idx==5){
                cout<<"full";
                return ;
            }
            arr[idx]=val;
            idx++;


        }

        void Pop(int val){
            if(idx==-1){
                cout<<"empty!";
                return;
            }
            idx--;
            
        }

        int Top(int val){
            return arr[idx];
            
        }

        void display(){
            for(int i=0; i<=idx; i++){
                cout<<arr[i]<<" ";
            }
        }

};

 
int main()
{
    Stack st;
    st.Push(10);
    st.Push(20);
    st.Push(20);
    st.Push(20);
    st.Push(20);
    st.display();

 
 
 
    return 0;
}