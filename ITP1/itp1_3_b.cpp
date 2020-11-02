#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v(10000);

  int cnt=0;
  while(true){
    cin >> v[cnt];
    if(v[cnt] == 0) break;
    ++cnt;
  }

  cnt=0;
  while(true) {
    if(v[cnt]==0) return 0;
    cout << "Case " << cnt + 1 << ": " << v[cnt] << endl;
    ++cnt;
  }
}