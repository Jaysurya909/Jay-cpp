#include<iostream>
#include<string>
using namespace std;


class binary{

private:
string s;

public:
void read(void);
void chk_bin(void);
void reverseones(void);


};

void binary :: read(void)
{
    cout<<"Enter the binary numbers"<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i)!='0')&&(s.at(i)!='1'))
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
    
}

void binary :: reverseones(void)
{
    chk_bin();//nesting of members 
    for (int i = 0; i <s.length(); i++)
    {
        if (s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
        
        
        
    }
    cout<<"Displaying reverse"<<endl;
    cout<<s<<endl;
}




int main()
{
    
binary b;
b.read();
// b.chk_bin(); nesting of members
b.reverseones();


















    
return 0;
}