#include <iostream>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int ans = 0;
  for(int i=a;i<b+1;++i){
    if(c%i==0) ++ans;
  }
  cout << ans << endl;
}