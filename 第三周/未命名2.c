#include <iostream>
#include <cmath>
#include <iomanip> //���ڿ����������
using namespace std;

int main() {
    int a, b, c;
    double x1, x2;
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c; //�����б�ʽ
    if (a == 0) { //aΪ0�����̲�����
        cout << "Input error!" << endl;
    } else if (delta > 0) { //������ʵ����
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "x1=" << fixed << setprecision(6) << x1 << ", x2=" << fixed << setprecision(6) << x2 << endl;
    } else if (delta == 0) { //��һ��ʵ����
        x1 = -b / (2 * a);
        cout << "x1=x2=" << fixed << setprecision(6) << x1 << endl;
    } else { //������������
        double real = -b / (2 * a); //ʵ��
        double imaginary = sqrt(-delta) / (2 * a); //�鲿
        cout << "x1=" << fixed << setprecision(6) << real << "+" << imaginary << "i\n, x2=" << fixed << setprecision(6) << real << "-" << imaginary << "i\n" << endl;
    }

    return 0;
}
