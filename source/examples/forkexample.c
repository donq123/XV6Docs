pid = fork(); /* call fork() from parent process*/
if (0 == pid)
{
    /* fork returned 0. This part will be executed by child process*/
    /*  getpid() will give child process id here */
}
else
{
    /* fork returned child pid which is non zero. This part will be executed by parent process*/
    /*  getpid() will give parent process id here */
} 