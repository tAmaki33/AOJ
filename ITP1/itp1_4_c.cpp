#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> a;
  vector<int> b;
  vector<char> op;
  
  int A,B;
  char OP;

  int i=0;
  while(true){
    
    cin >> A  >> OP >> B;
    a.push_back(A);
    b.push_back(B);
    op.push_back(OP);
    if(OP=='?') break;

    ++i;
  }

  i=0;
  while(true) {
    if(op[i]=='?') return 0;
    if(op[i]=='+') cout << a[i]+b[i] << endl;
    if(op[i]=='-') cout << a[i]-b[i] << endl;
    if(op[i]=='*') cout << a[i]*b[i] << endl;
    if(op[i]=='/') cout << a[i]/b[i] << endl;

    ++i;
  }
}