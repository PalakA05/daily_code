#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t)
    {
        int x,y;
        cin>>x>>y;
        (x<y)?cout<<"FIRST"<<endl:(y<x)?cout<<"SECOND"<<endl:cout<<"ANY"<<endl;
        t--;
    }
	// your code goes here
	return 0;
}
