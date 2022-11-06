#ifndef INPUT_DISCRETE_H_
#define INPUT_DISCRETE_H_

/***************************************************************************/

#include <stdbool.h>
#include <stdint.h>

/***************************************************************************/

#include "discrete.h"

/***************************************************************************/

typedef discrete_state_t (*get_functor)(input_discrete_t *);

typedef struct input_discrete_s
{
    /* PRE  input_discrete is not null
     * POST the driver write its output
     */
    get_functor get_;

    void *instance_;
} input_discrete_t;

#endif // INPUT_DISCRETE_H_