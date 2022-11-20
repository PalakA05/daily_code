#include <iostream>
using namespace std;

class tablet
{
public:
    int w;
    int h;
    int p;
    void input()
    {
        cin>>w;
	    cin>>h;
	    cin>>p;
    }
};

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,b;
	    cin>>n>>b;
	    int maxarea=0;
	    tablet tab[n];
	    for(int i=0;i<n;i++)
	    {
	        tab[i].input();
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(b >= tab[i].p and maxarea < tab[i].h*tab[i].w)
	        {
	            maxarea = tab[i].h*tab[i].w;
	        }
	    }
	    if(maxarea==0)
	    {
	        cout<<"no tablet"<<endl;
	    }
	    else
	    {
	        cout<<maxarea<<endl;
	    }
	}
	return 0;
}
