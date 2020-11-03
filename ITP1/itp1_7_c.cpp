#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int r, c;
  cin >> r >> c;
  vector< vector<int> > rc(r, vector<int>(c));
  for(int y=0;y<r;++y) {
    for(int x=0;x<c;++x){
      cin >> rc[y][x];
    }
  }
  vector<int> csum(c,0);
  for(int y=0;y<r;++y){
    int rsum = 0;
    for(int x=0;x<c;++x) {
      csum[x] += rc[y][x];
      rsum += rc[y][x];
      cout << rc[y][x] << " ";
    }
    cout << rsum << endl;
  }
  int total = 0;
  for(int i=0;i<c;++i){
    total += csum[i];
    cout << csum[i] << " ";
  }
  cout << total << endl;
}