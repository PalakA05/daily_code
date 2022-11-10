// You don't need to add/edit anything to the below solution. 
// Click on the SUBMIT button to solve your first problem on CodeChef.

#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
		if (x >= y) {
			cout << x << endl;
		}
		else {
			cout << y << endl;
		}
	}
}