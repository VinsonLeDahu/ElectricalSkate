#ifndef DISCRETE_H_
#define DISCRETE_H_

/***************************************************************************/

#include <stdbool.h>
#include <stdint.h>

/***************************************************************************/

typedef struct discrete_s discrete_t;

typedef enum
{
    low = 0x0,
    high = 0x1
} discrete_t;

#endif // DISCRETE_H_