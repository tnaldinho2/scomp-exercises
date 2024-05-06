#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/*
a) 4 processes        P0        
                    /    \  
                  S0     S1 
                  /  
                GS0  
b) For each process opened a "Computer Systems" string is printed to the terminal
*/


int main(void){
    pid_t p, a;
    p = fork ();
    if(p<0)
    {
      perror("'p' fork fail");
      exit(1);
    }
    a = fork ();
    if(a<0)
    {
      perror("'a' fork fail");
      exit(1);
    }
    printf ("Computer Systems (%d)\n", getpid());
    return 0;
}