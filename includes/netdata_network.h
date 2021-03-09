// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef _NETDATA_NETWORK_H_
#define _NETDATA_NETWORK_H_ 1

#include <linux/sched.h>

enum socket_counters {
    NETDATA_KEY_CALLS_TCP_SENDMSG,
    NETDATA_KEY_ERROR_TCP_SENDMSG,
    NETDATA_KEY_BYTES_TCP_SENDMSG,

    NETDATA_KEY_CALLS_TCP_CLEANUP_RBUF,
    NETDATA_KEY_ERROR_TCP_CLEANUP_RBUF,
    NETDATA_KEY_BYTES_TCP_CLEANUP_RBUF,

    NETDATA_KEY_CALLS_TCP_CLOSE,

    NETDATA_KEY_CALLS_UDP_RECVMSG,
    NETDATA_KEY_ERROR_UDP_RECVMSG,
    NETDATA_KEY_BYTES_UDP_RECVMSG,

    NETDATA_KEY_CALLS_UDP_SENDMSG,
    NETDATA_KEY_ERROR_UDP_SENDMSG,
    NETDATA_KEY_BYTES_UDP_SENDMSG,

    NETDATA_KEY_TCP_RETRANSMIT,

    // Keep this as last and don't skip numbers as it is used as element counter
    NETDATA_SOCKET_COUNTER
};

#endif /* _NETDATA_NETWORK_H_ */
