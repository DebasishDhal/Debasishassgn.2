#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a,b;
cout<<"enter any no. to see its square root"<<endl;
cin>>a;
if(a<0)
{
cout<<"negative no. dont have real roots"<<endl;
}
else
{
b=pow(a,0.5);
cout<<b;
}
return 0;
}
