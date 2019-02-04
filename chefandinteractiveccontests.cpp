#include<iostream>
using namespace std;
int main()
{
int t,k,i;
cin>>t;
cin>>k;
int arr1[t];
for(i=0;i<t;i++)
{
cin>>arr1[i];
}
for(i=0;i<t;i++)
{
if(arr1[i]<k)
{
cout<<"Bad boi"<<endl;
}
else
cout<<"Good boi"<<endl;
}
return 0;
}

