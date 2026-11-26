#include <iostream>
using namespace std;

void duplicateZeros(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0 && i + 1 < n) {
            for (int j = n - 1; j > i + 1; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = 0;
            i++;
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    duplicateZeros(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}