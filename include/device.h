#ifndef DEVICE_H
#define DEVICE_H

#include <zephyr/kernel.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint32_t id;
    uint32_t flags;
} device_t;

void init_device(device_t *dev, uint32_t id, uint32_t flags);


#ifdef __cplusplus
}
#endif

#endif  /* MYFIRSTTRY_H */