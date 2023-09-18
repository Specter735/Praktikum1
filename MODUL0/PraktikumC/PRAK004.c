#include <stdio.h>
#include <string.h>

int main()
{
    char garis[34]; // Membuat array karakter dengan panjang 34 untuk mengakomodasi kalimat yang Anda inginkan
    // Mengisi array dengan karakter '#' secara manual
    memset(garis, '#', 34); // Mengisi 34 karakter pertama dengan '#'
    garis[34] = '\0'; // Menambahkan karakter null terminator untuk menandai akhir string
    char nama[] = "Abdurrahman Gilang Harjuna"; // Membuat string dengan nama Abdurrahman Gilang Harjuna
    char nim[] = "2310817110004";

    // Mencetak garis dan nama ke layar
    printf("%s\n\n", garis);
    printf("#%20s%13s\n\n", "", "#");
    printf("#%29s%4s\n\n", nama, "#");
    printf("#%23s%10s\n\n", nim, "#");
    printf("#%20s%13s\n\n", "", "#");
    printf("%s\n", garis);
    
    return 0;
}