/*
 * System call numbers.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD$
 * created from FreeBSD: projects/arm_eabi/sys/compat/arm/syscalls.master 211797 2010-08-25 07:30:33Z andrew 
 */

#define	FREEBSD_OABI_SYS_syscall	0
#define	FREEBSD_OABI_SYS_exit	1
#define	FREEBSD_OABI_SYS_fork	2
#define	FREEBSD_OABI_SYS_read	3
#define	FREEBSD_OABI_SYS_write	4
#define	FREEBSD_OABI_SYS_open	5
#define	FREEBSD_OABI_SYS_close	6
#define	FREEBSD_OABI_SYS_freebsd_oabi_wait4	7
				/* 8 is obsolete old creat */
#define	FREEBSD_OABI_SYS_link	9
#define	FREEBSD_OABI_SYS_unlink	10
				/* 11 is obsolete execv */
#define	FREEBSD_OABI_SYS_chdir	12
#define	FREEBSD_OABI_SYS_fchdir	13
#define	FREEBSD_OABI_SYS_mknod	14
#define	FREEBSD_OABI_SYS_chmod	15
#define	FREEBSD_OABI_SYS_chown	16
#define	FREEBSD_OABI_SYS_break	17
#define	FREEBSD_OABI_SYS_freebsd4_getfsstat	18
				/* 19 is obsolete olseek */
#define	FREEBSD_OABI_SYS_getpid	20
#define	FREEBSD_OABI_SYS_mount	21
#define	FREEBSD_OABI_SYS_unmount	22
#define	FREEBSD_OABI_SYS_setuid	23
#define	FREEBSD_OABI_SYS_getuid	24
#define	FREEBSD_OABI_SYS_geteuid	25
#define	FREEBSD_OABI_SYS_ptrace	26
#define	FREEBSD_OABI_SYS_recvmsg	27
#define	FREEBSD_OABI_SYS_sendmsg	28
#define	FREEBSD_OABI_SYS_recvfrom	29
#define	FREEBSD_OABI_SYS_accept	30
#define	FREEBSD_OABI_SYS_getpeername	31
#define	FREEBSD_OABI_SYS_getsockname	32
#define	FREEBSD_OABI_SYS_access	33
#define	FREEBSD_OABI_SYS_chflags	34
#define	FREEBSD_OABI_SYS_fchflags	35
#define	FREEBSD_OABI_SYS_sync	36
#define	FREEBSD_OABI_SYS_kill	37
#define	FREEBSD_OABI_SYS_getppid	39
#define	FREEBSD_OABI_SYS_dup	41
#define	FREEBSD_OABI_SYS_pipe	42
#define	FREEBSD_OABI_SYS_getegid	43
#define	FREEBSD_OABI_SYS_profil	44
#define	FREEBSD_OABI_SYS_ktrace	45
				/* 46 is old sigaction */
#define	FREEBSD_OABI_SYS_getgid	47
				/* 48 is old freebsd_oabi_sigprocmask */
#define	FREEBSD_OABI_SYS_getlogin	49
#define	FREEBSD_OABI_SYS_setlogin	50
#define	FREEBSD_OABI_SYS_acct	51
#define	FREEBSD_OABI_SYS_sigpending	52
#define	FREEBSD_OABI_SYS_sigaltstack	53
#define	FREEBSD_OABI_SYS_ioctl	54
#define	FREEBSD_OABI_SYS_reboot	55
#define	FREEBSD_OABI_SYS_revoke	56
#define	FREEBSD_OABI_SYS_symlink	57
#define	FREEBSD_OABI_SYS_readlink	58
#define	FREEBSD_OABI_SYS_execve	59
#define	FREEBSD_OABI_SYS_umask	60
#define	FREEBSD_OABI_SYS_chroot	61
				/* 62 is obsolete ofstat */
				/* 63 is obsolete ogetkerninfo */
				/* 64 is obsolete ogetpagesize */
#define	FREEBSD_OABI_SYS_msync	65
#define	FREEBSD_OABI_SYS_vfork	66
				/* 67 is obsolete vread */
				/* 68 is obsolete vwrite */
#define	FREEBSD_OABI_SYS_sbrk	69
#define	FREEBSD_OABI_SYS_sstk	70
				/* 71 is obsolete ommap */
#define	FREEBSD_OABI_SYS_vadvise	72
#define	FREEBSD_OABI_SYS_munmap	73
#define	FREEBSD_OABI_SYS_mprotect	74
#define	FREEBSD_OABI_SYS_madvise	75
				/* 76 is obsolete vhangup */
				/* 77 is obsolete vlimit */
#define	FREEBSD_OABI_SYS_mincore	78
#define	FREEBSD_OABI_SYS_getgroups	79
#define	FREEBSD_OABI_SYS_setgroups	80
#define	FREEBSD_OABI_SYS_getpgrp	81
#define	FREEBSD_OABI_SYS_setpgid	82
#define	FREEBSD_OABI_SYS_freebsd_oabi_setitimer	83
				/* 84 is obsolete owait */
#define	FREEBSD_OABI_SYS_swapon	85
#define	FREEBSD_OABI_SYS_freebsd_oabi_getitimer	86
				/* 87 is obsolete ogethostname */
				/* 88 is obsolete osethostname */
#define	FREEBSD_OABI_SYS_getdtablesize	89
#define	FREEBSD_OABI_SYS_dup2	90
#define	FREEBSD_OABI_SYS_fcntl	92
#define	FREEBSD_OABI_SYS_freebsd_oabi_select	93
#define	FREEBSD_OABI_SYS_fsync	95
#define	FREEBSD_OABI_SYS_setpriority	96
#define	FREEBSD_OABI_SYS_socket	97
#define	FREEBSD_OABI_SYS_connect	98
				/* 99 is obsolete oaccept */
#define	FREEBSD_OABI_SYS_getpriority	100
				/* 101 is obsolete osend */
				/* 102 is obsolete orecv */
				/* 103 is obsolete osigreturn */
#define	FREEBSD_OABI_SYS_bind	104
#define	FREEBSD_OABI_SYS_setsockopt	105
#define	FREEBSD_OABI_SYS_listen	106
				/* 107 is obsolete vtimes */
				/* 108 is old freebsd_oabi_sigvec */
				/* 109 is old freebsd_oabi_sigblock */
				/* 110 is old freebsd_oabi_sigsetmask */
				/* 111 is old freebsd_oabi_sigsuspend */
				/* 112 is old freebsd_oabi_sigstack */
				/* 113 is obsolete orecvmsg */
				/* 114 is obsolete osendmsg */
				/* 115 is obsolete vtrace */
#define	FREEBSD_OABI_SYS_freebsd_oabi_gettimeofday	116
#define	FREEBSD_OABI_SYS_freebsd_oabi_getrusage	117
#define	FREEBSD_OABI_SYS_getsockopt	118
#define	FREEBSD_OABI_SYS_readv	120
#define	FREEBSD_OABI_SYS_writev	121
#define	FREEBSD_OABI_SYS_freebsd_oabi_settimeofday	122
#define	FREEBSD_OABI_SYS_fchown	123
#define	FREEBSD_OABI_SYS_fchmod	124
				/* 125 is obsolete orecvfrom */
#define	FREEBSD_OABI_SYS_setreuid	126
#define	FREEBSD_OABI_SYS_setregid	127
#define	FREEBSD_OABI_SYS_rename	128
				/* 129 is obsolete otruncate */
				/* 130 is obsolete ftruncate */
#define	FREEBSD_OABI_SYS_flock	131
#define	FREEBSD_OABI_SYS_mkfifo	132
#define	FREEBSD_OABI_SYS_sendto	133
#define	FREEBSD_OABI_SYS_shutdown	134
#define	FREEBSD_OABI_SYS_socketpair	135
#define	FREEBSD_OABI_SYS_mkdir	136
#define	FREEBSD_OABI_SYS_rmdir	137
#define	FREEBSD_OABI_SYS_freebsd_oabi_utimes	138
				/* 139 is obsolete 4.2 sigreturn */
#define	FREEBSD_OABI_SYS_freebsd_oabi_adjtime	140
				/* 141 is obsolete ogetpeername */
				/* 142 is obsolete ogethostid */
				/* 143 is obsolete sethostid */
				/* 144 is obsolete getrlimit */
				/* 145 is obsolete setrlimit */
				/* 146 is obsolete killpg */
#define	FREEBSD_OABI_SYS_setsid	147
#define	FREEBSD_OABI_SYS_quotactl	148
				/* 149 is obsolete oquota */
				/* 150 is obsolete ogetsockname */
				/* 156 is obsolete ogetdirentries */
#define	FREEBSD_OABI_SYS_freebsd4_statfs	157
#define	FREEBSD_OABI_SYS_freebsd4_fstatfs	158
#define	FREEBSD_OABI_SYS_getfh	161
				/* 162 is obsolete getdomainname */
				/* 163 is obsolete setdomainname */
				/* 164 is obsolete uname */
#define	FREEBSD_OABI_SYS_sysarch	165
#define	FREEBSD_OABI_SYS_rtprio	166
#define	FREEBSD_OABI_SYS_freebsd_oabi_semsys	169
#define	FREEBSD_OABI_SYS_freebsd_oabi_msgsys	170
#define	FREEBSD_OABI_SYS_freebsd_oabi_shmsys	171
#define	FREEBSD_OABI_SYS_freebsd6_freebsd6_pread	173
#define	FREEBSD_OABI_SYS_freebsd6_freebsd6_pwrite	174
#define	FREEBSD_OABI_SYS_ntp_adjtime	176
#define	FREEBSD_OABI_SYS_setgid	181
#define	FREEBSD_OABI_SYS_setegid	182
#define	FREEBSD_OABI_SYS_seteuid	183
#define	FREEBSD_OABI_SYS_freebsd_oabi_stat	188
#define	FREEBSD_OABI_SYS_freebsd_oabi_fstat	189
#define	FREEBSD_OABI_SYS_freebsd_oabi_lstat	190
#define	FREEBSD_OABI_SYS_pathconf	191
#define	FREEBSD_OABI_SYS_fpathconf	192
#define	FREEBSD_OABI_SYS_getrlimit	194
#define	FREEBSD_OABI_SYS_setrlimit	195
#define	FREEBSD_OABI_SYS_getdirentries	196
#define	FREEBSD_OABI_SYS_freebsd6_freebsd6_mmap	197
#define	FREEBSD_OABI_SYS___syscall	198
#define	FREEBSD_OABI_SYS_freebsd6_freebsd6_lseek	199
#define	FREEBSD_OABI_SYS_freebsd6_freebsd6_truncate	200
#define	FREEBSD_OABI_SYS_freebsd6_freebsd6_ftruncate	201
#define	FREEBSD_OABI_SYS___sysctl	202
#define	FREEBSD_OABI_SYS_mlock	203
#define	FREEBSD_OABI_SYS_munlock	204
#define	FREEBSD_OABI_SYS_undelete	205
#define	FREEBSD_OABI_SYS_freebsd_oabi_futimes	206
#define	FREEBSD_OABI_SYS_getpgid	207
#define	FREEBSD_OABI_SYS_poll	209
#define	FREEBSD_OABI_SYS_freebsd7___semctl	220
#define	FREEBSD_OABI_SYS_semget	221
#define	FREEBSD_OABI_SYS_semop	222
#define	FREEBSD_OABI_SYS_freebsd7_freebsd_oabi_msgctl	224
#define	FREEBSD_OABI_SYS_msgget	225
#define	FREEBSD_OABI_SYS_freebsd_oabi_msgsnd	226
#define	FREEBSD_OABI_SYS_freebsd_oabi_msgrcv	227
#define	FREEBSD_OABI_SYS_shmat	228
#define	FREEBSD_OABI_SYS_freebsd7_freebsd_oabi_shmctl	229
#define	FREEBSD_OABI_SYS_shmdt	230
#define	FREEBSD_OABI_SYS_shmget	231
#define	FREEBSD_OABI_SYS_freebsd_oabi_clock_gettime	232
#define	FREEBSD_OABI_SYS_freebsd_oabi_clock_settime	233
#define	FREEBSD_OABI_SYS_freebsd_oabi_clock_getres	234
#define	FREEBSD_OABI_SYS_freebsd_oabi_nanosleep	240
#define	FREEBSD_OABI_SYS_minherit	250
#define	FREEBSD_OABI_SYS_rfork	251
#define	FREEBSD_OABI_SYS_openbsd_poll	252
#define	FREEBSD_OABI_SYS_issetugid	253
#define	FREEBSD_OABI_SYS_lchown	254
#define	FREEBSD_OABI_SYS_freebsd_oabi_aio_read	255
#define	FREEBSD_OABI_SYS_freebsd_oabi_aio_write	256
#define	FREEBSD_OABI_SYS_freebsd_oabi_lio_listio	257
#define	FREEBSD_OABI_SYS_getdents	272
#define	FREEBSD_OABI_SYS_lchmod	274
#define	FREEBSD_OABI_SYS_netbsd_lchown	275
#define	FREEBSD_OABI_SYS_freebsd_oabi_lutimes	276
#define	FREEBSD_OABI_SYS_netbsd_msync	277
#define	FREEBSD_OABI_SYS_nstat	278
#define	FREEBSD_OABI_SYS_nfstat	279
#define	FREEBSD_OABI_SYS_nlstat	280
#define	FREEBSD_OABI_SYS_freebsd_oabi_preadv	289
#define	FREEBSD_OABI_SYS_freebsd_oabi_pwritev	290
#define	FREEBSD_OABI_SYS_freebsd4_fhstatfs	297
#define	FREEBSD_OABI_SYS_fhopen	298
#define	FREEBSD_OABI_SYS_fhstat	299
#define	FREEBSD_OABI_SYS_modnext	300
#define	FREEBSD_OABI_SYS_modstat	301
#define	FREEBSD_OABI_SYS_modfnext	302
#define	FREEBSD_OABI_SYS_modfind	303
#define	FREEBSD_OABI_SYS_kldload	304
#define	FREEBSD_OABI_SYS_kldunload	305
#define	FREEBSD_OABI_SYS_kldfind	306
#define	FREEBSD_OABI_SYS_kldnext	307
#define	FREEBSD_OABI_SYS_kldstat	308
#define	FREEBSD_OABI_SYS_kldfirstmod	309
#define	FREEBSD_OABI_SYS_getsid	310
#define	FREEBSD_OABI_SYS_setresuid	311
#define	FREEBSD_OABI_SYS_setresgid	312
				/* 313 is obsolete signanosleep */
#define	FREEBSD_OABI_SYS_freebsd_oabi_aio_return	314
#define	FREEBSD_OABI_SYS_freebsd_oabi_aio_suspend	315
#define	FREEBSD_OABI_SYS_freebsd_oabi_aio_cancel	316
#define	FREEBSD_OABI_SYS_freebsd_oabi_aio_error	317
#define	FREEBSD_OABI_SYS_freebsd_oabi_oaio_read	318
#define	FREEBSD_OABI_SYS_freebsd_oabi_oaio_write	319
#define	FREEBSD_OABI_SYS_freebsd_oabi_olio_listio	320
#define	FREEBSD_OABI_SYS_yield	321
				/* 322 is obsolete thr_sleep */
				/* 323 is obsolete thr_wakeup */
#define	FREEBSD_OABI_SYS_mlockall	324
#define	FREEBSD_OABI_SYS_munlockall	325
#define	FREEBSD_OABI_SYS___getcwd	326
#define	FREEBSD_OABI_SYS_sched_setparam	327
#define	FREEBSD_OABI_SYS_sched_getparam	328
#define	FREEBSD_OABI_SYS_sched_setscheduler	329
#define	FREEBSD_OABI_SYS_sched_getscheduler	330
#define	FREEBSD_OABI_SYS_sched_yield	331
#define	FREEBSD_OABI_SYS_sched_get_priority_max	332
#define	FREEBSD_OABI_SYS_sched_get_priority_min	333
#define	FREEBSD_OABI_SYS_freebsd_oabi_sched_rr_get_interval	334
#define	FREEBSD_OABI_SYS_utrace	335
#define	FREEBSD_OABI_SYS_freebsd4_sendfile	336
#define	FREEBSD_OABI_SYS_kldsym	337
#define	FREEBSD_OABI_SYS_jail	338
#define	FREEBSD_OABI_SYS_sigprocmask	340
#define	FREEBSD_OABI_SYS_sigsuspend	341
#define	FREEBSD_OABI_SYS_freebsd4_sigaction	342
#define	FREEBSD_OABI_SYS_sigpending	343
#define	FREEBSD_OABI_SYS_freebsd4_freebsd_oabi_sigreturn	344
#define	FREEBSD_OABI_SYS_freebsd_oabi_sigtimedwait	345
#define	FREEBSD_OABI_SYS_sigwaitinfo	346
#define	FREEBSD_OABI_SYS___acl_get_file	347
#define	FREEBSD_OABI_SYS___acl_set_file	348
#define	FREEBSD_OABI_SYS___acl_get_fd	349
#define	FREEBSD_OABI_SYS___acl_set_fd	350
#define	FREEBSD_OABI_SYS___acl_delete_file	351
#define	FREEBSD_OABI_SYS___acl_delete_fd	352
#define	FREEBSD_OABI_SYS___acl_aclcheck_file	353
#define	FREEBSD_OABI_SYS___acl_aclcheck_fd	354
#define	FREEBSD_OABI_SYS_extattrctl	355
#define	FREEBSD_OABI_SYS_extattr_set_file	356
#define	FREEBSD_OABI_SYS_extattr_get_file	357
#define	FREEBSD_OABI_SYS_extattr_delete_file	358
#define	FREEBSD_OABI_SYS_freebsd_oabi_aio_waitcomplete	359
#define	FREEBSD_OABI_SYS_getresuid	360
#define	FREEBSD_OABI_SYS_getresgid	361
#define	FREEBSD_OABI_SYS_kqueue	362
#define	FREEBSD_OABI_SYS_freebsd_oabi_kevent	363
#define	FREEBSD_OABI_SYS_extattr_set_fd	371
#define	FREEBSD_OABI_SYS_extattr_get_fd	372
#define	FREEBSD_OABI_SYS_extattr_delete_fd	373
#define	FREEBSD_OABI_SYS___setugid	374
#define	FREEBSD_OABI_SYS_eaccess	376
#define	FREEBSD_OABI_SYS_nmount	378
#define	FREEBSD_OABI_SYS_kenv	390
#define	FREEBSD_OABI_SYS_lchflags	391
#define	FREEBSD_OABI_SYS_uuidgen	392
#define	FREEBSD_OABI_SYS_sendfile	393
#define	FREEBSD_OABI_SYS_getfsstat	395
#define	FREEBSD_OABI_SYS_statfs	396
#define	FREEBSD_OABI_SYS_fstatfs	397
#define	FREEBSD_OABI_SYS_fhstatfs	398
#define	FREEBSD_OABI_SYS_ksem_close	400
#define	FREEBSD_OABI_SYS_ksem_post	401
#define	FREEBSD_OABI_SYS_ksem_wait	402
#define	FREEBSD_OABI_SYS_ksem_trywait	403
#define	FREEBSD_OABI_SYS_freebsd_oabi_ksem_init	404
#define	FREEBSD_OABI_SYS_freebsd_oabi_ksem_open	405
#define	FREEBSD_OABI_SYS_ksem_unlink	406
#define	FREEBSD_OABI_SYS_ksem_getvalue	407
#define	FREEBSD_OABI_SYS_ksem_destroy	408
#define	FREEBSD_OABI_SYS_extattr_set_link	412
#define	FREEBSD_OABI_SYS_extattr_get_link	413
#define	FREEBSD_OABI_SYS_extattr_delete_link	414
#define	FREEBSD_OABI_SYS_sigaction	416
#define	FREEBSD_OABI_SYS_sigreturn	417
#define	FREEBSD_OABI_SYS_getcontext	421
#define	FREEBSD_OABI_SYS_setcontext	422
#define	FREEBSD_OABI_SYS_swapcontext	423
#define	FREEBSD_OABI_SYS___acl_get_link	425
#define	FREEBSD_OABI_SYS___acl_set_link	426
#define	FREEBSD_OABI_SYS___acl_delete_link	427
#define	FREEBSD_OABI_SYS___acl_aclcheck_link	428
#define	FREEBSD_OABI_SYS_sigwait	429
#define	FREEBSD_OABI_SYS_thr_exit	431
#define	FREEBSD_OABI_SYS_thr_self	432
#define	FREEBSD_OABI_SYS_thr_kill	433
#define	FREEBSD_OABI_SYS__umtx_lock	434
#define	FREEBSD_OABI_SYS__umtx_unlock	435
#define	FREEBSD_OABI_SYS_jail_attach	436
#define	FREEBSD_OABI_SYS_extattr_list_fd	437
#define	FREEBSD_OABI_SYS_extattr_list_file	438
#define	FREEBSD_OABI_SYS_extattr_list_link	439
#define	FREEBSD_OABI_SYS_freebsd_oabi_ksem_timedwait	441
#define	FREEBSD_OABI_SYS_freebsd_oabi_thr_suspend	442
#define	FREEBSD_OABI_SYS_thr_wake	443
#define	FREEBSD_OABI_SYS_kldunloadf	444
#define	FREEBSD_OABI_SYS_audit	445
#define	FREEBSD_OABI_SYS_auditon	446
#define	FREEBSD_OABI_SYS_getauid	447
#define	FREEBSD_OABI_SYS_setauid	448
#define	FREEBSD_OABI_SYS_getaudit	449
#define	FREEBSD_OABI_SYS_setaudit	450
#define	FREEBSD_OABI_SYS_getaudit_addr	451
#define	FREEBSD_OABI_SYS_setaudit_addr	452
#define	FREEBSD_OABI_SYS_auditctl	453
#define	FREEBSD_OABI_SYS__umtx_op	454
#define	FREEBSD_OABI_SYS_thr_new	455
#define	FREEBSD_OABI_SYS_sigqueue	456
#define	FREEBSD_OABI_SYS_kmq_open	457
#define	FREEBSD_OABI_SYS_kmq_setattr	458
#define	FREEBSD_OABI_SYS_freebsd_oabi_kmq_timedreceive	459
#define	FREEBSD_OABI_SYS_freebsd_oabi_kmq_timedsend	460
#define	FREEBSD_OABI_SYS_kmq_notify	461
#define	FREEBSD_OABI_SYS_kmq_unlink	462
#define	FREEBSD_OABI_SYS_abort2	463
#define	FREEBSD_OABI_SYS_thr_set_name	464
#define	FREEBSD_OABI_SYS_freebsd_oabi_aio_fsync	465
#define	FREEBSD_OABI_SYS_rtprio_thread	466
#define	FREEBSD_OABI_SYS_sctp_peeloff	471
#define	FREEBSD_OABI_SYS_sctp_generic_sendmsg	472
#define	FREEBSD_OABI_SYS_sctp_generic_sendmsg_iov	473
#define	FREEBSD_OABI_SYS_sctp_generic_recvmsg	474
#define	FREEBSD_OABI_SYS_freebsd_oabi_pread	475
#define	FREEBSD_OABI_SYS_freebsd_oabi_pwrite	476
#define	FREEBSD_OABI_SYS_freebsd_oabi_mmap	477
#define	FREEBSD_OABI_SYS_freebsd_oabi_lseek	478
#define	FREEBSD_OABI_SYS_freebsd_oabi_truncate	479
#define	FREEBSD_OABI_SYS_freebsd_oabi_ftruncate	480
#define	FREEBSD_OABI_SYS_thr_kill2	481
#define	FREEBSD_OABI_SYS_shm_open	482
#define	FREEBSD_OABI_SYS_shm_unlink	483
#define	FREEBSD_OABI_SYS_cpuset	484
#define	FREEBSD_OABI_SYS_freebsd_oabi_cpuset_setid	485
#define	FREEBSD_OABI_SYS_cpuset_getid	486
#define	FREEBSD_OABI_SYS_cpuset_getaffinity	487
#define	FREEBSD_OABI_SYS_cpuset_setaffinity	488
#define	FREEBSD_OABI_SYS_faccessat	489
#define	FREEBSD_OABI_SYS_fchmodat	490
#define	FREEBSD_OABI_SYS_fchownat	491
#define	FREEBSD_OABI_SYS_fexecve	492
#define	FREEBSD_OABI_SYS_freebsd_oabi_fstatat	493
#define	FREEBSD_OABI_SYS_freebsd_oabi_futimesat	494
#define	FREEBSD_OABI_SYS_linkat	495
#define	FREEBSD_OABI_SYS_mkdirat	496
#define	FREEBSD_OABI_SYS_mkfifoat	497
#define	FREEBSD_OABI_SYS_mknodat	498
#define	FREEBSD_OABI_SYS_openat	499
#define	FREEBSD_OABI_SYS_readlinkat	500
#define	FREEBSD_OABI_SYS_renameat	501
#define	FREEBSD_OABI_SYS_symlinkat	502
#define	FREEBSD_OABI_SYS_unlinkat	503
#define	FREEBSD_OABI_SYS_posix_openpt	504
#define	FREEBSD_OABI_SYS_jail_get	506
#define	FREEBSD_OABI_SYS_jail_set	507
#define	FREEBSD_OABI_SYS_jail_remove	508
#define	FREEBSD_OABI_SYS_closefrom	509
#define	FREEBSD_OABI_SYS___semctl	510
#define	FREEBSD_OABI_SYS_freebsd_oabi_msgctl	511
#define	FREEBSD_OABI_SYS_freebsd_oabi_shmctl	512
#define	FREEBSD_OABI_SYS_lpathconf	513
#define	FREEBSD_OABI_SYS_freebsd_oabi_pselect	522
#define	FREEBSD_OABI_SYS_MAXSYSCALL	523
