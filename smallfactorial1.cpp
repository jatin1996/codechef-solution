#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
 
   int i,fact=1,number;    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<fact<<endl;  
  }
  return 0;
  } 
