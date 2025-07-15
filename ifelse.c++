#include<iostream>
using namespace std;



int main()
{
   int level;
   cout<<"Enter your level"<<endl;
   cin>>level;
  
    if ((level<18)&&(level>0))
    {
        cout<<"You are still noob"<<endl;
    }
    else if (level==18)
    {
        cout<<"After some practice you can enter the event"<<endl;
    }
    else if (level<0)
    {
        cout<<"You are not even a noob atleast reach level 1"<<endl;
    }
    else
    {
        cout<<"You can come to the event"<<endl;
    }
    
     
   











    return 0;
}
