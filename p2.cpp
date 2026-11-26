#include <iostream>
using namespace std;

int largestAltitude(const int a[], int n) {
    int altitude = 0;
    int best = 0;
    for (int i = 0; i < n; i++) {
        altitude += a[i];
        if (altitude > best) {
            best = altitude;
        }
    }
    return best;
}

int main() {
    int n;
    cin >> n;
    int numbers[100];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << largestAltitude(numbers, n);
}
