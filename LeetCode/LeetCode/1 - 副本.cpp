#include <iostream>
#include <map>
using namespace std;

// 不均匀硬币
int coin() {
    return (rand() % 10) > 4;
}
// 新产生的均匀概率
int coin_new() {
    while (true) {
        int a = coin();
        if (coin() != a) return a;
    }
}

// 测试
int main() {
    int N = 1000000;
    float count[2] = {0, 0};
    for (int i = 0; i < N; i++)
        count[coin_new()] ++;
    cout << "0: " << count[0]/N << endl;
    cout << "1: " << count[1]/N << endl;
}