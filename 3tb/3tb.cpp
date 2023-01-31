//#include <iostream>
//using namespace std;
//
//int main()
//{
//    system("chcp 1251");
//    system("cls");
//    setlocale(LC_ALL, "Russian_Russian.1251");
//
//    int n;
//    int i;
//    int res;
//    string end = "End";
//
//    do
//    {
//        cout << "Введите чилсо" << "\n";
//        cin >> n;
//        if (n < 0) {
//            cout << "Вы ввели отрицательное число" << "";
//        }
//        if (n > 0) {
//            cout << "Вы ввели простое число";
//        }
//        res = 1;
//            for (i = 1; i <= n; i++) {
//                res = res * i;
//            }
//        cout << " ответ: " << res;
//    } while (cin >> end);
//
//}

#include <iostream>
#include <Windows.h>
#include <Stdlib.h>
using namespace std;
int main() {

    system("chcp 1251");
    system("cls");
    setlocale(LC_ALL, "Russian_Russian.1251");

    int popi = 0;
    string vod;

    while (true) {
        cout << "Введите чило или сразу 'End': ";
        cin >> vod;

        if (vod == "End") {
            cout << "Итог пограммы:" << endl;
            break;
        }
        else {
            int n = atoi(vod.c_str());

            if (n < 0) {
                cout << "Число отрицательное" << endl;
            }
            else {
                int factorial = 1;
                for (int i = 1; i <= n; i++) {
                    factorial *= i;
                }
                cout << "Факториал числа " << n << " - " << factorial << endl;

                bool prostoe = true;
                for (int i = 2; i <= sqrt(n); i++) {
                    if (n % i == 0) {
                        prostoe = false;
                        break;
                    }
                }

                if (prostoe) {
                    cout << n << " это простое число" << endl;
                    popi += n;
                }
            }
        }
    }
    cout << "Сумма простых чисел равна: " << popi << endl;
}