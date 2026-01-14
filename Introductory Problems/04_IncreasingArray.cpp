#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
int main(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  ll moves=0;
  ll currentMax=arr[0];
  for(ll i=1;i<n;i++){
    if(arr[i]<currentMax){
      moves+=(currentMax-arr[i]);
    }else{
      currentMax=arr[i];
    }
  }
  cout<<moves<<endl;
  
  return 0;

}