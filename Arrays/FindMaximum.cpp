#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7};

    int mx = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > mx)
            mx = arr[i];
    }

    cout << "Maximum = " << mx;

    return 0;
}