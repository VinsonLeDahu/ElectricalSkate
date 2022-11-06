/***************************************************************************/

#include "dmx_driver.h"

/***************************************************************************/

#include "contract.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include "assert.h"
#include "driver/gpio.h"

/***************************************************************************/

#include "input_discrete_driver.h"

/***************************************************************************/

struct input_discrete_driver_s
{
    i_driver_t *i_driver_;
    input_discrete_t *input_discrete_;
    discrete_state_t discrete_state_;
    gpio_num_t pin_number_;
};

/***************************************************************************/

/* PRE  inputs are not null
 * POST read the discrete and save the value in discrete_state_
 */
static void input_discrete_driver_read(i_driver_t *i_driver)
{
    PRE(i_driver);

    input_discrete_driver_t *self = (input_discrete_driver_t *)i_driver->instance_;
    int value = gpio_get_level(self->pin_number_);
    if (gpio_get_level(self->pin_number_) == 0)
    {
        self->discrete_state_ = low_state;
    }
    else
    {
        self->discrete_state_ = high_state;
    }
    printf("state : %d\n", self->discrete_state_);
    printf("value : %d\n", value);
}

/***************************************************************************/

discrete_state_t input_discrete_driver_get_state(input_discrete_t *input_discrete)
{
    PRE(input_discrete);

    input_discrete_driver_t *self = (input_discrete_driver_t *)input_discrete->instance_;

    return self->discrete_state_;
}

/***************************************************************************/

extern input_discrete_driver_t *input_discrete_driver_init(gpio_num_t pin_number)
{
    input_discrete_driver_t *instance = malloc(sizeof(input_discrete_driver_t));
    assert(instance);

    i_driver_t *i_driver = malloc(sizeof(i_driver_t));
    assert(i_driver);
    i_driver->read_ = &input_discrete_driver_read;
    i_driver->instance_ = (void *)instance;

    input_discrete_t *input_discrete = malloc(sizeof(input_discrete_t));
    assert(input_discrete);
    input_discrete->get_ = &input_discrete_driver_get_state;
    input_discrete->instance_ = (void *)instance;

    instance->i_driver_ = i_driver;
    instance->input_discrete_ = input_discrete;
    instance->pin_number_ = pin_number;

    gpio_reset_pin(pin_number);
    gpio_set_pull_mode(pin_number, GPIO_PULLDOWN_ONLY);
    gpio_set_direction(pin_number, GPIO_MODE_INPUT);

    instance->i_driver_->read_(instance->i_driver_);

    return instance;
}

/***************************************************************************/

i_driver_t *input_discrete_driver_get_i_driver(input_discrete_driver_t *self)
{
    PRE(self);

    return self->i_driver_;
}

/***************************************************************************/

input_discrete_t *input_discrete_driver_get_input_discrete(input_discrete_driver_t *self)
{
    PRE(self);

    return self->input_discrete_;
}

/***************************************************************************/
