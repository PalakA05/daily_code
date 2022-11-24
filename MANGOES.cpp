#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int mangoes = (z-y)/x;
	    cout<<mangoes<<endl;
	}
	return 0;
}
