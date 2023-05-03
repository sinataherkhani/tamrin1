#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    const int FIVE_HUNDRED=500,TWO_HUNDRED=200,ONE_HUNDRED=100,FIFTY=50,TWENTY=20,TEN=10;
    int remainder;
    cout<<"\nEnter thenremainder of mony: ";
    cin>>remainder;
    cout<<"\nThe number of 500 is:"<<remainder/FIVE_HUNDRED;
    remainder%=FIVE_HUNDRED;
    cout<<"\nThe number of 200 is:"<<remainder/TWO_HUNDRED;
    remainder%=TWO_HUNDRED;
    cout<<"\nThe number of 100 is:"<<remainder/ONE_HUNDRED;
    remainder%=ONE_HUNDRED;
    cout<<"\nThe number of 50 is:"<<remainder/FIFTY;
    remainder%=FIFTY;
    cout<<"\nThe number of 20 is:"<<remainder/TWENTY;
    remainder%=TWENTY;
    cout<<"\nThe number of 10 is:"<<remainder/TEN;
    remainder%=TEN;
    return 0;

}