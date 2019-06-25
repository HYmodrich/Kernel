#include <linux/linkage.h>
#include <linux/kernel.h>

extern int lwj_commit_time;
extern int lwj_schedule_time;

asmlinkage long sys_lwj_delayed_commit(int time)
{
        int temp_time = lwj_commit_time;
        lwj_commit_time = time;
        printk("[lwj delayed commit] delayed_commit:%d->%dus & schedule_gap:%d->%dus\n", temp_time, lwj_commit_time,temp_time, lwj_schedule_time);
        return 1;
}


asmlinkage long sys_lwj_schedule_gap(int time)
{
        int temp_time = lwj_schedule_time;
        lwj_schedule_time = time;
        printk("[lwj delayed commit] delayed_commit:%d->%dus & schedule_gap:%d->%dus\n", temp_time, lwj_commit_time,temp_time, lwj_schedule_time);
        return 1;
}

