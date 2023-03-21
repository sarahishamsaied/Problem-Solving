#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    long long n, m, a;
    cin >> n >> m >> a;
 
    long long num_flagstones_length = ceil(double(n)/a);
    long long num_flagstones_width = ceil(double(m)/a);
 
    cout << num_flagstones_length * num_flagstones_width << endl;
 
    return 0;
}