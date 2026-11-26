#include <iostream>
using namespace std;

int countValue(const int a[], int n,int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int numbers[n];
    int x;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cin >> x;
    cout << countValue(numbers,n,x);
}
