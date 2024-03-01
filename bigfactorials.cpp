#include <iostream>
using namespace std;

unsigned long long calculate_factorial(int N) {
    unsigned long long result = 1;
    for (int i = 1; i <= N; ++i) {
        result *= i;
    }
    return result;
}

int extract_last_4_digits(unsigned long long num) {
    return num % 10000;
}

int main() {
    int N;
    cin >> N;
    unsigned long long factorial_N = calculate_factorial(N);
    int last_4_digits = extract_last_4_digits(factorial_N);

    cout  <<last_4_digits << endl;

    return 0;
}
