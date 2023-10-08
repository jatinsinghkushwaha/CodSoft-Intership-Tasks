// CodSoft Internship
// Domain Name - C++ Programming
// Task - 2(Simple Calculator)
// Intern Name - Jatin Singh Kushwaha


# include <iostream>
using namespace std;

int main() {
  //Simple calculator
  char op;
  float num1, num2;
  
  cout<<" Simple Calculator"<<endl;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op; //operator

  cout << "Enter first operand: ";
  cin >> num1 ;
 
  cout << "Enter second operand: ";
  cin >> num2 ;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error will be displayed
      cout << "Error!! Use valid operator";
      break;
  }

  return 0;
}
