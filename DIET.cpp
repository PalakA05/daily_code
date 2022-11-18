#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,protien=0,flag=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        protien = protien + a[i] - k;
	        if(protien<0)
	        {
	            cout<<"NO "<<i+1<<endl;
	            flag = 1;
	            break;
	        }
	        else{
	            flag=0;
	            continue; 
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"YES\n";
	    }
	}
	return 0;
}
