#include <iostream>

using namespace std;

pair<int, int> findSmallestAndLargestNumber(int numDigits, int sumDigits) {
    if (sumDigits == 0 || sumDigits > numDigits * 9) {
        return make_pair(-1, -1); // Invalid sum of digits
    }

    int smallestNum = 0;
    int largestNum = 0;
    
    for (int i = 1; i <= numDigits; i++) {
        int digit = min(9, sumDigits);
        smallestNum = smallestNum * 10 + digit;
        sumDigits -= digit;
    }

    largestNum = smallestNum;
    
    if (sumDigits > 0) {
        int digit = min(9, sumDigits);
        largestNum -= digit;
        sumDigits -= digit;
        largestNum = largestNum * 10 + digit;
    }

    return make_pair(smallestNum, largestNum);
}

int main() {
    int numDigits, sumDigits;

    cin >> numDigits >> sumDigits;

    pair<int, int> result = findSmallestAndLargestNumber(numDigits, sumDigits);

    if (result.first == -1 || result.second == -1) {
        cout << "-1 -1";
    } else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
