#include<iostream>
using namespace std;

class Employee{

int id;
int salary;

public:
    void setId(void){
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }

    void getId(void){
        cout<<"The Id of the employee is "<<id<<endl;
    }

};

int main()
 {
//   Employee jay;
//   jay.setId();
//   jay.getId();

Employee f[5];
for (int i = 0; i < 5; i++)
{
    f[i].setId();
  
}

for (int i = 0; i < 5; i++)
{
     f[i].getId();
}


return 0;
}