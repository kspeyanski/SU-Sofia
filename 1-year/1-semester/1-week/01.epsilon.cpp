#include <iostream>

using namespace std;

template<typename Type>
Type calcEpsilon(Type num) {
    Type epsilon = num;

    do {
        epsilon *= 0.5f;
    } while(1 + epsilon * 0.5f != 1.0f);

    return epsilon;
}

template<typename Type>
Type calcuateUnderflow(Type num) {
    Type underflow = num;

    do {
        underflow = underflow /  2.0f;
    } while(underflow / 2  != 0);

    return underflow;
}

int main() {
    const float floatNum = 1.0f;
    const double doulbeNum = 1.0;
    const long double longDoubleNum = 1.0;

    cout << "type: \"float\"" << endl;
    cout << "epsilon: " << calcEpsilon<float>(floatNum) << endl;
    cout << "undeflow: " << calcuateUnderflow<float>(floatNum) << endl;

    cout << "type: \"double\"" << endl;
    cout << "epsilon: " << calcEpsilon<double>(doulbeNum) << endl;
    cout << "undeflow: " << calcuateUnderflow<double>(doulbeNum) << endl;

    cout << "type: \"long double\"" << endl;
    cout << "epsilon: " << calcEpsilon<long double>(longDoubleNum) << endl;
    cout << "epsilon: " << calcuateUnderflow<long double>(longDoubleNum) << endl;

}