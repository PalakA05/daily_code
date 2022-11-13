#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b,c,d;
	    cin>>a>>b>>c>>d;
	    a = a - c;
	    b = b - d;
	    if(a<b)
	    {
	        cout<<"FIRST"<<endl;
	    }
	    else if(b<a)
	    {
	        cout<<"SECOND"<<endl;
	    }
	    else
	    {
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}
