#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<double> x(n);
  vector<double> y(n);
  for(int i=0;i<n;++i) cin >> x[i];
  for(int i=0;i<n;++i) cin >> y[i];

  double p1,p2,p3,pm;
  p1=0;
  p2=0;
  p3=0;
  pm = 0;
  for(int i=0;i<n;++i){
    p1+= abs(x[i]-y[i]);
    p2+= pow(abs(x[i]-y[i]),2);
    p3+= pow(abs(x[i]-y[i]),3);
    if(i==0) pm = abs(x[i]-y[i]);
    else pm = max(pm, abs(x[i]-y[i]));
  }

  cout << fixed << setprecision(8);
  cout << p1 << endl;
  cout << sqrt(p2) << endl;
  cout << pow(p3,1.0/3.0) << endl;
  cout << pm << endl;
}