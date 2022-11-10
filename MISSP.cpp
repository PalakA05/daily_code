#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,cnt=0,d;
	    cin>>n;
	    while(n--)
	    {
	        cin>>d;
	        cnt = cnt^d;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
