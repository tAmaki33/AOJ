#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

// char型の数字の内部表現は整数値
// '0' -> 48, '1' -> 49, ...として表される
// したがって, x(char型数字) - '0' とすると、整数値が得られる

int main(){
  vector<string> x;
  while(1) {
    string tmp;
    cin >> tmp;
    if(tmp=="0") break;
    else x.push_back(tmp);
  }

  for(int i=0;i<x.size();++i){
    int total =0;
    for(int j=0;j<x[i].length();++j){
      total += x[i][j]-'0';
    }
    cout << total << endl;
  }
}