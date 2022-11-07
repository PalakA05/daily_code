#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,t,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    int max=0;
	    for(int i=1;i<=b;i++){
	        int rem = a%i;
	        if(rem>max){
	            max = rem;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
