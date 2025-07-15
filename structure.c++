#include<iostream>
using namespace std;

typedef struct employee
{
   int salary;
   char favChar;
   float eId;
} em;




int main()
{
    struct employee jay;
    jay.eId = 1.34;
    jay.salary = 1000000000;
    jay.favChar='C';
    //output 
    cout<<jay.eId<<endl;
    cout<<jay.salary<<endl;
    cout<<jay.favChar<<endl;
    cout<<endl;
    em atharva;
    atharva.eId = 3.45;
    atharva.salary = 10200000;
    atharva.favChar = 'w';
    //output
     
    cout<<"Atharvas salary is : "<<atharva.salary<<endl;
    cout<<"Atharvas eid is : "<<atharva.eId<<endl;
    cout<<"Atharvas favourite character is : "<<atharva.favChar<<endl; 



return 0;
}