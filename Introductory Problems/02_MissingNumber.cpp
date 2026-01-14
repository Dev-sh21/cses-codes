#include<iostream>
#include<numeric>
using namespace std;
#include<vector>
using ll=long long;
int main(){
  ll n;
  cin>>n;
  vector<ll>num(n-1);
  for(ll i=0;i<n-1;i++){
    cin>>num[i];
  }
  ll sumOfNumber=n*(n+1)/2;
  ll sum=accumulate(num.begin(), num.end(), 0LL);
  ll res=sumOfNumber-sum;
  cout<<res<<endl;
  return 0;
}