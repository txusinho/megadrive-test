#include <genesis.h>

void inputHandler(u16 joy, u16 changed, u16 state) {
    if (joy == JOY_1) {
        if (state & BUTTON_START) {
            VDP_drawText("press START ", 1, 27);
        } else if (changed & BUTTON_START) {
            VDP_drawText("release START", 1, 27);
        }

        if (state & BUTTON_UP) {
            VDP_drawText("press UP ", 1, 27);
        } else if (changed & BUTTON_UP) {
            VDP_drawText("release UP", 1, 27);
        }

        if (state & BUTTON_DOWN) {
            VDP_drawText("press DOWN ", 1, 27);
        } else if (changed & BUTTON_DOWN) {
            VDP_drawText("release DOWN", 1, 27);
        }

        if (state & BUTTON_RIGHT) {
            VDP_drawText("press RIGHT ", 1, 27);
        } else if (changed & BUTTON_RIGHT) {
            VDP_drawText("release RIGHT", 1, 27);
        }

        if (state & BUTTON_LEFT) {
            VDP_drawText("press LEFT ", 1, 27);
        } else if (changed & BUTTON_LEFT) {
            VDP_drawText("release LEFT", 1, 27);
        }

        if (state & BUTTON_A) {
            VDP_drawText("press A ", 1, 27);
        } else if (changed & BUTTON_A) {
            VDP_drawText("release A", 1, 27);
        }

        if (state & BUTTON_B) {
            VDP_drawText("press B ", 1, 27);
        } else if (changed & BUTTON_B) {
            VDP_drawText("release B", 1, 27);
        }

        if (state & BUTTON_C) {
            VDP_drawText("press C ", 1, 27);
        } else if (changed & BUTTON_C) {
            VDP_drawText("release C", 1, 27);
        }
    }
}
