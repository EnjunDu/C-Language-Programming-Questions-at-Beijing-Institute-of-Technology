#include <iostream>
#include <cmath>
#include <iomanip> //用于控制输出精度
using namespace std;

int main() {
    int a, b, c;
    double x1, x2;
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c; //计算判别式
    if (a == 0) { //a为0，方程不成立
        cout << "Input error!" << endl;
    } else if (delta > 0) { //有两个实数解
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "x1=" << fixed << setprecision(6) << x1 << ", x2=" << fixed << setprecision(6) << x2 << endl;
    } else if (delta == 0) { //有一个实数解
        x1 = -b / (2 * a);
        cout << "x1=x2=" << fixed << setprecision(6) << x1 << endl;
    } else { //有两个复数解
        double real = -b / (2 * a); //实部
        double imaginary = sqrt(-delta) / (2 * a); //虚部
        cout << "x1=" << fixed << setprecision(6) << real << "+" << imaginary << "i\n, x2=" << fixed << setprecision(6) << real << "-" << imaginary << "i\n" << endl;
    }

    return 0;
}
