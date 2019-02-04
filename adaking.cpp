#include <iostream>
using namespace std;

int main() {
   	int t;
	cin>>t;
	while(t--)
	{
	    int r,c,k,r1,c1,r2,c2;
	    cin>>r>>c>>k;
	    if((r-k)<1)
	        r1=1;
	   else
	        r1=r-k;
	   if((r+k)<8)
	    r2=r+k;
	    else
	    r2=8;
	   if((c-k)<1)
	    c1=1;
	    else
	    c1=c-k;
	   if((c+k)>8)
	   c2=8;
	   else
	   c2=c+k;
	   cout<<(r2-r1+1)*(c2-c1+1)<<"\n";
	}
	return 0;
}
