#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double w, l;

    cin >> w >> l;

    int answer_before = w*w + l*l;
    int answer_last = pow(answer_before, 0.5);
    return 0;
}