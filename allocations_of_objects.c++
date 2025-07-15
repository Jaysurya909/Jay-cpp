#include<iostream>
using namespace std;

class shop{

// private:
int Itemid[100]; 
int Itemprice[100]; 
int counter; 

public:
void Initcounter(void) {counter=0;}
void setprice(void);
void displayprice(void);

};

void shop ::setprice(void)
{
    cout<<"Enter the Id of the item "<<counter+1<<endl;
    cin>>Itemid[counter];
    
    cout<<"Enter the Price of the item"<<endl;
    cin>>Itemprice[counter];
    counter++; 
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Id of the item is "<<Itemid[i]<<" and the price is "<<Itemprice[i]<<endl;
    }
    

}




int main()
{
    shop Dmart;
    Dmart.Initcounter();
    Dmart.setprice();
    Dmart.setprice();
    Dmart.setprice();
    Dmart.displayprice();
return 0;
}