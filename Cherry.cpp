#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
#define pb push_back
#define vll vector<ll> 
#define nl "\n"
#define pii pair<int,int>
#define pll pair<ll,ll>
#define rep(i,x,y) for(ll i=x;i<y;i++)
#define drep(i,x,y) for(ll i=x;i>=y;i--)
#define spc " "
#define all(v) v.begin(),v.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define sz(x) x.size()
#define __builtin_popcount __builtin_popcountll
#define MuryoKushou std::ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
#define maxs(x,y) x=max(x,y) // Used in dp 
#define mins(x,y) x=min(x,y) // Used in dp
#define minusone cout<<-1<<nl
// #define PI acos(-1)

// Let's start.


// bool isPrime(ll n){
//     if (n <= 1)
//         return false;
//     else if(n==2 || n==3) return true;
//     for (ll i = 2; i*i<=n; i++)
//         if (n % i == 0) return false;
//     return true;
// }

// ll nCr(ll n,ll r)
// {
//     if (r > n)
//         return 0;
//     if (r == 0 || r == n)
//         return 1;
//     return nCr(n - 1, r - 1) + nCr(n - 1, r);
// }

vll factors(ll n){
    vll v;
    if(n==1){
        v.pb(1);
        return v;
    }
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            v.pb(i);
            if(i*i!=n) v.pb(n/i);
        }
    }
    v.pb(1);
    v.pb(n);
    sort(all(v));
    // reverse(all(v));
    return v;
}

// ll factorise(ll n){
//     ll ct=0;
//     for(ll i=2;i*i<=n;i++){
//         ct+=(n%i==0);
//         while(n%i==0){
//             n/=i;
//             ++ct;
//         }
//     }
//     ct+=(n!=1);
//     return ct;
// }

void printvll(vll &v){for(ll i=0;i<sz(v);i++) cout<<v[i]<<spc;cout<<nl;}

// string str_lower(string &s){ll k=32;rep(i,0,sz(s)) s[i]|=k;return s;}

// ll is_square(ll a){if(a==0) return 0;ll k=sqrt(a);if(k*k==a) return 1;return 0;}

const ll N=1e18;
// bool prime[N+1];
// void SieveOfEratosthenes(ll n) { 
//     vll v;
//     memset(prime, true, sizeof(prime)); 
//     for (ll p = 2; p * p <= N; p++) { 
//         if (prime[p] == true) { 
//             v.pb(p);
//             for (ll i = p * p; i <= N; i += p) 
//                 prime[i] = false; 
//         } 
//     }
//     ll nums=0; 
//     for(ll p = 2; p<=N; p++){
//     if(nums==N) break;
//         if (prime[p]){
//             cout<<p<<spc; 
//             ++nums;
//         }
//     }
//     cout<<nl;
// } 

// vector <vll> gph;
// bool vis[];

// ll dfs(vll gph[],ll v, bool vis[]){
//     for(ll u:gph[v]){
//         if(vis[u]) continue;
//     }
//     return ans;
// }

// bool comp(const pair<ll,ll>&a,const pair<ll,ll>&b){return a.first<b.first;}
// bool comp2(const pair<ll,ll>&a,const pair<ll,ll>&b){return a.second<b.second;}

// bool cmp(pll x, pll y)
// {
//     if (x.first != y.first)
//         return x.first > y.first; 
//     else
//         return x.second < y.second; 
// }

// double dist(double a,double b, double c, double d){
//     return sqrt( (a-c)*(a-c) + (b-d)*(b-d) );
// }

// set<ll>LuckyNum;void generate_lucky(ll num){if(num>=N) return;if(num!=0) LuckyNum.insert(num);generate_lucky(num*10+4);generate_lucky(num*10+7);}

void solve(){
    
    // cout<<"End\n";
}

signed main() 
{   
    MuryoKushou
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    ll t=1;
    // cin>>t;  
    while(t--){
        solve();
    }
        return 0;
// Let's end this
}


/*
 
____ __ __ __ __ __ ___                             ___ __ __ __ __ __ ____
 `-._:  .:'   `:::  .:\           |\__/|           /::  .:'   `:::  .:.-'
     \      :          \          |:   |          /         :       /
      \     ::    .     `-_______/ ::   \_______-'   .      ::   . /
       |  :   :: ::'  :   :: ::'  :   :: ::'      :: ::'  :   :: :|
       |     ;::         ;::         ;::         ;::         ;::  |
       |  .:'   `:::  .:'   `:::  .:'   `:::  .:'   `:::  .:'   `:|
       /     :           :           :           :           :    \
      /______::_____     ::    .     ::    .     ::   _____._::____\
                    `----._:: ::'  :   :: ::'  _.----'
                           `--.       ;::  .--'
                               `-. .:'  .-'
                                  \    /
                                   \  /
                                    \/
*/