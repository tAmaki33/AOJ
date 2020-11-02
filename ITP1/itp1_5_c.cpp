#include <iostream>
#include <string>
#include <vector>
using namespace std;

string board(int h, int w){
  string result = "";
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(i%2==0) result += j%2 == 0 ? "#" : ".";
      else result += j%2 == 0 ? "." : "#";
    }
    result += "\n";
  }

  return result;
}

int main(){
  vector< vector<int> > v;
  vector<int> hw(2);
  
  while(1){
    cin >> hw[0] >> hw[1];
    if(hw[0]==0 && hw[1]==0) break;
    else v.push_back(hw);
  }

  for(int i=0;i<v.size();++i){
    cout << board(v[i][0],v[i][1]) << endl;
  }
}