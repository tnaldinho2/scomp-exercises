#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/*
a) X processes 
b) 
*/


int main ( void ){
    int a, b, c, d;

    a = 0;
    b = fork();
    c = getpid();
    d = getppid();
    a = a + 5;
    printf("\na=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
    return 0;
}