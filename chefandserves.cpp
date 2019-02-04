#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0)
    {
        int a,b,c;
        int count;
        cin>>a>>b>>c;
        count=(a+b)/c;
        
        if((a+b)%c==0)
        {
            if(count%2==0)
            {
                cout<<"CHEF"<<endl;
            }
            else
            {
                cout<<"COOK"<<endl;
            }
            
        }
        else
        {
        if(count%2==0)
            {
                cout<<"CHEF"<<endl;
            }
            else
            {
                cout<<"COOK"<<endl;
            }
        }
             t--;
        }
        
    
	// your code goes here
	return 0;
}
