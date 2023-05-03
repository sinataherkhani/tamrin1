#include <iostream>
using namespace std;
int main()
{
    int age,months,dayes;
    cout<<"Enter your age in years:";
    cin>>age;
    months = age *20;
    dayes=age *365;
    cout<<"You have lived for"<<months<<"months and"<<dayes<<"dayes."<<'end';
    
    return 0;
}