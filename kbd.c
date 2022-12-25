#include "sys.h"

static char* queue_front = KBD_START;

void ptrmov()
{
    queue_front = (queue_front == KBD_END) ? KBD_START : queue_front + 1; 
}

char wait_keyboard(void)
{
    char ret;
    while (*queue_front == 0) { ptrmov(); }
    ret = *queue_front;
    *queue_front = 0;
    return ret;
}

char get_keyboard(void)
{
    char ret;
    char *ptr = KBD_START;
    while (ptr <= KBD_END) { if (*ptr != 0) return *ptr; }
    return 0;
}