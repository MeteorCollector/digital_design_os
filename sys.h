#define VGA_START    0x00200000
#define VGA_LINE_O   0x00210000
#define VGA_MAXLINE  30
#define LINE_MASK    0x003f
#define VGA_MAXCOL   70
#define KBD_START    0x00300000
#define KBD_END      0x00300100

void putstr(char* str);
void putch(char ch);

void vga_init(void);

char wait_keyboard(void);
