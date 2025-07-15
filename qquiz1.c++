#include<iostream>
using namespace std;



int main()
{
   int marks[]={24,65,76,64};


   int i=0;
   cout<<"this is a while loop"<<endl;
   while (i<4)
   {
      cout<<marks[i]<<endl;
      i++;
   }
   int j=0; 
   cout<<"This is a do while loop"<<endl;  
   do
   {
    cout<<marks[j]<<endl;
    j++;
   } while (j<4);
     

return 0;
}