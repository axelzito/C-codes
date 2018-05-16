#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#include <bitset>
#include <string>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
  ios::sync_with_stdio(false);
  int num=-1, qnt=-1;
  char c;
  string numero;

  while(true) {
    cin >> num >> qnt;
    if(num == 0 && qnt == 0) break;
    vector<char> v;
    vector<char>::iterator it;
    int d = qnt;

    it = v.begin();

    cin >> numero;
    c = numero[0];
    v.push_back(c);
    for(int i=1 ; i<num; i++) {
      c = numero[i];
      while(!v.empty() && c > v.back() && qnt>0) {
        v.pop_back();
        qnt--;
      }  
      if(v.size()< num-d) {
        v.push_back(c);
      }
    }       
    for(it=v.begin(); it!=v.end(); it++){
      cout << *it;
    }
    cout << '\n';
  }
  return 0;
}
