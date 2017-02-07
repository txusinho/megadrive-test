#include <genesis.h>
#include "input_handler.h"

void load() {
    u32 tile[8] = {0x00111100, 0x01144110, 0x11244211, 0x11244211,
                   0x11222211, 0x11222211, 0x01122110, 0x00111100};

    VDP_loadTileData((const u32 *)tile, 1, 1, 0);
    VDP_setTileMapXY(APLAN, 1, 5, 5);
}

void render() {}

int main() {
    JOY_init();
    JOY_setEventHandler(&inputHandler);
    load();
    render();
    while (1) {
        VDP_waitVSync();
    }
    return 0;
}
