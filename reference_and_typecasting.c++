#include<iostream>
using namespace std;

int main()
{
      //********** Float, double and long double literals*****************

      float d= 34.4F;
      long double e = 34.4L;
      
      cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
      cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
      cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
      cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
      cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl<<endl;

      //***************** Reference Variables ****************************

      int x = 6;
      int & y = x;
      cout<<x<<endl;
      cout<<y<<endl<<endl;
       
      //********************** Typecasting ***************************

      int a = 4;
      float b = 3.54;

      cout<<"The value of a is : "<<(float)a<<endl;
      cout<<"The value of a is : "<<float(a)<<endl;
       
      cout<<"The value of b is : "<<(int)b<<endl; 
      cout<<"The value of b is : "<<int(b)<<endl<<endl; 
      int c = int(b);

      cout<<"The value of a + b is: "<<a+b<<endl;
      cout<<"The value of a + b is: "<<a+int(b)<<endl;
      cout<<"The value of a + b is: "<<a+(int)b<<endl;



    return 0;
}

