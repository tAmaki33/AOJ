#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int a,b,C;
  cin >> a >> b >> C;
  double S,L,h;
  double c;
  S=a*b*sin(C*M_PI/180)/2;
  c=sqrt(a*a+b*b-2*a*b*cos(C*M_PI/180));
  L=a+b+c;
  h=S*2/a;

  cout << fixed << setprecision(8);
  cout << S << endl;
  cout << L << endl;
  cout << h << endl;
}
