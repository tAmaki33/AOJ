#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int d,r;
  double f;
  
  d = a/b;
  r = (int)a%b;
  f = (double)a/b;

  cout << d << " " << r << " ";
  cout << fixed << setprecision(5) << f << endl;
}