#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin>>n>>m;
  int initial=1;
  long long int time=0;
  while(m--){
    int x;
    cin>>x;
    if(x<initial){
      time+=n-(initial-x);
    }
    else{
    time+=(x-initial);
    }
    initial=x;
  }
  cout<<time;
}