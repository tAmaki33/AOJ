#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  string w,t;
  cin >> w;
  while(1) {
    string tmp;
    getline(cin,tmp);
    if(tmp == "END_OF_TEXT") break;
    else t+=tmp+" ";
  }
  transform(t.begin(),t.end(),t.begin(),::tolower);
  vector<string> vec;
  int ans=0;;
  while(1){
    string::size_type p = t.find(" ");
    if(p!=string::npos){
      if(t.substr(0,p) == w) ++ans;
      t=t.substr(p+1,t.length()-p);
    } else {
      break;
    }
  }
  cout << ans << endl;
}