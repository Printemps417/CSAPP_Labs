//
// Created by runoob on 2024/4/10.
//

#include "ErrorHandle.h"
pid_t Fork(void){
    pid_t pid;
    if((pid = fork()) < 0)
        unix_error("Fork error");
    return pid;
}
void Sigprocmask(int how, const sigset_t *set, sigset_t *oldset){
    if(sigprocmask(how, set, oldset) < 0)
        unix_error("Sigprocmask error");
}
void Sigemptyset(sigset_t *set){
    if(sigemptyset(set) < 0)
        unix_error("Sigprocmask error");
}
void Sigfillset(sigset_t *set){
    if(sigfillset(set) < 0)
        unix_error("Sigfillset error");
}
void Sigaddset(sigset_t *set, int signum){
    if(sigaddset(set, signum) < 0)
        unix_error("Sigaddset error");
}
void Execve(const char *filename, char *const argv[], char *const envp[]){
    if(execve(filename, argv, envp) < 0){
        printf("%s: Command not found.\n", argv[0]);
    }
}
void Setpgid(pid_t pid, pid_t pgid){
    if(setpgid(pid, pgid) < 0){
        unix_error("Setpid error");
    }
}
void Kill(pid_t pid, int sig){
    if(kill(pid, sig) < 0){
        unix_error("Kill error");
    }
}