extern int numthreads;

int GetThreadWork(void);
void RunThreadsOn(int workcnt, bool showpacifier, void (*func)(int));
void ThreadLock(void);
void ThreadUnlock(void);