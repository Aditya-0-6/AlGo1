#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

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
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    ll lo=0,hi=*max_element(a,a+n);
    
    while(lo<=hi)
    {
        long long mid=lo +( hi-lo)/2;
        if(isValid(a,n,mid,m)){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    
    cout<<ans;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t=1;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
