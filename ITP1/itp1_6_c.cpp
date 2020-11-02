#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector< vector<int> > v(n , vector<int>(4));

  for(int i=0;i<n;++i) cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
  
  for(int k=0;k<4;++k){
    for(int l=0;l<3;++l){
      vector<int> r(10,0);
      for(int i=0;i<n;++i){
        if(v[i][0]-1==k && v[i][1]-1==l) r[v[i][2]-1] += v[i][3];
      }
      for(int j=0;j<10;++j) cout << " " << r[j];
      cout << endl;
    }
    if(k<3) cout << "####################" << endl;
  }
}