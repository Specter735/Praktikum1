#include <stdio.h>

void greeting(char kode[]) {
    printf("Selamat %s, Abdurrahman Gilang Harjuna\n", kode);
}

int main() {
    greeting("Pagi");
    greeting("Siang");
    greeting("Malam");
    return 0;
}