#include<bits/stdc++.h>
using namespace std;
class Book{
    public:
    char name ;
    int price;
    int noofpage;
    int countbooks(int p){
        if(price<p){
            return 1;
        }else{
            return 0;
        }
    }
    int isbookpresent(char book){
        if(name==book){
            return true;
        }else{
            false;
        }

    }

};
 
 
int main()
{
 Book shashi;
 shashi.name='h';
 shashi.price=1000;
 shashi.noofpage=500;
 cout<<shashi.countbooks(2000)<<endl;
 cout<<shashi.isbookpresent('h');
 
 
    return 0;
}