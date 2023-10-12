#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    int num;
    char ch;
    float f;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                ch = va_arg(args, int);
                printf("%c", ch);
                break;
            case 'i':
                num = va_arg(args, int);
                printf("%d", num);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str != NULL)
                {
                    printf("%s", str);
                    break;
                }
                printf("(nil)");
                break;
            default:
                i++;
                continue;
        }

        if (format[i + 1] != '\0')
            printf(", ");

        i++;
    }

    va_end(args);

    printf("\n");
}
