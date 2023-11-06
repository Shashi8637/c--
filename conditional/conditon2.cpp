#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int radius;
float area,perimeter;
cin>>radius;
area = radius*radius*3.14;
perimeter = 2*3.14*radius;

if(area>perimeter){
    cout<<"area is greather is equal to ="<<area;

}
else{
    cout<<" perimeter is greather is equal to ="<<perimeter;
}

 
 
 
    return 0;
}