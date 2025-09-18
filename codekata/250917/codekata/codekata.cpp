#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    string sum1 = "수";
    string sum2 = "박";
    bool i = true;

    while (n > 0)
    {
        if (i == true)
        {
            answer += sum1;
            i = false;
        }
        else if (i == false)
        {
            answer += sum2;
            i = true;
        }
        n--;
    }

    return answer;
}