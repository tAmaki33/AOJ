#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  double x1, x2, y1, y2;
  double d;
  cin >> x1 >> x2 >> y1 >> y2;
  d = sqrt(pow(y1-x1,2)+pow(y2-x2,2));
  cout << fixed << setprecision(8) << d << endl;
}