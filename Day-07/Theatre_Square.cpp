#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin>> n >> m >> a;

    long long horizontalFlagstones = ceil((double)n / a);
    long long verticalFlagstones = ceil((double)m / a);

    long long result = horizontalFlagstones * verticalFlagstones;

    cout << result << endl;

    return 0;
}