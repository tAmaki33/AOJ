#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
  double r;
  cin >> r;
  
  double S = M_PI*r*r;
  double l = 2*M_PI*r;

  cout << fixed << setprecision(6) << S << " "<< l << endl;
}