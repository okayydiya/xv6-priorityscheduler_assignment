# xv6 Priority Scheduler (OS Assignment)

This project modifies MIT xv6 operating system to implement **Non-Preemptive Priority Scheduling**.

## Features Added
- Added `priority` field in process control block (proc.h)
- Modified scheduler to choose highest priority RUNNABLE process
- Added syscalls:
  - `setpriority(pid, priority)`
  - `getpriority(pid)`
- Added clean user test program: `prioritytest.c`

## Build & Run

