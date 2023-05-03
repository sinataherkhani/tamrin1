#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    long int balance,widthdrow;
    char command;
    int srand();
    balance=rand();
    cout<<"\n Enter your command:";
    cin>>command;
    if(command=='w' || command=='W')
    {
        cout<<"\n Enter widthdrow amount:";
        cin>>widthdrow;
        if(widthdrow<=balance&&widthdrow<=200000)
        {
            balance=balance-widthdrow
            cout<<"\n now balance is :"<<balance;

        }
        else if(command=='d' || command=='D')
        {
            balance+=rand();
            cout<<"\n Now balance is :"<<balance ;
        }
        else if(command=='b' || command=='B')
        cout<<"\n balance is :"<<balance;
        else if(command=='e' || command=='E')
        {
            cout<<"\n balance is:"<<balance;
            exit(0);
        }
        else
         cout<<"\n Invalid command"
         return 0;
    }