#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    n--;

    int i = 2;

    while (n % i != 0)
    {
        i++;
    }

    answer = i;

    return answer;
}