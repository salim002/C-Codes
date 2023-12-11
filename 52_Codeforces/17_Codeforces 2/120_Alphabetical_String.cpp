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

void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    if(s.find('a') == string::npos){
        cout<<"NO"<<endl;
        return;
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    if(s.size()==2){
        if(s.find('b') != string::npos){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    ll x = s.find('a'), i;
    vl v1, v2;
    v1.clear();
    v2.clear();
    for(i=0; i<x; i++){
        v1.insert(v1.begin(), ll(s[i]-'a'));
    }
    for(i=x+1; i<n; i++){
        v2.push_back(ll(s[i]-'a'));
    }

    // string s1 = s.substr(0, s.find('a'));
    // string s2 = s.substr(s.find('a')+1);
    // // cout<<s1<<" "<<s2<<endl;
    // vl v1, v2;
    // for(ll i=0; i<s1.size(); i++){
    //     v1.push_back(s1[i]-'a');
    // }
    // for(ll i=0; i<s2.size(); i++){
    //     v2.push_back(s2[i]-'a');
    // }
    // sort(v1.begin(), v1.end());
    // sort(v2.begin(), v2.end());
    // for(auto it:v1){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it:v2){
    //     cout<<it<<" ";
    // }
    // vl v;
    ll j=0, k=0, flag = true;
    for(i=1; i<n; i++){
        if(v1.empty()==false && j<v1.size() && v1[j]==i){
            j++;
        }
        else if(v2.empty()==false && k<v2.size() && v2[k]==i){
            k++;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // while(i<v1.size() && j<v2.size()){
    //     if(v1[i]<v2[j]){
    //         v.push_back(v1[i]);
    //         i++;
    //     }
    //     else if(v2[j]<v1[i]){
    //         v.push_back(v2[j]);
    //         j++;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    // while(i<v1.size()){
    //     v.push_back(v1[i]);
    //     i++;
    // }
    // while(j<v2.size()){
    //     v.push_back(v2[j]);
    //     j++;
    // }
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(ll i=0; i<v.size(); i++){
    //     if(v[i]!=(i+1)){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    // cout<<"YES"<<endl;
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