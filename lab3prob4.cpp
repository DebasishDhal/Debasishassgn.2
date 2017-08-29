#include<iostream>
using namespace std;
int main()
{
int day,years,weeks,days;
cout<<"Enter no. of days"<<endl;
cin>>day;
years=day/365;
weeks=(day-years*365)/7;
days=day-years*365-weeks*7;
cout<<"no. of years is "<<years<<" no.of weeks is"<<weeks<<" no. of days is "<<days<<endl;
return 0;
}
