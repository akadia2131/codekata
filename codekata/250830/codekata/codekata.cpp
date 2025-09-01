#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    while (n != 0)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
            answer++;
        }
    }

    return answer;
}