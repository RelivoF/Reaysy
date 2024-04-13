#include "raylib.h"

void ConfigFlags(bool resizable, bool fullscreen, bool borderless, bool maximized, bool vsync)
{
    if (resizable) SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    else if (fullscreen) SetConfigFlags(FLAG_FULLSCREEN_MODE);
    else if (borderless) SetConfigFlags(FLAG_BORDERLESS_WINDOWED_MODE);
    else if (maximized) SetConfigFlags(FLAG_WINDOW_MAXIMIZED);
    else if (vsync) SetConfigFlags(FLAG_VSYNC_HINT);
}

