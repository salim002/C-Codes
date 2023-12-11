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
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int mod = 1000000007;
const ll M = 998244353;

ll mul(ll a, ll b){
    return ((a%M)*(b%M))%M;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%M;
    ll res=1;
    while(b>0){
        if(b&1){
            res = mul(res, a);
        }
        b = b>>1;
        a = mul(a, a);
    }
    return res;
}

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res = mul(res, i);
    }
    return res;
}

ll dv(ll a, ll b){
    return mul(a, modPower(b, M-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

int sumSubarrayMins(vector<int>& arr) {
        long long ans = 0;
        stack <int> st;
        int n = arr.size();

        for(int i = 0; i <=n; i++){
            while((!st.empty()) && (i == n || arr[st.top()]>= arr[i]) ){
                int mid = st.top();
                st.pop();
                int left = st.empty()?-1:st.top();
                int right = i;
                long long count = (mid - left)*(right - mid);
                ans = (ans + count*arr[mid]);
            }
            st.push(i);
        }
        return ans;
    }
void solve()
{
  int n;
  cin>>n;
  vi prices(n);
  for(auto &x:prices) cin>>x;
  int min_sum = sumSubarrayMins(prices);
  for(auto &x:prices){
    x = -x;
  }
  int max_sum = -sumSubarrayMins(prices);
  cout<<max_sum-min_sum<<endl;
}


int main(){
    fast_io
    solve();
    // int t;
    // cin>>t;
    // while(t--){
    // }
    return 0;
}