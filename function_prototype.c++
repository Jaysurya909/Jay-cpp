#include<iostream>
using namespace std;


int sum(int a,int b);
void g(void);

int main()
{
   int num1,num2;
                                   
   cout<<"Enter the value of num1"<<endl;
   cin>>num1;
   cout<<"Enter the value of num2"<<endl;
   cin>>num2;

   cout<<"The sum is : "<<sum(num1,num2)<<endl;

   g();          
     

return 0;
}

void g(){
    cout<<"Hello bro";
}



int sum(int a, int b){
    int c = a+b;
    return c;
}