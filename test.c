#include "implementation.h"

#test sum2test
    fail_unless(sum(3, 2) == 5, "sum function borked");
    fail_unless(sum(-3, 2) == -1, "sum function borked");
    fail_unless(sum(3, -2) == 1, "sum function borked");
    fail_unless(sum(-3, -2) == -5, "sum function borked");
