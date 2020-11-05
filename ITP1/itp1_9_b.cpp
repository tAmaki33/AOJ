#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  vector<string> s;
  vector< vector<int> > h;
  string str;
  int m;
  while(1){
    cin >> str;
    if(str == "-") break;
    cin >> m;
    vector<int> k(m);
    for(int i=0;i<m;++i) cin >> k[i];
    s.push_back(str);
    h.push_back(k);
  }

  for(int i=0;i<s.size();++i) {
    for(int j=0;j<h[i].size();++j){
      s[i] = s[i].substr(h[i][j],s[i].length()-h[i][j])+s[i].substr(0,h[i][j]);
    }
    cout << s[i] << endl;
  }
}
