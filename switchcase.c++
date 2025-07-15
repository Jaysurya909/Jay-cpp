#include<iostream>
using namespace std;




int main()
{
    int card;
    cout<<"Enter Your card no"<<endl;
    cin>>card;

    switch (card)
    {
    case 7:
        cout<<"You have a special card"<<endl;
        break;
    case 99:
        cout<<"You have a special card"<<endl;     
        break;
    case 777:
        cout<<"You have the legendary card"<<endl;
        break;  





    default:
        cout<<"You have a normal card"<<endl;
        break;
    }







    
    return 0;
}
