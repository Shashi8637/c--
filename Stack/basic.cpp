#include<bits/stdc++.h>
using namespace std;

// void display(stack<int>& st){
//     stack<int>st2;
//     while(st.size()>0){
//         int x = st.top();
//        // cout<<st.top()<< " ";
//        st.pop();
//         st2.push(x);
//     }
//    // cout<<endl;
//     while(st2.size()>0){
//         int x = st2.top();
//         cout<<st2.top()<< " ";
//         st2.pop();
//         st.push(x);
//     }
//     cout<<endl;

// }
 void display(stack<int>& st){

        if(st.size()==0) return; //base case
        int x = st.top();
        st.pop();
        display(st);
        st.push(x);
        cout<<st.top()<<" ";
        




 }
int main()
{
stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
display(st);
// st.pop();
// display(st);
// st.pop();
// display(st);

 
 
 
    return 0;
}