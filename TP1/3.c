#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/*
a) X processes 
b) 
*/


int main(void){
    pid_t pid;
    int i;

    for(i = 0; i < 4; i++)
        pid = fork();

    printf ("Computer Systems\n");
    return 0;
}