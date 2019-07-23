/*************************************************************************
	> File Name: 5.printf.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月23日 星期二 18时01分21秒
 ************************************************************************/

#include<stdio.h>
#define swap(a,b){ \
    __typeof(a) temp = a; \
    a = b, b = temp; \
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%04d\n", n);
    char str[100], buff[100], *p = str, *q = buff;
    sprintf(str, "%d.%d.%d.%d", 192,168,1,2);
    printf("str=%s\n", str);
    if (n & 1){
        sprintf(q, "(%s)", p);
        swap(p,q);
    }
    if (n & 2){
        sprintf(q, "[%s]", p);
        swap(p,q);
    }
    if (n & 4){
        sprintf(q, "{%s}", p);
        swap(p,q);
    }
    FILE * fout = fopen("output", "w");
    fprintf(fout, "output = %s\n", p);
    fprintf(stdout, "stdout = %s\n", p);
    fprintf(stderr, "stderr = %s\n", p);

    return 0;
}
