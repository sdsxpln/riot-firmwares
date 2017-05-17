#ifndef COAP_POSITION_H
#define COAP_POSITION_H

#include <inttypes.h>

#include "nanocoap.h"

#ifdef __cplusplus
extern "C" {
#endif

ssize_t position_handler(coap_pkt_t* pdu, uint8_t *buf, size_t len);

#ifdef __cplusplus
}
#endif

#endif /* COAP_POSITION_H */
