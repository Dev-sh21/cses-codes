#include<iostream>
#include<vector>
using namespace std;
int main(){
  long long n;
  cin>>n;
  long long sumOne=0;
  
  vector<long long>sumArr;
  vector<long long>remainingArr;
  long long sum=(n*(n+1)/2);
  if(sum%2==0) cout<<"YES\n";
  else {
    cout<<"NO";
    return 0;
  }
  long long half=sum/2;

  
  for(long long i=n;i>=1;i--){
    if(sumOne+i<=half) {
      sumOne+=i;
      sumArr.push_back(i);
    }else{
      remainingArr.push_back(i);
    }
    
    }


  

  cout<<sumArr.size()<<endl;
  for(long long x:sumArr) cout<<x<<" ";
  cout<<endl;
  cout<<remainingArr.size()<<endl;
  for(long long x:remainingArr) cout<<x<<" ";
  return 0;
  }


