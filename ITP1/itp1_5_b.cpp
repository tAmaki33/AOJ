#include <iostream>
#include <string>
#include <vector>
using namespace std;

string square(int h, int w){
  string result = "";
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(i==0 || i==h-1) result += "#";
      else result += (j==0 || j==w-1) ? "#" : ".";
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
    cout << square(v[i][0],v[i][1]) << endl;
  }
}