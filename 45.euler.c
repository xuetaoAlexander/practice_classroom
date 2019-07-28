/*************************************************************************
	> File Name: 45.euler.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月28日 星期日 19时02分24秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

int64_t Triangle(int64_t n) {
    return n * (n + 1) / 2;
}

int64_t Pentagonal(int64_t n) {
    return n * (3 * n - 1) / 2;
}

int64_t Hexagonal(int64_t n) {
    return n * (2 * n - 1);
}

int64_t binary_search(int64_t (*func)(int64_t), int64_t y) {
    int64_t head = 1, tail = y, mid;
    while (head <= tail) {
        mid = (head + tail) / 2;
        if (__builtin_expect(func(mid) == y, 0)) return mid;
        if (func(mid) > y) tail = mid - 1;
        else head = mid + 1; 
    }
    return -1;
}
int main() {
    int64_t n = 143;
    while (n) {
        ++n;
        if (binary_search(Triangle, Hexagonal(n)) == -1) continue;
        if (binary_search(Pentagonal, Hexagonal(n)) == -1) continue;
        printf("%" PRId64, Hexagonal(n));
        break;
    }
    
    return 0;
}
