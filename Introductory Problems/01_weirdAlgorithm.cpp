#include<iostream>
using namespace std;
using ull=unsigned long long;

int main(){
  ull n;
  cin>>n;
  for(int i=0;i<1e6;i++){
    cout<<n<<" ";
    if(n==1) break;
    if(n%2==0) n/=2;
    else n=3*n+1;
  }
  return 0;


  
}