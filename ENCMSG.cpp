#include <bits/stdc++.h>
#include<string.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    char s[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    if(n%2 == 0)
	    {
	        for(int i=0;i<n;i+=2)
	        {
	            swap(s[i],s[i+1]);
	        }
	    }
	    else
	    {
	        for(int i=0;i<n-2;i+=2)
	        {
	            swap(s[i],s[i+1]);
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if((int)s[i]<=109)
	        {
	           int diff=109-(int)s[i];
               s[i]=(char)(110+diff);
	        }
	        else
	        {
	           int diff=122-(int)s[i];
	           s[i]=(char)(97+diff);
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<s[i];
	    }
	    cout<<endl;
	}
	return 0;
}
