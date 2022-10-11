#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = (9 * (9 + 1)) / 2;
    for(int n : numbers) answer -= n;
    return answer;
}