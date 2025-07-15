#include<iostream>
#include<time.h>
using namespace std;

int generaterandomnumber(int n){
    srand(time(NULL));
    return rand()%n;
}

int win(char char1,char char2)
{
    if (char1==char2)
    {
        return -1;
    }
    else if ((char1 == 'r')&&(char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r')&&(char2 == 's'))
    {
       return 0;
    }
    else if ((char1 == 's')&&(char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's')&&(char1 == 'p'))
    {
        return 0;
    }
    else if ((char1 == 'p')&&(char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p')&&(char1 == 'r'))
    {
        return 0;
    }
    
}


int main()
{
    int player=0,computer=0,temp,n;
    char pchar,cchar;
    char dict[]={'r','p','s'};
    cout<<"Welcome to rock-paper-scissor"<<endl;
    cout<<"How many rounds match You want"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
      cout<<"Enter your choice"<<endl;
      cin>>temp;
      pchar =  dict[temp-1];

      temp = generaterandomnumber(2);
      cchar = dict[temp];
      cout<<"Computers choice is "<<cchar<<endl;      
      
       if (win(pchar,cchar)==1)
       {
         player+=1;
         cout<<"Player won!!!"<<endl;
       }
       else if (win(pchar,cchar)==0)
       {
         computer+=1;
         cout<<"Computer wins!!!"<<endl;
       }
       else if (win(pchar,cchar)==-1)
       {
          player+=1;
          computer+=1; 
          cout<<"Its a draw"<<endl;
       }
       
}

if (player>computer)
{
    cout<<"****************Player won the session****************"<<endl;
}
else if (player<computer)
{
    cout<<"****************Computer won the session**********************"<<endl;
}
else if (player==computer)
{
    cout<<"---------This match ends in draw-----------"<<endl;
}




                                                                                                                             
return 0;

}