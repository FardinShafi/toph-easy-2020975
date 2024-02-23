#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;
    string numStr = to_string(num);
    int length = numStr.length();
    int numCommas = (length - 1) / 3;
    for (int i = 1; i <= numCommas; ++i) {
        numStr.insert(length - i * 3, ",");
    }
    cout << numStr << endl;

    return 0;
}
