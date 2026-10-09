#include <iostream>
using namespace std;

int main() {
int age = 20;
int marks = 75;
int score = 85;

bool isAdult = (age >= 18);
bool isPassed = (marks >= 40);
bool isTopper = (score >= 90);

cout << "Is Adult? " << isAdult << endl;
cout << "Is Passed? " << isPassed << endl;
cout << "Is Topper? " << isTopper << endl;

return 0;
}
