#include <iostream>
using namespace std;

class Calculator {
public:
    Calculator() {
        m_num1 = 0;
        m_num2 = 0;
    }
    bool set_num1( double m_num1) {
        if (m_num1 != 0) {
            this->m_num1 = m_num1;
            return true;
        }
        else
            return false;
    }
    bool set_num2( double m_num2) {
        if (m_num2 != 0) {
            this->m_num2 = m_num2;
            return true;
        }
        else
            return false;
    }
    double add() {
        return m_num1 + m_num2;
    }
    double multiply() {
        return m_num1 * m_num2;
    }
    double subtract_1_2() {
        return m_num1 - m_num2;
    }
    double subtract_2_1() {
        return m_num2 - m_num1;
    }
    double divide_1_2() {
        return m_num1 / m_num2;
    }
    double divide_2_1() {
        return m_num2 / m_num1;
    }

private:
    double m_num1;
    double m_num2;
};

void inputNum1(Calculator& calc) {
    bool result = false;
    int m_num1;
    do {
        cout << "Введите num1: ";
        cin >> m_num1;
        result = calc.set_num1(m_num1);
        if (!result) {
            cout << "Неверный ввод! " << endl;
        }
    } while (!result);
};
void inputNum2(Calculator& calc) {
    bool result = false;
    int m_num2;
    do {
        cout << "Введите num1: ";
        cin >> m_num2;
        result = calc.set_num2(m_num2);
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

    int m_num1, m_num2;
    Calculator calc;

    while (true){

        inputNum1(calc);
        inputNum2(calc);

        printResults(calc);
    }

    return 0;
}
