#include <iostream>
using namespace std;
bool prime(int a) { 
    if (a < 2)
        return false;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    bool ans = prime(a+b);
	    if(ans == false)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Alice"<<endl;
	    }
	}
	return 0;
}
