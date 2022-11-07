#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    string s1, s2;
    while(t--) {
        int i;
        cin>>s1;
        cin>>s2;
        for(i=0; i<s1.size(); i++) {
            if(s1[i] != s2[i]) {
                if(s1[i] == '?' || s2[i] == '?')
                    continue;
                else {
                    cout<<"No"<<endl;
                    break;
                }
            }
        }
        if(i==s1.size())
            cout<<"Yes"<<endl;
    }
}
