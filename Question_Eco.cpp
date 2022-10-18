#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

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



int main()
{
    int t;
    t=1;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
