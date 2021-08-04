#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int recurs(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else if (n > 1) {
        return recurs(n - 1) + recurs(n - 2);
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    system_clock::time_point start = system_clock::now();
    int n = 0;
    cin >> n;
    int arr[1000];
    cout << recurs(n - 1) << endl;
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        arr[0] = arr[1] = 1;
        for (int i = 2; i < n; i++) {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    }
    cout << arr[n - 1] << endl;
    system_clock::time_point end = system_clock::now();
    duration<double> dur = end - start;

    cout << "Время работы программы: " << dur.count();;

    return 0;
}
