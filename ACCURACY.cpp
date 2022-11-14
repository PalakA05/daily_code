#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if((x%3)%2==0)
	    {
	        if(x%3==0)
	        cout<<x%3<<endl;
	        else cout<<(x%3)-1<<endl;
	    }
	    else
	    {
	        cout<<(x%3)+1<<endl;
	    }
	}
	return 0;
}
