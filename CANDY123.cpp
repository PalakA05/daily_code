#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int i=1,j=2;
	    int flag1=0,flag2=0;
	    while(a>=0 ||b>=0){
	        a=a-i;
	        i=i+2;
	        if(a<0){
	            flag1=1;
	            break;
	        }
	          b=b-j;
	          j=j+2;
	         if(b<0){
	            flag2=1;
	            break;
	        }
	    }
	    if(flag2==1)
	    cout<<"Limak"<<endl;
	    else if(flag1==1)
	    cout<<"Bob"<<endl;
	}
	return 0;
}
