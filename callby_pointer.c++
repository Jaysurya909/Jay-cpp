#include<iostream>
using namespace std;

int swappointer(int* a, int* b){
    int temp=*a;
    *a = *b;
    *b = temp;
}

int main()
{
    
int x=34,y=65;

cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
swappointer(&x,&y);
cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;



return 0;
}