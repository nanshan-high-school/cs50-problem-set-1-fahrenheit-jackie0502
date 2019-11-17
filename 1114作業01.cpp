#include <iostream>
using namespace std;


int main() {
    float C;
    float F;

    cout << "請輸入要轉換的攝氏溫度:";
    cin >> C;
    F = ((C * 9) / 5) + 32;
    cout << "\n華氏溫度:" << F;
}
