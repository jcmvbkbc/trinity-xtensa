/*
 * SYSCALL_DEFINE4(sendfile, int, out_fd, int, in_fd, off_t __user *, offset, size_t, count)
 */
#include "sanitise.h"

struct syscallentry syscall_sendfile = {
	.name = "sendfile",
	.num_args = 4,
	.arg1name = "out_fd",
	.arg1type = ARG_FD,
	.arg2name = "in_fd",
	.arg2type = ARG_FD,
	.arg3name = "offset",
	.arg3type = ARG_ADDRESS,
	.arg4name = "count",
	.arg4type = ARG_LEN,
	.flags = NEED_ALARM,
};

/*
 * SYSCALL_DEFINE4(sendfile64, int, out_fd, int, in_fd, loff_t __user *, offset, size_t, count)
 */

struct syscallentry syscall_sendfile64 = {
	.name = "sendfile",
	.num_args = 4,
	.arg1name = "out_fd",
	.arg1type = ARG_FD,
	.arg2name = "in_fd",
	.arg2type = ARG_FD,
	.arg3name = "offset",
	.arg3type = ARG_ADDRESS,
	.arg4name = "count",
	.arg4type = ARG_LEN,
	.flags = NEED_ALARM,
};
