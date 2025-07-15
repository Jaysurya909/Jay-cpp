#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float point;
};







int main()
{
    union money jay;

    jay.rice=100;
    jay.car='l';
    jay.point=1.45;

    cout<<jay.rice<<endl;
    cout<<jay.car<<endl;
    cout<<jay.point<<endl;

//The last declaration has priority and all other values will be overwritten
    // So, only the last value will be printed correctly.







return 0;
}