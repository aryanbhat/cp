#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define ld long double
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define debug(x) cerr << #x<<" "; cout<<x ; cerr << endl;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define REP(i,a,b) for (int i = a; i < b; i++)
#define SQ(a) (a)*(a)
#define int unsigned long long

typedef vector<int> vi;
typedef pair<int,int> pi;


void solve(){
   int n;
    cin>>n;
    if(n>19){
      cout<<"NO\n";
      return;
    }
    cout<<"YES\n";
    vi arr;
    int x=3;
    for(int i=0;i<n;i++){
      arr.pb(pow(x,i));
    }
    for(auto i:arr){
      cout<<i<<" ";
    }
    cout<<nline;
}


int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}