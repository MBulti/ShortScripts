#include <stdio.h>

int fibonacci(int n)
{
    if(n >= 3)
        return fibonacci(n-1) + fibonacci(n -2);
    else
        return 1;
}

int main(int argc, char const *argv[])
{
    printf("hello world\r\n");
    printf("%d", fibonacci(4));

    return 0;
}
