#include <stdio.h>
//输入一个十进制数N，将它转换成R进制数输出。
int main() {
    int number;
    int system;
    char s[50];
    int i;
    int length;
    int flag;

    
    while ((scanf("%d%d", &number, &system)) != EOF) {
        i = 0;
        flag = 0;

        printf("输出结果为：");
        if (number < 0) {
            number = -number;
            flag = 1;
        }

        while (number) {
            if (number % system <= 9) {
                s[i] = (number % system) + '0';
            }

            else if (number % system == 10)
                s[i] = 'A';

            else if (number % system == 11)
                s[i] = 'B';

            else if (number % system == 12)
                s[i] = 'C';

            else if (number % system == 13)
                s[i] = 'D';

            else if (number % system == 14)
                s[i] = 'E';

            else if (number % system == 15)
                s[i] = 'F';

            number /= system;
            i++;
        }
        length = i;

        if (flag == 1)
            printf("-");

        for (i = length - 1; i >= 0; i--)
            printf("%c", s[i]);

        printf("\n");



    }


    return 0;
}