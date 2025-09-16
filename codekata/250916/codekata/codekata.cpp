#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    int len = s.length();

    if (len % 2 == 1) // 문자열 길이가 홀수
    {
        answer = s.substr(len / 2, 1);
    }
    else // 문자열 길이가 짝수
    {
        answer = s.substr((len / 2) - 1, 2);
    }

    return answer;
}