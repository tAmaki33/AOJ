#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector< vector<int> > v(3000,vector<int>(3));
  int i=0;
  while(true){
    cin >> v[i][0] >> v[i][1];
    if(v[i][0]==0 && v[i][1]==0) break;

    ++i;
  }

  i = 0;
  while(true){
    if(v[i][0]==0 && v[i][1]==0) break;
    if(v[i][0]>v[i][1]) swap(v[i][0],v[i][1]);
    cout << v[i][0] << " " << v[i][1] << endl;
    
    ++i;
  }
}