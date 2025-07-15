#include<iostream>
using namespace std;



int main()
{
    // break
    for (int i = 0; i < 10; i++)
    {
        if (i==5)
        {
            break;
        }
        
        cout<<i<<endl;
    }

    cout<<endl;

    // continue
    for (int i = 0; i < 10; i++)
    {    
        if (i==6)
        {
            continue;
        }
        
        cout<<i<<endl;
    }
    
    
return 0;
}
