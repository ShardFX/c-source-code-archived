/*******************************************************************
Project: Storage Classes

auto
static - locally or globally
extern
register

static and global variables initialize default values (0, 0.0, null, etc)
local variable don't initialize default - garbage values

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-19
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

static int test_static_global = 23;
extern int x; // global variable, by default it is extern

int main(void){ // start main function
    auto int test_auto = 10; // local variables, by default, auto is implicitly there (function-variables/stack var/ temp var)
    static int local_static = 35;
    register int counter;
    for(counter = 1; counter <= 100; counter++){
        printf("%-4d", counter);
    }

    int x = 5;
    printf("local x in outer scope of main is %d\n", x);

	return 0;
} // end main function
