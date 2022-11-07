#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,p,q;
	    cin>> a >> b >> p >> q;
	    if(a == p && b == q)
	    {
	       cout<<"0"<<endl;
	    }
	    else if((a+b)%2 != (p+q)%2)
	    {
	       cout<<"1"<<endl;
	    }
	    else
	    {
	       cout<<"2"<<endl;
	    }
	}
	return 0;
}
