#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool sum(int a, int b)
{
    return a > b;
}

long long solution(long long n) {
    long long answer = 0;

    vector<long long> arr;
    int i = 0;

    while (n > 0)
    {
        arr.push_back(n % 10);
        n /= 10;
    }

    long long size = arr.size();

    sort(arr.begin(), arr.end(), sum);


    for (int so : arr)
    {
        answer = answer * 10 + so;
    }

    return answer;
}