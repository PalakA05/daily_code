#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	   // for(int i=1;i<=n;i++)
	   // {
	   //     for(int j=1;j<=n;j++)
	   //     {
	   //         if((i+j)%2!=0)
	   //         {
	   //             cnt++;
	   //         }
	   //     }
	   // }
	    cout<<(n*n)/2<<endl;
	}
	return 0;
}
