#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char s[], int n) {
    int left = 0;
    int right = n - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}
int main() {
    char s[100001];
    cin >> s;
    reverseString(s, strlen(s));
    cout << s << endl;
}