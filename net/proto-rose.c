#if 0
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <netinet/in.h>
#include <bits/sockaddr.h>
#include <linux/ax25.h> /* for ax25_address in rose.h */
#include <netrose/rose.h>
#include <stdlib.h>
#include "maps.h"	// page_rand
#include "net.h"
#include "maps.h"	// page_rand
#include "utils.h"	// ARRAY_SIZE
#include "compat.h"

void rose_gen_sockaddr(struct sockaddr **addr, socklen_t *addrlen)
{
	struct sockaddr_rose *rose;

	rose = malloc(sizeof(struct sockaddr_rose));
	if (rose == NULL)
		return;

	rose->srose_family = PF_ROSE;
	rose->srose_addr.rose_addr[0] = rand();
	rose->srose_addr.rose_addr[1] = rand();
	rose->srose_addr.rose_addr[2] = rand();
	rose->srose_addr.rose_addr[3] = rand();
	rose->srose_addr.rose_addr[4] = rand();

	memcpy(rose->srose_call.ax25_call, page_rand, 7);

	rose->srose_ndigis = rand();

	memcpy(rose->srose_digi.ax25_call, page_rand + 7, 7);

	*addr = (struct sockaddr *) rose;
	*addrlen = sizeof(struct sockaddr_rose);
}

#define NR_SOL_ROSE_OPTS ARRAY_SIZE(rose_opts)
static const unsigned int rose_opts[] = {
	ROSE_DEFER, ROSE_T1, ROSE_T2, ROSE_T3,
	ROSE_IDLE, ROSE_QBITINCL, ROSE_HOLDBACK };

void rose_setsockopt(struct sockopt *so)
{
	unsigned char val;

	so->level = SOL_ROSE;

	val = rand() % NR_SOL_ROSE_OPTS;
	so->optname = rose_opts[val];
}
#endif
