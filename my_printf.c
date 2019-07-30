/*************************************************************************
	> File Name: my_printf.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月29日 星期一 20时33分55秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

#define PUTC(a) putchar(a), ++cnt

int reverse_number(int num, int *temp) {
    *temp = 0;
    int digit = 0;
    do{
        *temp = *temp * 10 + num % 10;
        num /= 10;
        digit ++;
    } while (num);
    return digit;
}
int output_num_with_digit(int num, int digit) {
    int ret = 0;
    while (digit--) {
        putchar(num % 10 + '0');
        num /= 10;
        ret++;
    }
    return ret;
}

int my_printf(const char *frm, ...) { 
    va_list arg;
    va_start(arg, frm);
    int cnt = 0;
    for (int i = 0; frm[i]; ++i) {
        switch (frm[i]) {
            case '%': {
                switch (frm[++i]) {
                    case '%': PUTC(frm[i]); break;
                    case 'd': {
                        uint32_t x;
                        int xx = va_arg(arg, int);
                        if (xx < 0) PUTC('-'),x = -xx;
                        else x = xx;
                        int val1 = x / 100000, val2 = x % 100000;
                        int temp1 = 0, temp2 = 0;
                        int digit1 = reverse_number(val1, &temp1);
                        int digit2 = reverse_number(val2, &temp2);

                        if (val1) digit2 = 5;
                        else digit1 = 0;
                        cnt += output_num_with_digit(temp1,digit1);
                        cnt += output_num_with_digit(temp2,digit2);
                    } break;
                    case 's': {
                        const char *str = va_arg(arg, const char *);
                        for (int i = 0; str[i]; ++i) {
                            PUTC(str[i]);
                        }
                    } break;
                } break;
            }
            default: PUTC(frm[i]); break;
        }
   }
    va_end(arg);
    return cnt;
}

int main() {
    int a = 0;

    printf("hello world\n");
    my_printf("hello world\n");
    printf("int a = %d\n", a);
    my_printf("int a = %d\n", a);
    printf("INT32_MAX = %" PRId32 "\n", INT32_MAX);
    my_printf("INT32_MAX = %d\n", INT32_MAX);
    printf("INT32_MIN = %" PRId32 "\n", INT32_MIN);
    my_printf("INT32_MIN = %d\n", INT32_MIN);

    return 0; 
}
