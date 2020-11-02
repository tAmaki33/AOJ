#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  // 10で割り、余りが3
  int x;
  for(int i=1;i<=N;++i){
    x = i;
    // 1. 3で割り切れたらiを出力
    if(x%3==0){
      cout << " " << i;
      continue;
    }
    // 2.
    bool chk = false; 
    while(x>0){
      if(x%10==3) {
        chk = true;
        cout << " " << i;
        break;
      }
      x/=10;
    }
    if(chk) continue;
  }
  cout << endl;

  return 0;
}