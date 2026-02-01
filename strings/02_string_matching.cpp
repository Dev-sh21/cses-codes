#include<iostream>
using namespace std;
int cnt=0;
void fillLPS(string str, int *LPS){
  int n=str.length(), len=0;
  LPS[0]=0;
  int i=1;
  while(i<n){
    if(str[i]==str[len]){
      len++;
    LPS[i]=len;
    i++;
    }else{
      if(len==0){
        LPS[i]=0;
        i++;
      }else{
        len=LPS[len-1];
      }
    }
  }

}
void KMP(string pat,string text){
  int n=text.length();
  int m=pat.length();
  int LPS[m];
  fillLPS(pat,LPS);
  int i=0,j=0;
  while(i<n){
    if(pat[j]==text[i]) {
      i++;
      j++;
    }
    if(j==m){
      cnt++;
      j=LPS[j-1];
    }
    else if(i<n && pat[j]!=text[i]){
      if(j==0) i++;
      else j=LPS[j-1];
    }

  }


}
int main() 
{ 
    string text, pat;
    cin>>text;
    cin>>pat;
    cnt=0;

    KMP(pat,text);
    cout<<cnt;
    return 0; 
}