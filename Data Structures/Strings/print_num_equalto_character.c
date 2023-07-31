#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i, j = 0, k = 0, num;
    char str[100];
    scanf("%s", str);
    char s1[5], output[100] = "";

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            s1[j++] = str[i];
        } else {
            s1[j] = '\0'; 
            num = atoi(s1);
            j = 0;
            s1[0] = str[i];
            s1[1] = '\0'; 
            for (k = 1; k <= num; k++) {
                strcat(output, s1);
            }
        }
    }
    s1[j] = '\0'; 
    if (j > 0) {
        num = atoi(s1);
        for (k = 1; k <= num; k++) {
            strcat(output, s1);
        }
    }

    printf("%s", output);
    return 0;
}
