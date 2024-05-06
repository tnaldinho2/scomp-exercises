#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/*
a) X processes 
b)
c)
d)
e)
f)
g)
h)
*/


int main(void){
    pid_t pid;
    int f;

    for(f = 0; f < 4; f++){
        pid = fork();
        if(pid > 0)
            printf("I am the father\n");
        else
            sleep(1);
    }   

    return 0;
}