#ifndef BRAKE_COMMAND_TYPES_HLT_
#define BRAKE_COMMAND_TYPES_HLT_

/***************************************************************************/

#include <stdbool.h>
#include <stdint.h>

/***************************************************************************/

#include "discrete.h"

/***************************************************************************/

typedef struct brake_command_hlt_inputs_s
{
    const discrete_t brake_discrete_first_value_;
    const discrete_t brake_discrete_second_value_;
} brake_command_hlt_input_t;

/***************************************************************************/

typedef struct brake_command_hlt_outputs_s
{
    const bool command_sent_;
    const uint8_t brake_command_[4];
} brake_command_hlt_output_t;

/***************************************************************************/

typedef struct brake_command_hlt_data_s
{
    const uint8_t *const test_case_;
    brake_command_hlt_input_t inputs_;
    brake_command_hlt_output_t outputs_;
} brake_command_hlt_data_t;

/***************************************************************************/

#endif // BRAKE_COMMAND_TYPES_HLT_