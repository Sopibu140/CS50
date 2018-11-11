:#include <cs50.h>
#include <stdio.h>

int n
int main(void)
{
    do
    {
        printf("Enter antipositive number: ");
        n = get_int();
    }
    while (n < 0);

    printf("Great!");

}

