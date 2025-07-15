#include<iostream>
using namespace std;

class Goals{

int pNo[100];
int pGoal[100];
int counter;

public:
void pcounter(void) {counter=0;}
void Setup(void);
void Display(void);
};

void Goals ::Setup(void)
{
   cout<<"Enter the no of player "<<endl;
   cin>>pNo[counter];
   cout<<"Enter the no of the goals he scored"<<endl;
   cin>>pGoal[counter];
   counter++; 
}    

void Goals ::Display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The jersey no of the player is "<<pNo[i]<<" And he scored "<<pGoal[i]<<" Goals"<<endl;
    }
}



int main()
{
     int n;
    Goals Manchester;
    cout<<"Enter how many players score u wanna input"<<endl;
    cin>>n; 
    for (int i = 0; i < n; i++)
    {
    Manchester.pcounter();
    Manchester.Setup(); 
    Manchester.Display();
    }
    










return 0;
}