#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int i = 1;

    while (i <= 10)
    {
        cout << i * 5 << endl;
        i++;
    }
    cout << endl;
    i = 0;

    do
    {
        cout << "Введите число: " << endl;
        cin >> i;
        cout << endl;
        cout << "Больше или меньше 7: " << (i > 7 ? "Больше" : i < 7 ? "Меньше" : "Равно") << endl;
        cout << "Больше или меньше 10: " << (i > 10 ? "Больше" : i < 10 ? "Меньше" : "Равно") << endl;
        cout << "Делится на 2: " << (i % 2 == 0 ? "Да" : "Нет") << endl;
        cout << "Делится на 3: " << (i % 3 == 0 ? "Да" : "Нет") << endl << endl;
    } while (i != 7);
}