#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int count,max=-1;
	    for(int i=0;i<n;i++)
	    {
	        count=1;
	        for(int j=i+1;j<n;j++)
	        {
	            if(a[i] == a[j])
	            {
	                count++;
	            }
	        }
	        if(count>max)
	        {
	            max = count;
	        }
	    }
	    cout<<n-max<<endl;
	}
	return 0;
}
