#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/* 부모 프로세스가 자식 프로세스를 생성하고 서로 다른 메시지를 프린트 */
int main() 
{
int pid;
pid = fork();
/*자식 프로세스*/
if (pid ==0) { 
printf("[Child] : Hello, world pid=%d ppid=%d\n", getpid(),getppid());
}
/*부모 프로세스*/
else {
printf("[Parent] : Hello, world pid=%d ppid=%d\n", getpid(),getppid());
}
}
