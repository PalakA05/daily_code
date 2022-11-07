#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,a1,a2,b,b1,b2;
	    cin>>a>>b;
	    cin>>a1>>b1;
	    cin>>a2>>b2;
	    if((a==a1 || a==b1) && (b==b1 || b==a1))
	    {
	        cout<<"1"<<endl;
	    }
	    else if((a==a2 || a==b2) && (b==b2 || b==a2))
	    {
	        cout<<"2"<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
