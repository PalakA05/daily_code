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
	    int per = (y*100)/x;
	    if(per>=50)
	    {
	        cout<<"YES\n";
	    }
	    else cout<<"NO\n";
	}
	return 0;
}
