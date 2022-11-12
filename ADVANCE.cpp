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
	    if(y>=x and y<=x+200)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"No"<<endl;
	}
	return 0;
}
