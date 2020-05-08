wait()
==================================
*Wait for a child process to exit*

If there are at least one child processes running when the call to wait() is made, 
the caller will be blocked until one of its child processes exits. 
At that moment, the caller resumes its execution.