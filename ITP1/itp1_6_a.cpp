#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i;i<n;++i) cin >> v[i];
  reverse(v.begin(),v.end());

  for(int i=0;i<n;++i) {
    cout << v[i];
    if(i<n-1) cout << " ";
  }
  cout << endl;

  return 0;
}