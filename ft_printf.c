#include "ft_printf.h"

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
            if (*fmt == 'c')
            {
                
            }
        }
        // else if(*fmt == 'd')
        // {
        //     int i = va_arg(args, int);
        //     write(1, &i, 1);
        // }
        // else if(*fmt == 's')
        // {
        //     int s = va_arg(args, int);
        //     write(1, s, strlen(s));
        // }
        ++fmt;
    }
    va_end(args);
}



int main (void)
{
    ft_printf("%c", 'a');
    printf("%c %c\n", 'b', 65);
}