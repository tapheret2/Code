#include<bits/stdc++.h>
using namespace std;
const int N=10001;
int a[N],n,s[N],S,res;

main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]; //Nhập a[i]
        S+=a[i];
    }
    if(S%n==0){ //TH1: S chia hết cho n
        for(int i=1;i<=n;i++){
            if(a[i]>S/n){
                s[i]=a[i]-S/n;
                res+=s[i];
            }
        }
    cout<<res<<endl;
    }
    else cout<<-1; //TH2; S k chia hết cho n
}



