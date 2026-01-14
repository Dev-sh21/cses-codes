#include<iostream>
using namespace std;
int main(){
  string str;
  cin>>str;
  int maxLength=1;
  int currentLength=1;
  for(int i=0;i<str.length();i++){
    if(str[i]==str[i-1]){
      currentLength++;
    }else currentLength=1;
    maxLength=max(maxLength,currentLength);
  }
  cout<<maxLength<<endl;
  return 0;
}