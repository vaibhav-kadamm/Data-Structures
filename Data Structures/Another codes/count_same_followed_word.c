#include <stdio.h>
#include<string.h>
//abcdabababgfgh
//2
//if same comes again and again count it only once
#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "abcdabababgfabgh";
    int i, j = 0;
    int cnt = 0;

    if (strlen(string) > 2) {
        cnt = 1;
    }

    for (i = 2; string[i] != '\0';) {
        if (string[i] == string[0] && string[i + 1] == string[1]) {
            cnt++;
            for (j = i + 2; string[j] != '\0' && j < strlen(string);) {
                if (string[j] == string[0] && string[j + 1] == string[1]) {
                    j += 2;
                    i = j; 
                } else {
                    i = j; 
                    break;
                }
            }
        } else {
            i++;
        }
    }

    printf("%d", cnt);

    return 0;
}
