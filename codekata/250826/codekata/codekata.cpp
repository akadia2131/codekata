#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    if ((n % 2) == 1) {
        n--;
    }

    while (true) {
        if (n > 1) {
            answer = answer + n;
            n = n - 2;
        }
        else {
            break;
        }
    }


    return answer;
}