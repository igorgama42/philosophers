# THREADS

Process: A program under execution.
Thread : A basic unit of execution or a basic unit of CPU utilization.

Each program may have a number of processes associated with it.
Each process can have a number of threads executing in it.

What comprises of a thread:

- A thread id
- A program counter
- A register set
- A stack

It shares with other threads belonging to the same process its code section, data section, and other operating-system resources, such as open files and signals.

A traditional/heavyweight process has a single thread of control.
If a process has multiple threads of control, it can perform more than one task at a time.

BENEFITS:
The benefits of multithreaded programming can be broken down into four major categories:

Responsiveness -> Multithreading an interactive application may allow a program to continue running even if part of it is blocked or is performing a lenghty operation, thereby increasing responsiveness to the user.

Resource Sharing -> By default, threads share the memory and the resources of the process to which they belong. The benefit of sharing code and data is that it allows an application to have several different threads of activity within the same addres space.

Economy -> Allocating memory and resources for process creation is costly. Because threads share resources of the process to which they belong, it is more economical to create and context-switch threads.

Utilization of multiprocessor architectures -> The benefits of multithreading can be greatly increased in a multiprocessor architecture, where threads may be running in a parallel on different processors. A single-threaded process can only run on one CPU, no matter how many are available. Multithreading on a multi-CPU machine increases concurrency.
