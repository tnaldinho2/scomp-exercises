#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/*
a) 2^4 processes 
b) 16 times, as all processes go through the printf
*/


int main(void){
    pid_t pid;
    int i;

    for(i = 0; i < 4; i++)
        pid = fork();

    printf ("Computer Systems\n");
    return 0;
}