#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0)
    {
        int num;
        cin>>num;
        int a;
        int b;
        a=num%10;
        while(num>=10)
        {
            num=num/10;
            
        }
        b=num;
        cout<<a+b<<endl;
        t--;
    }

	// your code goes here
	return 0;
}
