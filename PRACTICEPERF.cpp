#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int p[4],count=0;
	for(int i=0;i<4;i++)
	{
	    cin>>p[i];
	}
	for(int i=0;i<4;i++)
	{
	    if(p[i]>=10)
	        count++;
	    else
	        continue;
	}
	cout<<count<<endl;
	return 0;
}
