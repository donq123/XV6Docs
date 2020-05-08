fork()
==================================
*Create process*

creates two process, parent and child

Upon successful completion, fork() returns a value of 0 to the child process and
returns the process ID of the child process to the parent process.  Otherwise, a
value of -1 is returned to the parent process, no child process is created, and
the global variable errno is set to indicate the error.

.. literalinclude:: examples\forkexample.c