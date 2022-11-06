// #ifndef INPUT_DISCRETE_DRIVER_H_
// #define INPUT_DISCRETE_DRIVER_H_

// /***************************************************************************/

// #include "contract.h"
// #include <stdlib.h>
// #include <stdbool.h>
// #include <stdint.h>
// #include "assert.h"
// #include "driver/gpio.h"

// /***************************************************************************/

// #include "input_discrete.h"
// #include "i_driver.h"

// /***************************************************************************/

// typedef struct input_discrete_driver_s input_discrete_driver_t;

// /* PRE  N/A
//  * POST return a not null instance
//  */
// extern input_discrete_driver_t *input_discrete_driver_init(gpio_num_t pin_number);

// /* PRE  inputs are not NULL
//  * POST return the input_discrete_
//  */
// extern input_discrete_t *input_discrete_driver_get_input_discrete(input_discrete_driver_t *self);

// /* PRE  inputs are not NULL
//  * POST return the i_driver
//  */
// extern i_driver_t *input_discrete_driver_get_i_driver(input_discrete_driver_t *self);

// #endif // INPUT_DISCRETE_DRIVER_H_