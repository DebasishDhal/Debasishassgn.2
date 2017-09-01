#include<iostream>
#include<math.h>
using namespace std;
float p,term,r;
float t;
cout<<"enter prinple,no of terms,rate of interest resp."<<endl;
cin>>p>>term>>r;
cin>>t;
t=p*pow((1+(r/100)),term);
c=t-p;
cout<<"compound interst is "<<c<<endl;;
return 0;
}
