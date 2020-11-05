#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  string str;
  int q;
  cin >> str >> q;
  string order;
  string p;
  int a,b;
  vector<string> ans;
  for(int i=0;i<q;++i){
    cin >> order;
    cin >> a >> b;
    if(order == "replace"){
      cin >> p;
      str = str.replace(a,b-a+1,p);
    } else if(order == "reverse") {
      p = str.substr(a,b-a+1);
      reverse(p.begin(), p.end());
      str = str.replace(a,b-a+1,p);
    } else if(order == "print") {
      ans.push_back(str.substr(a,b-a+1));
    }
  }
  for(int i=0;i<ans.size();++i){
    cout << ans[i] << endl;
  }
}