#include <iostream>
using namespace std;

int main() {
    long long number;

    cin >> number;

    if(number % 3 == 0 && number % 5 == 0) {
        cout << "gripen";
    }
    else if (number % 3 == 0) {
        cout << "gri";
    }
    else if (number % 5 == 0) {
        cout << "pen";
    }
    else {
        cout << "not";
    }
    return 0;
}

//อย่าสับสนนะครับระหว่าง % กับ &