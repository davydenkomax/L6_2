/*
    Дана матрица размера M × N (N — четное число). 
    Поменять местами левую и правую половины матрицы.
*/
#include <iostream>

using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    // Объявление переменных
    const size_t MAX_ROWS = 10;
    const size_t MAX_COLOMNS = 10;
    double matrix[MAX_ROWS][MAX_COLOMNS];
    int m, n;
    // Ввод значения переменной m
    cout << "Введите значение переменной m (0 < m <= 10): ";
    cin >> m;                                     
    // Ввод значения переменной n                                             
    cout << "Введите значение переменной n (0 < n <= 10 и n-четное): ";
    cin >> n;
    // Проверка на неправильный ввод размера матрицы
    if (m <= 0 || m > 10 || n % 2 != 0 || n <= 0 || n > 10) {
        cerr << "\nНеправильный ввод значений пременных";
        return 1;
    }
    // Ввод значений в матрицу
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    // Циклы по матрице
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n / 2; j++) {
            // Сохраняем значение matrix[i][j] в переменную el
            double el = matrix[i][j];
            // Присваиваем элементу matrix[i][j] значение зеркального элемента матрицы
            matrix[i][j] = matrix[i][j + n / 2];
            // Присваиваем зеркальному элементу первоначальное значение matrix[i][j], которое сохранили в переменную el
            matrix[i][j + n / 2] = el;
        }
    }
    // Вывод полученной матрицы
    cout << "Полученная матрица: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}