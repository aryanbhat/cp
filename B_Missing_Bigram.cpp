#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    string ans;
   
    getline(cin >> ws,s);
    ans.push_back(s[0]); 
    for(int i=0;i<s.size();i++){
      if(s[i]==' '){
        if(s[i-1]==s[i+1]){
          ans.push_back(s[i+1]);
        }
        else{
        ans.push_back(s[i-1]);
        ans.push_back(s[i+1]);
        }
      }
    }
    ans.push_back(s[s.size()-1]);
    while(ans.size()!=n){
      ans.push_back('a');
    }
    cout<<ans<<"\n";
  }
  return 0;
}