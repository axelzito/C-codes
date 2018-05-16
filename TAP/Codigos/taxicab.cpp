#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double t, i, r, area=0, areataxicab=0;

    cin >> t;

    for(i=0; i < t; i++){
        cin >> r;
        area = M_PI *(pow(r, 2));
        areataxicab = 2 * (pow(r, 2));

        std::cout << std::fixed << std::setprecision(6);
        std::cout << area << "\n";
        std::cout << areataxicab << "\n";
    }

    return 0;
}
