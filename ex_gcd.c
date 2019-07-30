/*************************************************************************
	> File Name: ex_gcd.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月30日 星期二 11时50分43秒
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    return  b ? gcd(b, a % b) : a;
}

int ex_gcd(int a, int b, int *x, int *y) {
    if (!b) {
        *x = 1;
        *y = 0;
        return a;
    } 

    int xx, yy, ret = ex_gcd(b, a % b, &xx, &yy);
    printf("a = %d, b =  %d, ret = %d\n", a, b, ret);
    *x = yy; 
    *y = xx - a / b * yy;
    return ret;
}

int main() {
    int a, b, x, y;
    
    while (~scanf("%d%d", &a, &b)) {
        int ret = ex_gcd(a, b, &x, &y);
        printf("gcd(%d,%d) = %d\n", a, b, ret);
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, ret);
    }


    return 0;
}
