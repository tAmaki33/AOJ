#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<long> a(n);
  for(int i=0;i<n;++i) cin >> a[i];

  long sum = 0;
  long mx = -1000000;
  long mn = 1000000;
  for(int i=0;i<n;++i) {
    sum+=a[i];
    mx = max(mx,a[i]);
    mn = min(mn,a[i]);
  }

  cout << mn << " " << mx << " " << sum << endl;
}