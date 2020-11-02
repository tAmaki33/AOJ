#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int> > a(n, vector<int>(m));
  vector<int> b(m);

  for(int y=0;y<n;++y) {
    for(int x=0;x<m;++x) {
      cin >> a[y][x];
    }
  }
  for(int y=0;y<m;++y){
    cin >> b[y];
  }

  for(int y=0;y<n;++y) {
    int sum=0;
    for(int i=0;i<m;++i) sum+= a[y][i]*b[i];
    cout << sum << endl;
  }
}