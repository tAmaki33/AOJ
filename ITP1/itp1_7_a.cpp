#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  vector<vector<int> > score;
  while(1){
    vector<int> vec(3);
    cin >> vec[0] >> vec[1] >> vec[2];
    if(vec[0]== -1 && vec[1]== -1 && vec[2]== -1) break;
    else score.push_back(vec);
  }

  
  for(int i=0;i<score.size();++i){
    if(score[i][0]==-1 || score[i][1]==-1) {
      cout << "F" << endl;
      continue;
    }
    
    int sum = score[i][0]+score[i][1];
    if(sum>=80) cout << "A" << endl;
    else if(sum<80 && sum>=65) cout << "B" << endl;
    else if(sum<65 && sum>=50) cout << "C" << endl;
    else if(sum<50 && sum>=30) {
      if(score[i][2]>=50) cout << "C" << endl;
      else cout << "D" << endl;
    } else cout << "F" << endl;
  }

}