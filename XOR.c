/*************************************************************************
	> File Name: XOR.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月26日 星期五 09时15分49秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a = 7, b = 3, c = 2, d = 3, e = 4;
    int *p = &a;
    --*p;
    printf("%d\n", a);
    c = a ^ b;
    printf("c = %d\n", a ^ b);
    printf("b = %d\n", c ^ a);
    printf("a = %d\n", c ^ b);
    printf("d = %d, e = %d\n", d, e);
    d = d ^ e;
    e = d ^ e;
    d = d ^ e;
    printf("d = %d, e = %d\n", d, e);

    return 0;
}
