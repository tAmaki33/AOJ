#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  string s,p;
  cin >> s >> p;

  s+=s;
  string::size_type n = s.find(p);
  if(n!=string::npos) cout << "Yes" << endl;
  else cout << "No" << endl;
}