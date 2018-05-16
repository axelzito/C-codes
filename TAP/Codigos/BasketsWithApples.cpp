#line 5 "BasketsWithApples.cpp"
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;

#define debug(p) cout << #p << "=" << p << endl;
#define forv(i, v) for (int i = 0; i < (int)(v.size()); ++i)
#define fors(i, s) for (int i = 0; i < (int)(s.length()); ++i)
#define all(a) a.begin(), a.end()
#define pb push_back
int main(){

    int k, t;
    cin>>t;

    for(k=0; k<t; k++){

        vector <int> apples;
        int max_num=0;
        int num, maca;

        cin>>num;

        for(int i=0; i<num; i++){
            cin>>maca;
            apples.push_back(maca);
        }

              forv(i,apples){
                int mul=(int)apples.size();
                forv(j,apples){
                        if(i!=j){
                                if(apples[i]>apples[j]){
                                        mul--;
                                }
                        }
                }
                max_num = max(max_num,mul*apples[i]);
        }

        cout<<max_num<<"\n";
    }

    return 0;
}
