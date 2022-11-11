#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int a[3];
	int t; cin >> t;
	for (int i = 1; i <= t; ++ i) {
	    for (int j = 0; j < 3; ++ j) {
	        cin >> a[j];
	    }
	    sort(a, a + 3);
	    cout << a[1] << endl;
	}
	return 0;
}
