#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

/*
  行列A..m * n
  行列B..m * l

  行列C..n*l
*/

  // i=0,j=0,k=0 A[i][j] = 1, B[j][k] = 1
  // i=0,j=0,k=1 A[i][j] = 1, B[j][k] = 2
  // i=0,j=0,k=2 A[i][j] = 1, B[j][k] = 1
  // i=0,j=1,k=0 A[i][j] = 2, B[j][k] = 1
  // i=0,j=1,k=1 A[i][j] = 2, B[j][k] = 2
  // i=0,j=1,k=2 A[i][j] = 2, B[j][k] = 1

int main(){
  int n,m,l;
  cin >> n >> m >> l;
  vector<vector<long> > A(n, vector<long>(m));
  vector<vector<long> > B(m, vector<long>(l));
  vector< vector<long> > C(n, vector<long>(l,0));
  // 行列Aを取得
  for(int y=0;y<n;++y){
    for(int x=0;x<m;++x) cin >> A[y][x];
  }
  // 行列Bを取得
  for(int y=0;y<m;++y){
    for(int x=0;x<l;++x) cin >> B[y][x];
  }
  for(int i=0;i<n;++i){ // Aの行数
    for(int j=0;j<m;++j) { // Aの列数/Bの行数
      for(int k=0;k<l;++k){ // Bの列数
        C[i][k] += A[i][j]*B[j][k];
      }
    }
  }

  for(int y=0;y<n;++y){
    for(int x=0;x<l;x++){
      if(x>0) cout << " ";
      cout << C[y][x]; 
    }
    cout << endl;
  }
}