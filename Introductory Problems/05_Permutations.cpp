#include<iostream>
using namespace std;
using ll=long long;
int main(){
  ll n;
  cin>>n;
  if(n==1) cout<<"1\n";
  if(n==2|| n==3) cout<<"NO SOLUTION\n";
  if(n>3){
    for(int i=2;i<=n;i+=2)
    cout<<i<<" ";
    for(int i=1;i<=n;i+=2)
    cout<<i<<" ";
  } 
  cout<<"\n";
  return 0;
}