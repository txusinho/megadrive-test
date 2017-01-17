#include <genesis.h>
#include "input_handler.h"

int main() {
    JOY_init();
    JOY_setEventHandler(&inputHandler);

    while (1) {
        VDP_waitVSync();
    }
    return 0;
}
