#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    int arr[a];
	    for(int i=0;i<a;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+a);
	    b=arr[a-1]-arr[0];
	    cout<<b<<endl;
	}
	
	return 0;
}
