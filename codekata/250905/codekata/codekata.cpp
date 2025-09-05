#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = -1;

    for (long long i = 0; i < n; i++)
    {
        if (i * i == n)
        {
            i++;
            answer = i * i;
            break;
        }
    }

    if (n == 1) answer = 4;


    return answer;
}