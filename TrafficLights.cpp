#include <iostream>
using namespace std;

int main() {
    int times[] = {80, 135, 150, 212};
    int n = 4;

    for (int i = 0; i < n; i++) {
        int t = times[i];
        int pos = (t - 45) % 103;
        string color = (pos < 3) ? "Yellow" : (pos < 83 ? "Red" : "Green");
        cout << "At second " << t << ": " << color << endl;
    }

    return 0;
}
