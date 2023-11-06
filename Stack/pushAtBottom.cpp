#include<bits/stdc++.h>
#include<stack>
using namespace std;


// void pushAtBottom(stack<int>& st , int x){
//     stack<int>temp;
//     while(st.size()>0){
//        // cout<<st.top()<<" ";
//         int str = st.top();
//         st.pop();
//         temp.push(str);

//     }
//     cout<<endl;
//     st.push(x);
//     while(temp.size()>0){
//         cout<<temp.top()<<" ";
//         int str = temp.top();
//         temp.pop();
//         st.push(str);

//     }
//     cout<<endl;
//     while(st.size()>0){
//         int str = st.top();
//         st.pop();
//         temp.push(str);
//     } 
//     while(temp.size()>0){
//         cout<<temp.top()<<" ";
//         int str = temp.top();
//         temp.pop();
//         st.push(str);
//     }
    

// }
void display( stack<int>& st){
        if(st.size()==0) return;
         int x = st.top();
         cout<<x<<" ";
          st.pop();
          display(st);
          st.push(x);

        
       
 }

 
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    
    

 
 
 
    return 0;
}