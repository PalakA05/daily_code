#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int tr;
        cin>>tr;
        int Tr[100];
        for(int i=0; i<tr; i++)
            cin>>Tr[i];
        int dr;
        cin>>dr;
        int Dr[100];
        for(int i=0; i<dr; i++)
            cin>>Dr[i];
        int ts;
        cin>>ts;
        int Ts[100];
        for(int i=0; i<ts; i++)
            cin>>Ts[i];
        int ds;
        cin>>ds;
        int Ds[100];
        for(int i=0; i<ds; i++)
            cin>>Ds[i];
        int b=0,c=0;
        for(int j=0; j<ts; j++)
        {
            int a=0;
            for(int k=0; k<tr; k++)
            {
                if(Ts[j] == Tr[k])
                    a=1;
            }
            if(a == 1)
                b++;
        }
        for(int j=0; j<ds; j++)
        {
            int a=0;
            for(int k=0; k<dr; k++)
            {
                if(Ds[j] == Dr[k])
                    a=1;
            }
            if(a == 1)
                c++;
        }
        
        if((b==ts)&&(c==ds))
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
	return 0;
}
