#include <genesis.h>

void myJoyHandler(u16 joy, u16 changed, u16 state) {
    if (joy == JOY_1) {
        if (state & BUTTON_START) {
            VDP_drawText("player 1 pressed START button ", 5, 13);
        } else if (changed & BUTTON_START) {
            VDP_drawText("player 1 released START button", 5, 13);
        }

        if (state & BUTTON_UP) {
            VDP_drawText("player 1 pressed UP button ", 5, 13);
        } else if (changed & BUTTON_UP) {
            VDP_drawText("player 1 released UP button", 5, 13);
        }

        if (state & BUTTON_DOWN) {
            VDP_drawText("player 1 pressed DOWN button ", 5, 13);
        } else if (changed & BUTTON_DOWN) {
            VDP_drawText("player 1 released DOWN button", 5, 13);
        }

        if (state & BUTTON_RIGHT) {
            VDP_drawText("player 1 pressed RIGHT button ", 5, 13);
        } else if (changed & BUTTON_RIGHT) {
            VDP_drawText("player 1 released RIGHT button", 5, 13);
        }

        if (state & BUTTON_LEFT) {
            VDP_drawText("player 1 pressed LEFT button ", 5, 13);
        } else if (changed & BUTTON_LEFT) {
            VDP_drawText("player 1 released LEFT button", 5, 13);
        }

        if (state & BUTTON_A) {
            VDP_drawText("player 1 pressed A button ", 5, 13);
        } else if (changed & BUTTON_A) {
            VDP_drawText("player 1 released A button", 5, 13);
        }

        if (state & BUTTON_B) {
            VDP_drawText("player 1 pressed B button ", 5, 13);
        } else if (changed & BUTTON_B) {
            VDP_drawText("player 1 released B button", 5, 13);
        }

        if (state & BUTTON_C) {
            VDP_drawText("player 1 pressed C button ", 5, 13);
        } else if (changed & BUTTON_C) {
            VDP_drawText("player 1 released C button", 5, 13);
        }
    }
}

int main() {
    JOY_init();
    JOY_setEventHandler(&myJoyHandler);

    while (1) {
        VDP_waitVSync();
    }
    return 0;
}
