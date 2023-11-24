#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

double distance(Point p1, Point p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    Point p1, p2;
    cout << "Masukkan koordinat titik pertama (x y): ";
    cin >> p1.x >> p1.y;
    cout << "Masukkan koordinat titik kedua (x y): ";
    cin >> p2.x >> p2.y;
    cout << "Jarak antara kedua titik adalah " << distance(p1, p2) << endl;
    return 0;
}