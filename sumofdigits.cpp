#include<iostream>
using namespace std;
int main()
{
int t,num;
cin>>t;
while(t!=0)
{
cin>>num;
int sum=0;
while(num!=0)
{
 sum = sum + num % 10;
        num = num / 10;
        }
        cout<<sum<<endl;
        t--;
        }
        return 0;
        }





