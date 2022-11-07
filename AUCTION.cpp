#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b)
	    {
	        if(a>c)
	        {
	            cout<<"Alice\n";
	        }
	        else
	        {
	            cout<<"Charlie\n";
	        }
	    }
	    else
	    {
	        if(b>c)
	        {
	            cout<<"Bob\n";
	        }
	        else
	        {
	            cout<<"Charlie\n";
	        }
	    }
	}
	return 0;
}
