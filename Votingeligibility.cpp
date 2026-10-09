#include <iostream>
using namespace std;

int main() {
int age;
bool isCitizen;
bool hasVoterID;

cout << "Enter your age: ";
cin >> age;

cout << "Are you a citizen? (1 for Yes, 0 for No): ";
cin >> isCitizen;

cout << "Do you have Voter ID? (1 for Yes, 0 for No): ";
cin >> hasVoterID;

bool isAdult = (age >= 18);
bool canVote = isAdult && hasVoterID;

if (canVote) {
cout << "You are eligible to vote!" << endl;
} else {
cout << "You are NOT eligible to vote." <<endl;
if (!isAdult) {
cout << "-You must be at least 18 years old." << endl;
}
if (!isCitizen) {
cout << "-You must be a citizen. " << endl;
}
if (!hasVoterID) {
cout << "-You must have a Voter ID." << endl;
}
}
return 0;
}
