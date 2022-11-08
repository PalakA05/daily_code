#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x%y==0)
	    {
	        cout<<x/y<<endl;
	    }
	    else
	    {
	        int r = x%y;
	        cout<<(x/y)+r<<endl;
	    }
	}
	return 0;
}
