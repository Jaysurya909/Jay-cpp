#include<iostream>
using namespace std;

float moneydep(int moneyadd,float factor = 1.04 ){
    
    return moneyadd * factor;
}

int main()
{
   int money = 100000;

   cout<<"If you have deposited this much money in your account "<<money<<" You will receive "<<moneydep(money)<<" After one year"<<endl;
   cout<<"If you are VIP & have deposited this much money in your account "<<money<<" You will receive "<<moneydep(money,1.1)<<" After one year"<<endl;


return 0;
}
