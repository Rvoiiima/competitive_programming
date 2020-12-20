#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int price, have = 1000;
    int num_coins = 0;
    int sum = 0;
    int coins[6]={500, 100, 50, 10, 5, 1};

    scanf("%d", &price);
    have -= price;

    for (int i=0; i<6; i++) {
        num_coins = have / coins[i];
        sum += num_coins;
        have -= num_coins * coins[i];
    }

    printf("%d\n", sum);
}
