#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,n,cnt=0;
    long long int ans;
    cin>>t;
    while(t--){
        cin>>n;
        char str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
            if(str[i]=='1')
            cnt++;
        }
        ans=(cnt*1LL*(cnt+1))/2;
        cout<<ans<<endl;
        cnt=0;
        
    }
    return 0;
}