#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define SQ(a) (a)*(a)

typedef vector<int> vi;
typedef pair<int,int> pi;
bool isquare(int n){
  int a=sqrt(n);
  if(a*a==n){
    return 1;
  }
  return 0;
}
void solve(){
  int n;
  cin>>n;
  if(n%2==0&&isquare(n/2))cout<<"YES\n";
  else if(n%4==0&&isquare(n/4))cout<<"YES\n";
  else{
    cout<<"NO\n";
  }
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