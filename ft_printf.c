#include "printf.h"

int ft_printf(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);

    while(*fmt != '\0')
    {
        if (*fmt == 'c')
        {
            int c = va_arg(args, int);
            write(1, &c, 1);
        }
        ++fmt;
    }
    va_end(args);
}

int main (void)
{
    printf("%c\n", 'a');
}