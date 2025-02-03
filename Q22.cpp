#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }
    long long first = 0, second = 1, next;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
    return 0;
}
