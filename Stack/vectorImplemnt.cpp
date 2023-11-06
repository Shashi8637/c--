#include<bits/stdc++.h>
#include<stack>
using namespace std;
void display( stack<int>&st){
     stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
   
    while(temp.size()>0){
       cout<<temp.top()<<" ";
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl;

    

}

 
int main()
{
  stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
     display(st);
    


 
 
 
    return 0;
}