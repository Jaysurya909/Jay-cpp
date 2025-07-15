#include<iostream>
using namespace std;


class Employee{

int id;
static int count;

public:
void setCount(void);
void Showcount(void);
static void Getcount(void);
};

void Employee :: setCount(void){

    cout<<"Enter the Id of this employee"<<endl;
    cin>>id;
    count++;
}

void Employee :: Showcount(void){
    cout<<"The Id of the employee "<<count<<" is "<<id<<endl;

}

void Employee :: Getcount(void){
   cout<<"The value of count is "<<count<<endl; 
}



int Employee ::count; 

int main()
{
     Employee Nobita,Shinchan;
     Nobita.setCount();
     Nobita.Showcount();
     Employee::Getcount();
     Shinchan.setCount();
     Shinchan.Showcount();
     Employee::Getcount();

    







return 0;
}