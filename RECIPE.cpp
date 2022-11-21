#include <iostream>
using namespace std;
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
 
int findGCD(int arr[], int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ing[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ing[i];
	    }
	    int GCD = findGCD(ing,n);
	    for(int i=0;i<n;i++)
	    {
	        cout<<ing[i]/GCD<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
