#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int64_t number;

    cin >> number;

    if(number % 3 == 0 and number % 5 == 0)
        cout << "gripen";
    else if (number % 3 == 0)
        cout << "gri";
    else if (number % 5 == 0)
        cout << "pen";
    else
        cout << "not";
    
        return 0;
}