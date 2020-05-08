sleep(n)
==================================
*Sleep for n seconds*

When a process needs a resource in order to continue (such as disk, input or whatever), 
it must call sleep where it marks itself (proc->chan) as waiting for the wanted event, 
sets its state to SLEEPING, and returns to scheduler.