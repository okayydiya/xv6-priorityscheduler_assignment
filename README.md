# xv6 Priority Scheduler – OS Assignment

This project extends the MIT xv6 Operating System by implementing **Non-Preemptive Priority Scheduling** along with two new system calls.  
It demonstrates process scheduling, system calls, and kernel modifications in a real educational OS.

---

## ✅ Features Implemented

### 1. **Priority Scheduling (Non-Preemptive)**
- Added a `priority` field to the Process Control Block (PCB)
- Modified xv6 scheduler to always choose the **highest-priority RUNNABLE** process
- Lower-priority processes wait until higher-priority ones yield, sleep, or exit

### 2. **Two New System Calls**
#### `setpriority(pid, priority)`
Updates the scheduling priority of any process.

#### `getpriority(pid)`
Returns the current priority of a given process.

Both syscalls required modifications to:
- `syscall.h`
- `syscall.c`
- `usys.S`
- `user.h`
- `defs.h`
- `proc.c`

### 3. **User Program: prioritytest.c**
A clean test program that:
- Forks a child process
- Gives child high priority (10)
- Gives parent low priority (3)
- Prints CPU execution pattern
- Demonstrates scheduler behavior clearly

---

## ✅ How to Build and Run xv6

Inside WSL terminal:

```bash
make clean
make
make qemu
