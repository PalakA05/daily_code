#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int i=0,b=0,c=0;
	    string s1,s2;
	    cin>>s1>>s2;
	    while(s1[i]){
	        if(s1[i]=='?'||s2[i]=='?')
	        b++;
	        else if(s1[i]!=s2[i])
	        c++;
	        i++;
	    }
	    cout<<c<<' '<<b+c<<endl;
	}
	return 0;
}
