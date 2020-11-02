#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  vector< vector<int> > s;
  while(1){
    vector<int> nx(2);
    cin >> nx[0] >> nx[1];
    if(nx[0] == 0 && nx[1] == 0) break;
    s.push_back(nx);
  }
  
  for(int i=0;i<s.size();++i){
    int ans = 0;
    int e = s[i][0];
    for(int j=1;j<=e;++j){
      for(int k=j+1;k<=e;++k){
        for(int l=k+1;l<=e;++l) {
          if(j+k+l == s[i][1]) ++ans; 
        }
      }
    }
    cout << ans << endl;
  }
}