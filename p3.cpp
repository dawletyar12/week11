#include<iostream>
using namespace std;

void shuffle(const int nums[], int n, int result[]) {
    for (int i = 0; i < n; i++) {
        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[n + i];
    }
}
int main() {
    int n;
    cin >> n;
    int numbers[n*2];
    int result[n*2];
    for (int i = 0; i < n*2; i++) {
        cin >> numbers[i];
    }
    shuffle(numbers, n, result);
    for (int i = 0; i < n*2; i++) {
        cout << result[i];
    }
}