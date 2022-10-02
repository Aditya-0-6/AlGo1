#include <bits/stdc++.h>
using namespace std;

bool isValid(int a[],int n,int l,int m){
    long long w=0;
    for(int i=0;i<n;i++){
        if(a[i]>l)w+=a[i]-l;
    }
    if(w>=m)return true;
    else return false;
}

void solve(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    long long ans=0;
    long long lo=0,hi=*max_element(a,a+n);
    while(lo<=hi){
        long long mid=lo +( hi-lo)/2;
        if(isValid(a,n,mid,m)){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans<<endl;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}