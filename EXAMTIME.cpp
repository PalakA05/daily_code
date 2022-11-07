#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int d1,d2,d3,s1,s2,s3;
	    cin>>d1>>d2>>d3;
	    cin>>s1>>s2>>s3;
	    int dt,st;
	    dt = d1+d2+d3;
	    st = s1+s2+s3;
	    if(dt>st || (dt==st && d1>s1) || (dt==st && d1==s1 && d2>s2))
	    {
	        cout<<"DRAGON"<<endl;
	    }
	    else if(dt<st || (dt==st && d1<s1) || (dt==st && d1==s1 && d2<s2))
	    {
	        cout<<"SLOTH"<<endl;
	    }
	    else
	    {
	        cout<<"TIE"<<endl;
	    }
	}
	return 0;
}
