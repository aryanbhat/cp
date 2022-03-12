#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;
    set<long long int>ans;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
      ans.insert((i^j));
      }
    }
    cout<<ans.size()<<"\n";
  }
  return 0;
}