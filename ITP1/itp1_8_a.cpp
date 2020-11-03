#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  string line;
  getline(cin, line);

  for(int i=0;i<line.length();++i) {
    if(isupper(line[i])) line[i] = tolower(line[i]);
    else if(islower(line[i])) line[i] = toupper(line[i]);
  }
  cout << line << endl;
}