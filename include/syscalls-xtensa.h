#pragma once

/*
 * derived from linux/arch/xtensa/include/uapi/asm/unistd.h
 */

#include "sanitise.h"
#include "syscall.h"
#include "syscalls/syscalls.h"

struct syscalltable syscalls_xtensa[] = {
/*   0 */	{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
/*   5 */	{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_open },
		{ .entry = &syscall_close },
/*  10 */	{ .entry = &syscall_dup },
		{ .entry = &syscall_dup2 },
		{ .entry = &syscall_read },
		{ .entry = &syscall_write },
		{ .entry = &syscall_select },
/*  15 */	{ .entry = &syscall_lseek },
		{ .entry = &syscall_poll },
		{ .entry = &syscall_llseek },
		{ .entry = &syscall_epoll_wait },
		{ .entry = &syscall_epoll_ctl },
/*  20 */	{ .entry = &syscall_epoll_create },
		{ .entry = &syscall_creat },
		{ .entry = &syscall_truncate },
		{ .entry = &syscall_ftruncate },
		{ .entry = &syscall_readv },
/*  25 */	{ .entry = &syscall_writev },
		{ .entry = &syscall_fsync },
		{ .entry = &syscall_fdatasync },
		{ .entry = &syscall_truncate64 },
		{ .entry = &syscall_ftruncate64 },
/*  30 */	{ .entry = &syscall_pread64 },
		{ .entry = &syscall_pwrite64 },
		{ .entry = &syscall_link },
		{ .entry = &syscall_rename },
		{ .entry = &syscall_symlink },
/*  35 */	{ .entry = &syscall_readlink },
		{ .entry = &syscall_mknod },
		{ .entry = &syscall_pipe },
		{ .entry = &syscall_unlink },
		{ .entry = &syscall_rmdir },
/*  40 */	{ .entry = &syscall_mkdir },
		{ .entry = &syscall_chdir },
		{ .entry = &syscall_fchdir },
		{ .entry = &syscall_getcwd },
		{ .entry = &syscall_chmod },
/*  45 */	{ .entry = &syscall_chown },
		{ .entry = &syscall_newstat },
		{ .entry = &syscall_stat64 },
		{ .entry = &syscall_lchown },
		{ .entry = &syscall_newlstat },
/*  50 */	{ .entry = &syscall_lstat64 },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_fchmod },
		{ .entry = &syscall_fchown },
		{ .entry = &syscall_newfstat },
/*  55 */	{ .entry = &syscall_fstat64 },
		{ .entry = &syscall_flock },
		{ .entry = &syscall_access },
		{ .entry = &syscall_umask },
		{ .entry = &syscall_getdents },
/*  60 */	{ .entry = &syscall_getdents64 },
		{ .entry = &syscall_ni_syscall /*syscall_fcntl64*/ },
		{ .entry = &syscall_fallocate },
		{ .entry = &syscall_ni_syscall /*xtensa_fadvise64_64*/ },
		{ .entry = &syscall_utime },
/*  65 */	{ .entry = &syscall_utimes },
		{ .entry = &syscall_ioctl },
		{ .entry = &syscall_fcntl },
		{ .entry = &syscall_setxattr },
		{ .entry = &syscall_getxattr },
/*  70 */	{ .entry = &syscall_listxattr },
		{ .entry = &syscall_removexattr },
		{ .entry = &syscall_lsetxattr },
		{ .entry = &syscall_lgetxattr },
		{ .entry = &syscall_llistxattr },
/*  75 */	{ .entry = &syscall_lremovexattr },
		{ .entry = &syscall_fsetxattr },
		{ .entry = &syscall_fgetxattr },
		{ .entry = &syscall_flistxattr },
		{ .entry = &syscall_fremovexattr },
/*  80 */	{ .entry = &syscall_ni_syscall /*syscall_mmap_pgoff*/ },
		{ .entry = &syscall_munmap },
		{ .entry = &syscall_mprotect },
		{ .entry = &syscall_brk },
		{ .entry = &syscall_mlock },
/*  85 */	{ .entry = &syscall_munlock },
		{ .entry = &syscall_mlockall },
		{ .entry = &syscall_munlockall },
		{ .entry = &syscall_mremap },
		{ .entry = &syscall_msync },
/*  90 */	{ .entry = &syscall_mincore },
		{ .entry = &syscall_madvise },
		{ .entry = &syscall_shmget },
		{ .entry = &syscall_ni_syscall /*xtensa_shmat*/ },
		{ .entry = &syscall_shmctl },
/*  95 */	{ .entry = &syscall_shmdt },
		{ .entry = &syscall_socket },
		{ .entry = &syscall_setsockopt },
		{ .entry = &syscall_getsockopt },
		{ .entry = &syscall_shutdown },
/* 100 */	{ .entry = &syscall_bind },
		{ .entry = &syscall_connect },
		{ .entry = &syscall_listen },
		{ .entry = &syscall_accept },
		{ .entry = &syscall_getsockname },
/* 105 */	{ .entry = &syscall_getpeername },
		{ .entry = &syscall_sendmsg },
		{ .entry = &syscall_recvmsg },
		{ .entry = &syscall_send },
		{ .entry = &syscall_recv },
/* 110 */	{ .entry = &syscall_sendto },
		{ .entry = &syscall_recvfrom },
		{ .entry = &syscall_socketpair },
		{ .entry = &syscall_sendfile },
		{ .entry = &syscall_sendfile64 },
/* 115 */	{ .entry = &syscall_sendmmsg },
		{ .entry = &syscall_clone },
		{ .entry = &syscall_execve },
		{ .entry = &syscall_exit },
		{ .entry = &syscall_exit_group },
/* 120 */	{ .entry = &syscall_getpid },
		{ .entry = &syscall_wait4 },
		{ .entry = &syscall_waitid },
		{ .entry = &syscall_kill },
		{ .entry = &syscall_tkill },
/* 125 */	{ .entry = &syscall_tgkill },
		{ .entry = &syscall_set_tid_address },
		{ .entry = &syscall_gettid },
		{ .entry = &syscall_setsid },
		{ .entry = &syscall_getsid },
/* 130 */	{ .entry = &syscall_prctl },
		{ .entry = &syscall_personality },
		{ .entry = &syscall_getpriority },
		{ .entry = &syscall_setpriority },
		{ .entry = &syscall_setitimer },
/* 135 */	{ .entry = &syscall_getitimer },
		{ .entry = &syscall_setuid },
		{ .entry = &syscall_getuid },
		{ .entry = &syscall_setgid },
		{ .entry = &syscall_getgid },
/* 140 */	{ .entry = &syscall_geteuid },
		{ .entry = &syscall_getegid },
		{ .entry = &syscall_setreuid },
		{ .entry = &syscall_setregid },
		{ .entry = &syscall_setresuid },
/* 145 */	{ .entry = &syscall_getresuid },
		{ .entry = &syscall_setresgid },
		{ .entry = &syscall_getresgid },
		{ .entry = &syscall_setpgid },
		{ .entry = &syscall_getpgid },
/* 150 */	{ .entry = &syscall_getppid },
		{ .entry = &syscall_getpgrp },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_times },
/* 155 */	{ .entry = &syscall_acct },
		{ .entry = &syscall_sched_setaffinity },
		{ .entry = &syscall_sched_getaffinity },
		{ .entry = &syscall_capget },
		{ .entry = &syscall_capset },
/* 160 */	{ .entry = &syscall_ptrace },
		{ .entry = &syscall_semtimedop },
		{ .entry = &syscall_semget },
		{ .entry = &syscall_semop },
		{ .entry = &syscall_semctl },
/* 165 */	{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_msgget },
		{ .entry = &syscall_msgsnd },
		{ .entry = &syscall_msgrcv },
		{ .entry = &syscall_msgctl },
/* 170 */	{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_umount },
		{ .entry = &syscall_mount },
		{ .entry = &syscall_swapon },
		{ .entry = &syscall_chroot },
/* 175 */	{ .entry = &syscall_pivot_root },
		{ .entry = &syscall_umount },
		{ .entry = &syscall_swapoff },
		{ .entry = &syscall_sync },
		{ .entry = &syscall_syncfs },
/* 180 */	{ .entry = &syscall_setfsuid },
		{ .entry = &syscall_setfsgid },
		{ .entry = &syscall_sysfs },
		{ .entry = &syscall_ustat },
		{ .entry = &syscall_statfs },
/* 185 */	{ .entry = &syscall_fstatfs },
		{ .entry = &syscall_statfs64 },
		{ .entry = &syscall_fstatfs64 },
		{ .entry = &syscall_setrlimit },
		{ .entry = &syscall_getrlimit },
/* 190 */	{ .entry = &syscall_getrusage },
		{ .entry = &syscall_futex },
		{ .entry = &syscall_gettimeofday },
		{ .entry = &syscall_settimeofday },
		{ .entry = &syscall_adjtimex },
/* 195 */	{ .entry = &syscall_nanosleep },
		{ .entry = &syscall_getgroups },
		{ .entry = &syscall_setgroups },
		{ .entry = &syscall_sethostname },
		{ .entry = &syscall_setdomainname },
/* 200 */	{ .entry = &syscall_syslog },
		{ .entry = &syscall_vhangup },
		{ .entry = &syscall_uselib },
		{ .entry = &syscall_reboot },
		{ .entry = &syscall_quotactl },
/* 205 */	{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_sysctl },
		{ .entry = &syscall_bdflush },
		{ .entry = &syscall_newuname },
		{ .entry = &syscall_sysinfo },
/* 210 */	{ .entry = &syscall_init_module },
		{ .entry = &syscall_delete_module },
		{ .entry = &syscall_sched_setparam },
		{ .entry = &syscall_sched_getparam },
		{ .entry = &syscall_sched_setscheduler },
/* 215 */	{ .entry = &syscall_sched_getscheduler },
		{ .entry = &syscall_sched_get_priority_max },
		{ .entry = &syscall_sched_get_priority_min },
		{ .entry = &syscall_sched_rr_get_interval },
		{ .entry = &syscall_sched_yield },
/* 220 */	{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_restart_syscall },
		{ .entry = &syscall_sigaltstack },
/* 225 */	{ .entry = &syscall_ni_syscall /*xtensa_rt_sigreturn*/ },
		{ .entry = &syscall_rt_sigaction },
		{ .entry = &syscall_rt_sigprocmask },
		{ .entry = &syscall_rt_sigpending },
		{ .entry = &syscall_rt_sigtimedwait },
/* 230 */	{ .entry = &syscall_rt_sigqueueinfo },
		{ .entry = &syscall_rt_sigsuspend },
		{ .entry = &syscall_mq_open },
		{ .entry = &syscall_mq_unlink },
		{ .entry = &syscall_mq_timedsend },
/* 235 */	{ .entry = &syscall_mq_timedreceive },
		{ .entry = &syscall_mq_notify },
		{ .entry = &syscall_mq_getsetattr },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_io_setup },
/* 240 */	{ .entry = &syscall_io_destroy },
		{ .entry = &syscall_io_submit },
		{ .entry = &syscall_io_getevents },
		{ .entry = &syscall_io_cancel },
		{ .entry = &syscall_clock_settime },
/* 245 */	{ .entry = &syscall_clock_gettime },
		{ .entry = &syscall_clock_getres },
		{ .entry = &syscall_clock_nanosleep },
		{ .entry = &syscall_timer_create },
		{ .entry = &syscall_timer_delete },
/* 250 */	{ .entry = &syscall_timer_settime },
		{ .entry = &syscall_timer_gettime },
		{ .entry = &syscall_timer_getoverrun },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_lookup_dcookie },
/* 255 */	{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_add_key },
		{ .entry = &syscall_request_key },
		{ .entry = &syscall_keyctl },
		{ .entry = &syscall_ni_syscall },
/* 260 */	{ .entry = &syscall_readahead },
		{ .entry = &syscall_remap_file_pages },
		{ .entry = &syscall_migrate_pages },
		{ .entry = &syscall_mbind },
		{ .entry = &syscall_get_mempolicy },
/* 265 */	{ .entry = &syscall_set_mempolicy },
		{ .entry = &syscall_unshare },
		{ .entry = &syscall_move_pages },
		{ .entry = &syscall_splice },
		{ .entry = &syscall_tee },
/* 270 */	{ .entry = &syscall_vmsplice },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_pselect6 },
		{ .entry = &syscall_ppoll },
		{ .entry = &syscall_epoll_pwait },
/* 275 */	{ .entry = &syscall_epoll_create1 },
		{ .entry = &syscall_inotify_init },
		{ .entry = &syscall_inotify_add_watch },
		{ .entry = &syscall_inotify_rm_watch },
		{ .entry = &syscall_inotify_init1 },
/* 280 */	{ .entry = &syscall_getcpu },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ioprio_set },
		{ .entry = &syscall_ioprio_get },
		{ .entry = &syscall_set_robust_list },
/* 285 */	{ .entry = &syscall_get_robust_list },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_openat },
		{ .entry = &syscall_mkdirat },
/* 290 */	{ .entry = &syscall_mknodat },
		{ .entry = &syscall_unlinkat },
		{ .entry = &syscall_renameat },
		{ .entry = &syscall_linkat },
		{ .entry = &syscall_symlinkat },
/* 295 */	{ .entry = &syscall_readlinkat },
		{ .entry = &syscall_utimensat },
		{ .entry = &syscall_fchownat },
		{ .entry = &syscall_futimesat },
		{ .entry = &syscall_fstatat64 },
/* 300 */	{ .entry = &syscall_fchmodat },
		{ .entry = &syscall_faccessat },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_signalfd },
/* 305 */	{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_eventfd },
		{ .entry = &syscall_recvmmsg },
		{ .entry = &syscall_setns },
		{ .entry = &syscall_signalfd4 },
/* 310 */	{ .entry = &syscall_dup3 },
		{ .entry = &syscall_pipe2 },
		{ .entry = &syscall_timerfd_create },
		{ .entry = &syscall_timerfd_settime },
		{ .entry = &syscall_timerfd_gettime },
/* 315 */	{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_eventfd2 },
		{ .entry = &syscall_preadv },
		{ .entry = &syscall_pwritev },
		{ .entry = &syscall_ni_syscall },
/* 320 */	{ .entry = &syscall_fanotify_init },
		{ .entry = &syscall_fanotify_mark },
		{ .entry = &syscall_process_vm_readv },
		{ .entry = &syscall_process_vm_writev },
		{ .entry = &syscall_name_to_handle_at },
/* 325 */	{ .entry = &syscall_open_by_handle_at },
		{ .entry = &syscall_sync_file_range2 },
		{ .entry = &syscall_perf_event_open },
		{ .entry = &syscall_rt_tgsigqueueinfo },
		{ .entry = &syscall_clock_adjtime },
/* 330 */	{ .entry = &syscall_prlimit64 },
		{ .entry = &syscall_kcmp },
		{ .entry = &syscall_finit_module },
		{ .entry = &syscall_accept4 },
		{ .entry = &syscall_sched_setattr },
/* 335 */	{ .entry = &syscall_sched_getattr },
};
