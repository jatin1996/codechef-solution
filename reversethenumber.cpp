#include<iostream>
using namespace std;
int main()
{

int t;
cin>>t;
while(t!=0)
{
 int n, reversedNumber = 0, remainder;
 cin>>n;
 while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout<< reversedNumber<<endl;


t--;
}

return 0;
}
