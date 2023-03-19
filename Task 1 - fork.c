#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    int pid = fork();
    int child = 0;
    do{
    
    if(pid>0)
    {
        wait(NULL);
        printf("I am a parent with PID : %d\n", getpid());
    }
    else if (pid == 0)
    {   
        sleep(1);
        printf("\nI am a child with PID: %d\n", getpid());
        printf("My parent's PID: %d\n", getppid());
        child++;
    }
    else
    {
        printf("\nError while forking\n");
        return -1;
    }
    
    int pid = fork();
    }while(pid >=0);
     
}
