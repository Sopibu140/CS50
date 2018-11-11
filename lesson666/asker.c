#include <cs50.h>
#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Rus");
    char e = get_char("Ваш вес: ");
    char a = get_char("Ваш возраст: ");
    int n = get_int("Ваше имя: ");

    printf("Ваш вес: %e/n");
    printf("Ваш возраст: %a/n");
    printf("Ваше имя: %n/n");

}
