#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    int diff = w2-w1;
	    int flag = 0;
	    if(diff >= x1*m && diff <= x2*m){
	    for(int i=x1;i<=x2;i++)
	    {
	        if(diff <= i*m)
	        {
	            cout<<"1"<<endl;
	            flag = 1;
	            break;
	        }
	        else
	            continue;
	    }
	    }
	    if(flag == 0)
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
