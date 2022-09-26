#include <iostream>
using namespace std;

class Calculator {
public:
    Calculator() {
        num1 = 0;
        num2 = 0;
    }
    bool set_num1( double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else
            return false;
    }
    bool set_num2( double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else
            return false;
    }
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num1 - num2;
    }
    double subtract_2_1() {
        return num2 - num1;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }

private:
    double num1;
    double num2;
};

void inputNum1(Calculator& calc) {
    bool result = false;
    int num1;
    do {
        cout << "Введите num1: ";
        cin >> num1;
        result = calc.set_num1(num1);
        if (!result) {
            cout << "Неверный ввод! " << endl;
        }
    } while (!result);
};
void inputNum2(Calculator& calc) {
    bool result = false;
    int num2;
    do {
        cout << "Введите num1: ";
        cin >> num2;
        result = calc.set_num2(num2);
        if (!result) {
            cout << "Неверный ввод! " << endl;
        }
    } while (!result);
};
void printResults(Calculator& calc) {
    cout << "num1 + num2 = " << calc.add() << endl;
    cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
    cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
    cout << "num1 * num2 = " << calc.multiply() << endl;
    cout << "num1 / num2 = " << calc.divide_1_2() << endl;
    cout << "num2 / num1 = " << calc.divide_2_1() << endl;
};

int main()
{
    setlocale(LC_ALL, "Russian");

    int num1, num2;
    Calculator calc;

    while (true){

        inputNum1(calc);
        inputNum2(calc);

        printResults(calc);
    }

    return 0;
}
