#ifndef __HASH_EXTENDER_SHA256_H__
#define __HASH_EXTENDER_SHA256_H__

#include <stdint.h>
#include <openssl/sha.h>

void sha256_hash(uint8_t *data, uint64_t length, uint8_t *buffer, uint8_t *state, uint64_t state_size);

#endif
