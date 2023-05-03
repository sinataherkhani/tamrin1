#include <iostream>
#include <cstdlib>
#include <timer>
using namespace std;
int main()
{
    const int MIN=1, MAX=1000;
    int guess, tries=1, level=0;
    int low=MIN, high=MAX, mid;
    char choice, ans;
    bool flag=true;
    while(flag==true)
    {
        system("CLS");
        level++;
        cout<<"\n\n\n****Guess My Number Game****";
        cout<<"\n\n\n LEVEL:"<<level<<"\n\n\n";
        do{
            cout<<"\nEnter a Guess number between"<<MIN
            <<" and "<<MAX<<" : ";
            cin>>guess;
            mid=
    }while(guess<=MIN)
    }
}