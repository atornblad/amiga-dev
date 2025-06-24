#include <stdio.h>
#include <exec/types.h>
#include <exec/exec.h>
#include <intuition/intuition.h>
#include <proto/exec.h>
#include <proto/intuition.h>

struct IntuitionBase *IntuitionBase;

int main() {
    struct NewWindow nw = {
        100, 100,           // LeftEdge, TopEdge
        400, 300,           // Width, Height
        0, 0,               // DetailPen, BlockPen
        IDCMP_CLOSEWINDOW,  // IDCMPFlags
        WFLG_SIZEGADGET | WFLG_CLOSEGADGET | WFLG_DRAGBAR, // Flags
        NULL,               // FirstGadget
        NULL,               // CheckMark
        "Hello World",      // Title
        NULL,               // Screen
        NULL,               // BitMap
        100, 100,           // MinWidth, MinHeight
        800, 600,           // MaxWidth, MaxHeight
        CUSTOMSCREEN        // Type
    };
    struct Window *window;

    IntuitionBase = (struct IntuitionBase *)OpenLibrary("intuition.library", 0);
    if (IntuitionBase == NULL) {
        puts("Failed to open intuition.library.\n");
        return 1;
    }

    window = OpenWindow(&nw);
    if (window == NULL) {
        puts("Failed to open window.\n");
        return 1;
    }

    Wait(1 << window->UserPort->mp_SigBit);
    CloseWindow(window);
    CloseLibrary((struct Library *)IntuitionBase);

    return 0;
}
