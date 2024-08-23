#include <iostream>
using namespace std;

int main() {
  int Obtain_Marks, Total_Marks;
  float GPA = 0.0, percentage;
  cout << "Enter Obtain Marks" << endl;
  cin >> Obtain_Marks;
  cout << "Enter Total Marks" << endl;
  cin >> Total_Marks;

  percentage = (float(Obtain_Marks) / float(Total_Marks)) * 100;
  cout << "Your Percentage is :" << percentage << endl;
  if (percentage >= 90) {
    cout << "Your Grade is A" << endl;
    GPA = 4.0;
  } else if (percentage >= 80) {
    cout << "Your Grade is B" << endl;
    GPA = 3.5;
  } else if (percentage >= 70) {
    cout << "Your Grade is C" << endl;
    GPA = 3.0;
  } else {
    cout << "Your Grade is D" << endl;
  }
  cout << "Your GPA is :" << GPA << endl;

  return 0;
}
