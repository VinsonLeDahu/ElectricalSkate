#include "contract.h"

/***************************************************************************/

void PRE(void *pointer_to_assert)
{
    assert(pointer_to_assert);
}

/***************************************************************************/

void POST(void *pointer_to_assert)
{
    assert(pointer_to_assert);
}
