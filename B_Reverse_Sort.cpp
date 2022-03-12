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

typedef vector<int> vi;
typedef pair<int,int> pi;

bool sorted(string s){
  for(int i=1;i<s.size();i++){
    if(s[i]<s[i-1]){
      return 0;
    }
  }
  return 1;
}
void solve(){
    int n;
    cin>>n;
    int a=n;
    string s;
    cin>>s;
    string t;
    t=s;
    sort(all(t));
    if(s==t){
      cout<<"0\n";
      return; 
    }
    cout<<"1\n";
    vi ans;
    for(int i=0;i<n;i++){
      if(s[i] != t[i]){
          ans.pb(i+1);
      }
    }
    cout<<ans.size()<<" ";
    for(auto i:ans)
    {
      cout<<i<<" ";
    }
    cout<<"\n";
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}