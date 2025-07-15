#include<iostream>
using namespace std;


void swaprefernce(int &a,int &b){

    int temp = a;
    a = b;
    b = temp;
}

int main()
{
     int g = 4, f = 654;

     
     cout<<"The value of f is "<<f<<endl;
     cout<<"The value of g is "<<g<<endl;
      
     swaprefernce(g,f); 

     cout<<"The value of f is "<<f<<endl;
     cout<<"The value of g is "<<g<<endl;
           

return 0;
}