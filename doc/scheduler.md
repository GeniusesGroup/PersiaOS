# Scheduler
Each app run in isolate resources.

## Thread
- Each app can get threads by request in the OS image manifest for each CPU cores, So thread is not as in old OS that can get in runtime by syscall! Each thread run in the same CPU core number.
