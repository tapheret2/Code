#include<bits/stdc++.h>
using namespace std;
const int N=201;
int a[N],n,s,res;
bool ss(int x, int y){
    return x>y;
    }

main(){
    cin>>n>>s;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,ss);

    for(int i=1;i<=n;i++)
    if(a[i]<=s){
        res=res+s/a[i];
        s=s%a[i];
    }
    if(s==0) cout<<res;
    else cout<<-1;
}

