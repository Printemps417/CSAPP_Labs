//
// Created by runoob on 2024/4/10.
//

#ifndef CSAPP_LABS_ERRORHANDLE_H
#define CSAPP_LABS_ERRORHANDLE_H

#endif //CSAPP_LABS_ERRORHANDLE_H
pid_t Fork(void);
void Sigprocmask(int how, const sigset_t *set, sigset_t *oldset);
void Sigemptyset(sigset_t *set);
void Sigfillset(sigset_t *set);
void Sigaddset(sigset_t *set, int signum);
void Execve(const char *filename, char *const argv[], char *const envp[]);
void Setpgid(pid_t pid, pid_t pgid);
void Kill(pid_t pid, int sig);