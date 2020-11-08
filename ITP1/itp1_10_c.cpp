#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  vector<int> n;
  vector< vector<int> > scores;

  while(1){
    int input;
    cin >> input;
    if(input == 0) break;
    vector<int> vec(input);
    for(int i=0;i<input;++i) cin >> vec[i];
    scores.push_back(vec);
  }

  double ans,average;
  cout << fixed << setprecision(8);
  for(int i=0;i<scores.size();++i){
    ans=0;
    average=0;
    for(int j=0;j<scores[i].size();++j){
      average += scores[i][j];
    }
    average/=scores[i].size();
    for(int n=0;n<scores[i].size();++n){
      ans+= pow(scores[i][n]-average,2);
    }
    ans /=scores[i].size();
    cout << sqrt(ans) << endl;
  }
}