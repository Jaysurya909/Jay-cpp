#include<iostream>
using namespace std;

class emPloyee
{
   private:
   int a,b,c;

   public:
   int x,y;

   void setdata(int a1,int b1,int c1);
   void printdata(){
     cout<<"The value in a is "<<a<<endl;
     cout<<"The value in b is "<<b<<endl;
     cout<<"The value in c is "<<c<<endl;
     cout<<"The value in x is "<<x<<endl;
     cout<<"The value in y is "<<y<<endl;
     }
};

void emPloyee :: setdata (int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    emPloyee jay;

    jay.setdata(34,45,65);
    jay.x=77;
    jay.y=89;

    jay.printdata();




return 0;
}