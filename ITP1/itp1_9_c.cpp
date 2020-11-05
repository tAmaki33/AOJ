#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<string> taroDeck(n);
  vector<string> hanakoDeck(n);
  for(int i=0;i<n;++i){
    cin >> taroDeck[i] >> hanakoDeck[i];
  }
  int taroPoint=0;
  int hanakoPoint=0;
  for(int i=0;i<n;++i){
    if(taroDeck[i] > hanakoDeck[i]) taroPoint+=3;
    else if(taroDeck[i] < hanakoDeck[i]) hanakoPoint+=3;
    else {
      ++taroPoint;
      ++hanakoPoint;
    }
  }
  cout << taroPoint << " " << hanakoPoint << endl;
}