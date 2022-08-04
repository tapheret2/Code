#include<bits/stdc++.h>
using namespace std;
const int N=10001;
int a[N],n,i,res;
int s=650;
bool tap(int x, int y){
    return x<y;
    }
main(){
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,tap);
    for(i=1;i<=n;i++)
    if(a[i]<=s){
        res=res+1;
        s=s-a[i];
        }
    cout<<res<<endl;
    s=650-s;
    cout<<s<<endl;
    }

