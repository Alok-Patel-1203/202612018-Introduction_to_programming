#include <iostream>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    //  error: using <= 5 instead of < 5
    // for (int i = 0; i <= 5; i++) {
    //     sum += numbers[i];
    // }

    // ? SOLVED ERROR 
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}