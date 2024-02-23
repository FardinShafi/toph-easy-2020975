#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int H, M;
    cin >> H >> M;
    double angleH = (H % 12) * 30 + M * 0.5;
    double angleM = M * 6;
    double angle = abs(angleH - angleM);

    if (angle > 180) {
        angle = 360 - angle;
    }
    cout << fixed << angle << endl;

    return 0;
}