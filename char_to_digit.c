/*************************************************************************
	> File Name: char_to_digit.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月26日 星期五 13时31分30秒
 ************************************************************************/

#include<stdio.h>

int main() {
    char a = '0';
    char b = '1';
    char c = '2';
    char d = '3';
    char e = '4';
    char f = '5';
    char g = '6';
    char h = '7';
    char i = '8';
    char j = '9';
    printf("%d\n", a);

    printf("%d,%d,%d", j - '0', j & 15, j ^ '0');

    return 0;

}
