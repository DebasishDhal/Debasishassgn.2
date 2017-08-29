#include<iostream>
using namespace std;
int main()
{
int i;
float avg,per,tot=0;
float a[5];
for (i=0;i<5;i++)
{
cout<<"enter marks in"<<i<<"no. subject"<<endl;
cin>>a[i];
tot=tot+a[i];
i=i++;
}
avg=tot/5;
per=tot/500*100;
cout<<"The total marks is"<<tot<<endl;
cout<<"avg. marks is"<<avg<<endl;
cout<<"percentage is"<<per<<endl;
return 0;
}
