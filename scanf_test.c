/*************************************************************************
	> File Name: 3.test.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月23日 星期二 15时43分38秒
 ************************************************************************/

#include<stdio.h>
int main(){
    char str[100];
    int ret;
    while((ret = scanf("%[^\n]s", str)) != EOF){
        getchar();
        printf(" has %d chars\n", printf("%s", str));
    }
    return 0;
}
