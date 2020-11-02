#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <math.h>
#include <map>
#include <algorithm>
using namespace std;

int main(){
  map<string,vector<int> > deck;
  int N;
  cin >> N;

  string tmp;
  int num;
  for(int i=0;i<N;++i) {
    cin >> tmp >> num;
    deck[tmp].push_back(num);
  }

  vector<string> suits(4);
  suits[0] = "S";
  suits[1] = "H";
  suits[2] = "C";
  suits[3] = "D";

  for(int n=0;n<suits.size();++n){
    string key = suits[n];
    for(int i=1;i<=13;++i) {
      bool exist = false;
      for(int j=0;j<deck[key].size();++j){
        if(i==deck[key][j]) exist = true; 
      }
      if(!exist) cout << key << " " << i << endl;
    }
  }
}