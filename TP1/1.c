#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/*
a) 4 processes 
b) 
c)
*/


int main(void){
    pid_t p, a;
    p = fork ();
    a = fork ();
    printf ("Computer Systems\n");
    return 0;
}