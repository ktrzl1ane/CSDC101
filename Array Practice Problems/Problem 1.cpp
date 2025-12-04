#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            count++;
        }
    }

    if (count == n - 1) {
        cout << "The array is in ascending order." << endl;
    } else {
        cout << "The array is not in ascending order." << endl;
    }

    return 0;
}
