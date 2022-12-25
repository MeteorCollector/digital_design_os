#include "sys.h"


char hello[]="Hello World 2022 (  = w = )\nContratulations! Displayed successfully.\nNow try typing:\n";

int main();

//setup the entry point
void entry()
{
    asm("lui sp, 0x00120"); //set stack to high address of the dmem
    asm("addi sp, sp, -4");
    main();
}

int main()
{
    vga_init();
  
    putstr(hello);
    while (1)
    {
        putch(wait_keyboard);
    };
    return 0;
}
