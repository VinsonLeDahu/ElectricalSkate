#ifndef FAKE_TEST_TYPES_LLT_H_
#define FAKE_TEST_TYPES_LLT_H_

/***************************************************************************/

#include <stdbool.h>
#include <stdint.h>

/***************************************************************************/

typedef struct fake_test_llt_inputs_s
{
    const uint8_t temperature_;
} fake_test_llt_input_t;

/***************************************************************************/

typedef struct fake_test_llt_outputs_s
{
    const uint8_t temperature_;
} fake_test_llt_output_t;

/***************************************************************************/

typedef struct fake_test_llt_data_s
{
    const uint8_t *const test_case_;
    fake_test_llt_input_t inputs_;
    fake_test_llt_output_t outputs_;
} fake_test_llt_data_t;

/***************************************************************************/

#endif // FAKE_TEST_TYPES_LLT_H_