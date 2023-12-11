#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;

#define fi first
#define se second
#define mp make_pair
#define pb push_back

const int mod = 1000000007;
// const int mod = 998244353; 

ll Days(vl v, ll mx){
    ll n = v.size(), i;
    ll odd=0, even=0;
    for(i=0; i<n; i++){
        while(v[i]<mx-1){
            v[i] += 2;
            even++;
        }
        if(v[i]==mx-1){
            odd++;
        }
    }
    // cout<<even<<" "<<odd<<endl;
    if(odd>even){
        return (2*odd-1);
    }
    ll low=0, high=even, x;
    while(low<=high){
        ll mid = low+(high-low)/2;
        if(even-mid>=odd+(2*mid)){
            x=mid;
            low=mid+1;
        }
        else{
            high = mid-1;
        }
    }
    even -= x;
    odd += 2*x;
    ll ans1 = 2*even, ans2 = LLONG_MAX;
    if((even-odd)==2){
        ans2 = ans1-1;
    }
    return min(ans1, ans2);
}

void solve(){
    ll n, i;
    cin>>n;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll mx1 = v[n-1];
    ll mx2 = mx1+1;
    ll ans = min(Days(v, mx1), Days(v, mx2));
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}