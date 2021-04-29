#include <iostream>
using namespace std;
int main()
{   
    setlocale(LC_ALL, "rus");
    int sumka_1 = 11;
    int sumka_2 = 44;
    int summa_sumok = sumka_1 + sumka_2;
    cout << sumka_1 << " - В первой сумке" << endl;
    cout << sumka_2 << " - Во второй сумке" << endl;
    cout << summa_sumok << " - Общее количество яблок" << endl;
}
