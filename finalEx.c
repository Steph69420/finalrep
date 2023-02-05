#include<stdio.h>
#include<stdlib.h>
int main(){
    int pid;
    int status;
    printf("Father pid is:%d,\n",getpid());

    for(int i=0;i<10;i++){
        pid=fork();
        if(pid==-1){
            perror("Error: ");
        }else if (pid==0){
            printf("My pid is: %d\n",getpid());
            return 0;
        }else {
            waitpid(-1,&status,0);
        }
    }
}
