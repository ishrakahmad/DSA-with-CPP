#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "I Love C Plus Plus";
    int words = 1;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            words++;
        }
    }

    cout << "Words = " << words;

    return 0;
}