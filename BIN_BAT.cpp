#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b,matches=0;
	    cin>>n>>a>>b;
	    
	    while(n!=1)
	    {
	        n = (n/2);
	        matches++;
	    }
	    int ans = (matches*a)+((matches-1)*b);
	    cout<<ans<<endl;
	}
	return 0;
}
