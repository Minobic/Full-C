// Hello World Program


/*
#include<stdio.h>

int main() {
  printf("Hello World!");
  return 0;
} */



/**** Chapter 1****/
/**** Variables, Data Types and Input/Output ****/


// Variables


/*
#include<stdio.h>

int main() {
  int number = 25;
  char star = '*';
  int age = 22;
  age = 24;            // Update
  float pi = 3.14;

  // int 1age = 22;    // Wrong
  return 0;
} */



// Data Types


/*
#include<stdio.h>

int main() {
  int age = 22;
  float pi = 3.14;
  char hashtag = '#';
  return 0;
} */



// Output


/*
#include<stdio.h>

int main() {
  int age = 22;
  float pi = 3.14;
  char star = '*';
  printf("age is %d\n", age);           // %d for integers
  printf("Value of pi is %f\n", pi);    // %f for floats
  printf("star looks like this %c", star);
  return 0;
} */



// Input


/*
#include<stdio.h>

int main() {
  int age;
  scanf("%d", &age);
  printf("age is %d\n", age);

  // Sum of two inputs
  int a, b;
  
  printf("Enter first number:");
  scanf("%d", &a);
  printf("Enter second number:");
  scanf("%d", &b);

  int sum = a + b;
  printf("Sum is: %d\n", sum);
  printf("Sum is: %d", a + b);    // Fast method
} */



/***********************/
// Practice Set Chapter 1


// Calculate area of a square


/*
#include<stdio.h>

int main() {
  float side;
  printf("Enter the side:");
  scanf("%f", &side);
  printf("Here's the are of square: %f", side * side);
  return 0;
} */



// Are of a circle


/*
#include<stdio.h>

int main() {
  float radius;
  printf("Enter radius: ");
  scanf("%f", &radius);
  printf("Area of circle is: %f", 3.14 * radius * radius);
} */
/***********************/



/**** Chapter 2 ****/
/**** Instructions and Operators ****/


// Instructions    // These are statements in a program

// Types
// 1) Type Decleration Instructions
// 2) Arithmetic Instructions
// 3) Control Instructions



// Type Declaration Instruction    // Declare var before using it


/*
#include<stdio.h>

int main() {
  // Valid
  int a = 2;
  int b = a;
  int c = 1, d;
  int x, y, z;
  x = y = z = 4;

  // Invalid
  // int oldAge = 22;
  // int newAge = oldAge + years;
  // years = 2;
  // int x = y = z = 4;
  
  return 0;
} */



// Arithmetic Instructions


/*
#include<stdio.h>
#include<math.h>

int main() {
  int a = 1, b = 2;
  int sum = a + b;              // Operand1 = a // Operator = + // Operand2 = b

  // Valid
  int c = 1;
  a = b + c;
  int power = pow(b,c);
  printf("%d\n", power);

  // Invalid
  // b + c = a;
  // a = bc;
  a = b ^ c;                    // its a zor operator    // For using power use "pow(b,c)" for b to the power c
  printf("%d", a);


  // Modular/Modulo operator    // It gives the reminder
  
  printf("%d\n", 16 % 10);      // It only works on int
  printf("%d\n", -16 % 10);


  // Type conversion

  printf("%f", 2.0 * 2);        // int operator float = float
  return 0;


  // Operators precedence
  // 1) *, /, %
  // 2) +, -
  // 3) =
  // Associativity (for same precedence) will be left to right
} */



// Control Instruction    // Use to determine flow of program

// 1) Sequence Control
// 2) Decision Control
// 3) Loop Control
// 4) Case Control



// Operators

// a) Arthmetic Operator
// b) Relational Operator
// c) Logical Operator
// d) Bitwise Operator
// e) Assignment Operator
// f) Ternary Operator



// Relational operators
// 1) ==
// 2) >, >=
// 3) <, <=
// 4) !=


/*
#include<stdio.h>

int main() {
  printf("%d\n", 4 == 4);    // True = 1, False = 0
  return 0;
} */



// Logical operators
// 1) && = AND
// 2) || = OR
// 3) ! = NOT


/*
#include<stdio.h>

int main() {
  printf("%d\n", 4>3 && 5<6);    // There is no Boolean in c it's all represent by 1 and 0
  printf("%d\n", !(5>4));        // Inverse the true to false and vice versa
  return 0;
} */



// Operator Precedence
// 1) !
// 2) *, /, %
// 3) +, -
// 4) <, <=, >, >=
// 5) ==, !=
// 6) &&
// 7) ||
// 8) =



// Assignment Operators
// 1) =
// 2) +=
// 3) -=
// 4) *=
// 5) /=
// 6) %=


/*
#include<stdio.h>

int main() {
  int a = 1;
  int b = 2;
  a += b;    // a = a - b
  printf("%d\n", a);
  return 0;
} */



/***********************/
// Practice Set Chapter 2


// Force a float to be a int


/*
#include<stdio.h>

int main() {
  int a = (int) 1.999999;    // Output will be in int which is = 1
  printf("%d", a);
  return 0;
} */



// Some questions on precedence and associativity


/*
# include<stdio.h>

int main() {
  float que1 = 5 * 2 - 2 * 3;
  float que2 = 5 * 2 / 2 * 3;
  float que3 = 5 * (2 / 2) * 3;
  float que4 = 5 + 2 / 2 * 3;
  printf("First answer: %f\n", que1);
  printf("First answer: %f\n", que2);
  printf("First answer: %f\n", que3);
  printf("First answer: %f\n", que4);
  return 0;
} */



// Check if a number is divisible by 2 or not


/*
#include<stdio.h>

int main() {
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("1 = True\n0 = False\n");
  printf("Output is: %d", num % 2 == 0);
} */



// Check if number is odd or even


/*
#include<stdio.h>

int main() {
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("1 = Even\n0 = Odd\n");
  printf("Output is: %d", num % 2 == 0);
  return 0;
} */



// Are the following valid or not

// 1) int a = 8 ^ 8;      // Valid cuz it is exor ino pov of power its invalid
// 2) int x; int y = x;   // Valid
// 3) int x, y = x;       // Invalid cuz x is declared in same line
// 4) char stars = '**';  // Invalid cuz it can only contain 1 character



// True false as per the weather and day


/*
#include<stdio.h>

int main() {
  int sunday = 1;
  int snowing = 1;
  
  int monday = 1;
  int raining = 1;
  printf("%d\n", sunday && snowing);
  printf("%d\n", monday || raining);

  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("%d", num > 9 && 100 > num);
  return 0;
} */



// Average of three numbers


/*
#include<stdio.h>

int main() {
  float a, b, c;
  printf("Enter first number: ");
  scanf("%f", &a);
  printf("Enter second number: ");
  scanf("%f", &b);
  printf("Enter third number: ");
  scanf("%f", &c);
  printf("Average of the numbers is: %f", (a + b + c)/2);
  return 0;
} */



// Check character is a digit or not


/*
int main() {
  char in;
  printf("Enter the character: ");
  scanf("%c", &in);
  printf("1 = Digit\n0 = char\n");
  printf("Output is: %d", in >= '0' && '9' >= in);
  return 0;
} */



// To print the smallest number


/*
#include<stdio.h>

int main() {
  int a, b;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  printf("The smallest number is: %d", b>a ? a:b);
  return 0;
} */
/***********************/



/**** Chapter 3 ****/
/**** Conditional Statements ****/


// If else and else if Statement


/*
#include<stdio.h>

int main() {
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  if (age > 18) {    // You can remove curly braces if you are not using a chunk of code in both if and else
    printf("You are an adult\n");
  } else if (age > 13 && age < 18) {
    printf("Your are a teenager\n");
  } else {
    printf("Your are a child\n");
  }

  printf("Thank You!");
  return 0;
} */



// Nested if


/*
#include<stdio.h>

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num >= 0) {
    printf("Positive\n");
    if (num % 2 == 0) {
      printf("Even\n");
    } else {
      printf("Odd\n");
    }
  } else {
    printf("Negative\n");
  }
  return 0;
} */



// Conditional Operators (Ternary)
// Condition ? do something if TRUE : do something if false;    // ? = if, : = else


/*
#include<stdio.h>

int main() {
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  age >= 18 ? printf("You are an adult") : printf("You are young");
  return 0;
} */



// Switch case Statement


/*
#include<stdio.h>

int main() {
  int day;    // Here we can use char also like 'm' for monday
  printf("Enter the day(1-7): ");
  scanf("%d", &day);

  switch (day) {
    case 1 : printf("Monday\n");
      break;
    case 2 : printf("Tuesday\n");
      break;
    case 3 : printf("Wednesday\n");
      break;
    case 4 : printf("Thursday\n");
      break;
    case 5 : printf("Friday\n");
      break;
    case 6 : printf("Saturday\n");
      break;
    case 7 : printf("Sunday\n");
      break;
    default : printf("Not a valid day!");
  }
  return 0;
} */



// 


/*
#include<stdio.h>

int main() {
  
  return 0;
} */



/***********************/
// Practice Set Chapter 3


// Check if studet pass or fail


/*
#include<stdio.h>

int main() {
  int marks;
  printf("Enter your marks: ");
  scanf("%d", &marks);

  if (marks > 30 && marks <= 100) {
    printf("Congratulations! you are passed");
  } else if (marks >= 0 && marks <= 30) {
    printf("Sorry! you are failed");
  } else {
    printf("Enter valid marks between (1-100)");
  }
  return 0;
} */



// Give grades to a student


/*
#include<stdio.h>

int main() {
  int marks;
  printf("Enter your marks: ");
  scanf("%d", &marks);

  if (marks < 30) {
    printf("C");
  } else if (marks >= 30 && marks <70) {
    printf("B");
  } else if (marks >= 70 && marks < 90) {
    printf("A");
  } else if (marks >= 90 && marks <= 100) {
    printf("A+");
  } else {
    printf("Enter valid marks between (1-100)");
  }
  return 0;
} */



// Check what will be the output of given code


/*
#include<stdio.h>

int main() {
  int x = 2;
  
  if (x = 1) {    // Give error because we have use here single =
    printf("C");
  } else {
    printf("x is not equal to 1");
  }
  return 0;
} */



// Check character is upper case or not


/*
#include<stdio.h>

int main() {
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z') {
    printf("Upper case");
  } else if (ch >= 'a' && ch <= 'z') {
    printf("Lower case");
  } else {
    printf("Not an alphabet");
  }
  return 0;
} */



// Given number is amstrong number or not


/*    // idk how to solve it without loops
#include<stdio.h>

int main() {
  
  return 0;
} */



// To check if given numbe is a natural number


/*    // idk this too
#include<stdio.h>

int main() {
  
  return 0;
} */
/***********************/



/**** Chapter 4 ****/
/**** Loop control instructions ****/


// For loop

/*
#include<stdio.h>

int main() {
  // i = interator ; counter
  for (int i = 1; i <= 5; i = i + 1) {    // U can use i++ also
    printf("Hello world\n");
  }
  for (int i = 10; i >= 1; i = i - 1) {
    printf("%d\n", i);
  }
  return 0;
} */



// Increment Operator


/*
#include<stdio.h>

int main() {
  int i = 1;
  printf("%d\n", i++);    // Use than increase    // Post increment operator
  printf("%d\n", i);

  printf("%d\n", ++i);    // Increase than use    // Pre increment operator
  printf("%d\n", i);
  return 0;
} */



// Increment Operator


/*
#include<stdio.h>

int main() {
  int i = 1;
  printf("%d\n", i--);    // Use than decrease    // Post decrement operator
  printf("%d\n", i);

  printf("%d\n", --i);    // Decrease than use    // Pre decrement operator
  printf("%d\n", i);
  return 0;
} */



// Loop whith float or a char


/*
#include<stdio.h>

int main() {
  for (float i = 1.0; i <= 5; i++) {
    printf("%f\n", i);
  }

  for(char ch = 'a'; ch <= 'z'; ch++) {
    printf("%c\n", ch);
  }
  return 0;
} */



// Infinite Loop


/*
#include<stdio.h>

int main() {
  for (int i = 1;; i++) {    // Can remove i++ for a infinite loop
    printf("Hello world\n");
  }
  return 0;
} */



// While Loop


/*
#include<stdio.h>

int main() {
  int i = 1;
  while (i <= 5) {
    printf("Hello World\n");
    i++;
  }
  return 0;
} */



// do while Loop


/*
#include<stdio.h>

int main() {
  int i = 1;
  do {
    printf("%d\n", i);
    i++;
  } while (i <= 5);
  return 0;
} */



// Break Statement


/*
#include<stdio.h>

int main() {
  for (int i = 1; i <= 5; i++) {
    if (i == 3) {
      break;
    }
    printf("%d\n", i);
  }
  printf("End");
  return 0;
} */



// Continue Statements


/*
#include<stdio.h>

int main() {
  for (int i = 1; i <= 5; i++) {
    if (i == 3) {    // Skip this and move on
      continue;
    }
    printf("%d\n", i);
  }
  return 0;
} */



/***********************/
// Practice Set Chapter 4


// Print number from 0 to 10


/*
#include<stdio.h>

int main() {
  for (int i = 0; i <= 10; i = i++) {
    printf("%d\n", i);
  }
  return 0;
} */



// print the number from 0 to n and n will be input


/*
#include<stdio.h>

int main() {
  int i = 0, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (i <= n) {
    printf("%d\n", i);
    i++;
  }
  return 0;
} */



// Print sum of first n natural numbers


/*
#include<stdio.h>

int main() {
  int i = 0, n, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  do {
    sum += i;
    i++;
  } while (i <= n);
  printf("The sum is: %d\n", sum);
  for (int i = n; i >= 1; i--) {
    printf("%d\n", i);
  }
  return 0;
} */



// Make a table of input number


/*
#include<stdio.h>

int main() {
  int i = 1, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  do {
    printf("%d x %d = %d\n", n, i, n * i);
    i++;
  } while (i <= 10);
  return 0;
} */



// Keep taking input until it's an odd number


/*
#include<stdio.h>

int main() {
  for (int i = 1; ; i++) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 != 0) {
      break;
    }
  }
  printf("The number is odd\n");
  return 0;
} */



// Keep taking input until its multiple of 7


/*
#include<stdio.h>

int main() {
  for (int i = 1; ; i++) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 7 == 0) {
      break;
    }
  }
  printf("The number is multiple of 7\n");
  return 0;
} */



// Print all the number from 1 to 10 execpt 6


/*
#include<stdio.h>

int main() {
  for (int i = 1; i <= 10; i++) {
    if (i == 6) {
      continue;
    }
    printf("%d\n", i);
  }
  return 0;
} */



// Print all odd number comes between 


/*
#include<stdio.h>

int main() {
  for (int i = 5; i <= 50; i++) {
    if (i % 2 == 0) {
      continue;
    }
    printf("%d\n", i);
  }
  return 0;
} */



// Factorial oa a number n


/*
#include<stdio.h>

int main() {
  int n, fact = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  printf("Final factorial is %d\n", fact);
  return 0;
} */



// Print table of n in reverse


/*
#include<stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (int i = 10; i >= 1; i--) {
    printf("%d x %d = %d\n", n, i, i * n);
  }
  return 0;
} */



// Calculate the sum of all the numbers from 5 to 50


/*
#include<stdio.h>

int main() {
  int sum = 0;
  for (int i = 5; i <= 50; i++) {
    sum += i;
  }
  printf("%d\n", sum);
  return 0;
} */



//  Print pattern using nested loop


/*
#include<stdio.h>

int main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
} */



// Check if the number is prime or not


/*
#include<stdio.h>

int main() {
  int n, c;
  printf("Enter a number: ");
  scanf("%d", &n);
  
  for (int i = 1; i <= n; i++) {
    if (n % i == 0){
      c++;
    }
  }
  if (c != 2) {
        printf("n is a Prime number");
  }
  else {
         printf("n is not a Prime number");
  }
  return 0;
} */



// Print primr numbers in a range


/*
#include<stdio.h>

int main() {
  int min, max = 0;
  printf("Enter start number: ");
  scanf("%d", &min);
    printf("Enter end number: ");
  scanf("%d", &max);
  for(int i=min; i<=max; i++) {
    for(int j=2; j<=i; j++) {
      if (i == j) {
        printf("%d\n",i);
      } else if (i%j == 0) {
        break;
      }
    }
  }
  return 0;
} */
/***********************/



/**** Chapter 5 ****/
/**** Function and Recursion ****/


// Function    // Block of code that perform particualar task


/*
#include<stdio.h>

void printHello();    // Declaration/Prototype

int main() {
  printHello();       // Function call
  return 0;
}

void printHello() {   // Function Definition/code
  printf("Hello!");
} */



// Passing arguments using int fn


/*
#include<stdio.h>

int sum(int a, int b);

int main() {
  int a, b;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  int s = sum(a, b);
  printf("Sum is: %d\n", s);
  return 0;
}

int sum(int x, int y) {
  return x + y;
} */



// Printing table using void (int) fn


/*
#include<stdio.h>

void printTable(int n);

int main() {
  int n;
  printf("Enter first number: ");
  scanf("%d", &n);
  
  printTable(n);           // Argument/actual parameter
  return 0;
}
void printTable(int n) {   // Parameter/formal parameter
  for (int i = 1; i <= 10; i++) {
    printf("%d\n", i*n);
  }
} */



// NOTE
// Function can only return one value at a time
// Changes to parameters in a fn don't change the values in calling function    // Because a copy of argument is passed to the fn



// Changes in parameter dont change value in calling function


/*
#include<stdio.h>

void calculatePrice(float value);

int main() {
  float value = 100;
  calculatePrice(value);
  printf("Final price is: %f\n", value);
  return 0;
}
void calculatePrice(float value) {
  value = value + (0.18 * value);
  printf("Final price is: %f\n", value);
} */



// Recursion    // When a function calls itself, it's called recursion


/*
#include<stdio.h>

void hello(int count);

int main() {
  hello(5);
  return 0;
}

void hello(int count) {    // Recursive function
  if (count == 0) {        // Base case
    return;
  }
  printf("Hello World\n");
  hello(count - 1);
} */



/***********************/
// Practice Set Chapter 5


// 2 function on print hello one good bye


/*
#include<stdio.h>

void printHello();
void printGoodBye();

int main() {
  printHello();
  printGoodBye();
  return 0;
}

void printHello() {
  printf("Hello!\n");
}
void printGoodBye() {
  printf("Good Bye!\n");
} */



// Function that prints namaste if user is indian & bonjour if the user is french


/*
#include<stdio.h>

void namaste();
void bonjour();

int main() {
  char ch;
  printf("Enter i for Indian and f for French: ");
  scanf("%C", &ch);
  if (ch == 'i') {
    namaste();  
  } else if (ch == 'f') {
    bonjour();
  } else {
    printf("Please enter a valid char");
  }
  return 0;
}

void namaste() {
  printf("Namaste!\n");
}
void bonjour() {
  printf("Bonjour!\n");
} */



// Using library function calculate square of a given number


/*
#include<stdio.h>
#include<math.h>

int main() {
  int n = 4;
  printf("%f", pow(n, 2));
  return 0;
} */



// Function to calculate area of a square, circle & rectangle


/*
#include<stdio.h>

float areaSquare(float side);
float areaCircle(float radius);
float areaRectangle(float l, float b);

int main() {
  float side, radius, l, b;
  
  printf("Enter the side: ");
  scanf("%f", &side);
  printf("Enter the radius: ");
  scanf("%f", &radius);
  printf("Enter length: ");
  scanf("%f", &l);
  printf("Enter breath: ");
  scanf("%f", &b);
  
  printf("Area of square: %f\n", areaSquare(side));
  printf("Area of circle: %f\n", areaCircle(radius));
  printf("Area of rectangle: %f\n", areaRectangle(l, b));
  
  return 0;
}

float areaSquare(float side) {
  return side * side;
}
float areaCircle(float radius) {
  return 3.14 * radius * radius;
}
float areaRectangle(float l, float b) {
  return l * b;
} */



// Sum of first n natural numbers


/*
#include<stdio.h>

int sum(int n);

int main() {
  printf("Sum is: %d", sum(5));
  return 0;
}

int sum(int n) {
  if (n == 1) {
    return 1;
  }
  int sumNm1 = sum(n - 1);
  int sumN = sumNm1 + n;
  return sumN;
} */



// Factorial of n


/*
#include<stdio.h>

int fact(int n);

int main() {
  printf("Factorial is: %d", fact(5));
  return 0;
}

int fact(int n) {
  if (n == 1) {
    return 1;
  }
  int factNm1 = fact(n - 1);
  int factN = factNm1 * n;
  return factN;
} */



// function to convert celsius to fahrenheit


/*
#include<stdio.h>

float con(float c);

int main() {
  float f = con(0);
  printf("Celcius in fahrenheit is: %f", f);
  return 0;
}

float con(float c) {
  if(c == 1) {
    return 1;
  }
  float f = c * (9.0/5.0) + 32;
  return f;
} */



// Function to calculate percentage from marks science, maths & sanskrit


/*
#include<stdio.h>

float percentage(float sc, float m, float s);

int main() {
  printf("Percentage is: %f", percentage(59.00, 49.00, 68.00));
  return 0;
}

float percentage(float sc, float m, float s) {
  return ((sc + m + s) * 100) / 300;
} */



// Function to print n terms of a fibonacci sequence


/*
#include<stdio.h>

int fibonacci(int n);

int main() {
  printf("The fibonacci number is: %d\n", fibonacci(6));
  return 0;
}

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  
  int fibNm1 = fibonacci(n - 1);
  int fibNm2 = fibonacci(n - 2);
  int fibN = fibNm1 + fibNm2;
  // printf("The fibonacci of %d is: %d\n", n, fibN);
  return fibN;
} */



// Function to print n terms of a fibonacci sequence (using loops)


/*
#include<stdio.h>    // Remaining

int main() {
  int n = 2, fibN, fibNm1, fibNm2;
  for (int i = 0; i <= n; i++) {
    if (i <= 1) {
      n = i;
    } else {
      fibNm1 = n - 1;
      fibNm2 = n - 2;
      fibN = fibNm1 + fibNm2 - 1;
    }
  }
  printf("The fibonacci number is: %d\n", fibN);

  return 0;
} */



// Function to find sum of digits of a number


/*
#include<stdio.h>

int sum(int n) {
  int sum = 0;
  while (n != 0) {
      sum = sum + n % 10;
      n = n / 10;
  }
  return sum;
}

int main() {
  printf("Sum is: %d", sum(101));
  return 0;
} */



// Function to find square root of a number


/*
#include<stdio.h>

int sqroot(int n) {
  int sq = sqrt(n);
  return sq;
}

int main() {
  printf("Sum is: %d", sqroot(16));
  return 0;
} */



//Function to print "hot" or "cold" depends on the input temprature]


/*
#include<stdio.h>

int hc(int n) {
  if (n > 36) {
    printf("Hot");
  } else {
    printf("Cold");
  }
}

int main() {
  int n;
  printf("Enter tempreture: ");
  scanf("%d", &n);
  hc(n);
  return 0;
} */



// Make our own pow function


/*
#include<stdio.h>

int power(int n, int m) {
  int power = 1;
  for (int i = 1; i <= m; ++i) {
    power *= n;
  }
  printf("Function is: %d", power);
}

int main() {
  int n = 6, m = 2;
  power(n,m);
  return 0;
} */
/***********************/



/**** Chapter 6 ****/
/**** Pointers ****/


// Pointers
// A variable that stores the memory address of another variable



// Syntax of Pointer


/*
#include<stdio.h>

int main() {
  int age = 22;
  int *pointer = &age;    // * = value at address operator and & = address of operator
  int age1 = *pointer;
  printf("%d", age1);
  return 0;
} */



// Format Specifier


/*
#include<stdio.h>

int main() {
  int age = 22;
  int *pointer = &age;

  printf("%p\n", &age);
  printf("%u\n", &age);
  
  printf("%u\n", pointer);
  printf("%u\n", &pointer);
  
  printf("%d\n", age);
  printf("%d\n", *pointer);
  printf("%d\n", *(&age));
   
  return 0;
} */



// Pointer to poiner syntex


/*
#include<stdio.h>

int main(){
  float price = 100.00;
  float *pointer = &price;
  float **ppointer = &pointer;
  printf("%f", **ppointer);
  return 0;
}*/



// Pointer in Function Call


/*
#include<stdio.h>

void square(int n){
  n = n * n;
  printf("Square = %d\n", n);
}
void _square(int *n){
  *n = (*n) * (*n);
  printf("Square = %d\n", *n);
}

int main(){
  int number = 4;
  
  square(number);    // call by value
  printf("number = %d\n", number);

  _square(&number);  // call by reference
  printf("number = %d\n", number);
  return 0;
} */



/***********************/
// Practice Set Chapter 6


// Guess the output


/*
#include<stdio.h>

int main(){
  int x;
  int *pointer;

  pointer = &x;
  *pointer = 20;
  printf("x = %d\n", x);
  printf("*pointer = %d\n", *pointer);

  *pointer += 5;
  printf("now x = %d\n", x);
  printf("and *pointer = %d\n", *pointer);

  (*pointer)++;
  printf("now x = %d\n", x);
  printf("and *pointer = %d\n", *pointer);
  return 0;
} */



// Print value of i from its pointer to pointer


/*
#include<stdio.h>

int main(){
  int i = 5;
  int *ip = &i;
  int **ipp = &ip;

  printf("%d\n", **ipp);
  return 0;
} */



// Swap 2 numbers a and b


/*
#include<stdio.h>

void swap(int *i, *j, *k){
  *k = *i;
  *i = *j;
  *j = *k;
  printf("a = %d b = %d c = %d\n", *i, *j, *k);
}

int main(){
  int a = 5;
  int b = 6;
  int c;
  swap(&a, &b, &c);
  printf("a = %d b = %d c = %d\n", a, b, c);
  return 0;
} */



// Will the address output be same?


/*
#include<stdio.h>

void printAddress(int n);

int main(){
  int n = 4;

  printf("%p\n", &n);
  printAddress(n);
  return 0;
}

void printAddress(int n){
  printf("%p\n", &n);
} */



// function to calculate the sum. product, average of 2 numbers but output from main fn


/*
#include<stdio.h>

int spa(int n, int m, int *sum, int *product, int *average){
  *sum = n + m;
  *product = n * m;
  *average = *sum / 2;
}

int main(){
  int a = 5, b = 6;
  int sum, product, average;
  spa(a, b, &sum, &product, &average);
  printf("sum = %d, product = %d, average = %d", sum, product, average);
  return 0;
} */



// find the max between two numbers using pointers


/*
#include<stdio.h>

int main(){
  int a, b;
  int *n = &a, *m = &b;

  printf("Enter the first number:");
  scanf("%d", n);
  printf("Enter the second number:");
  scanf("%d", m);

  if (*n < *m) {
    printf("%d is greater than %d", *m, *n);
  } else if (*m < *n) {
    printf("%d is greater than %d", *n, *m);
  }
  return 0;
} */



// Print all the letters in english alphabet using a pointer


/*
#include<stdio.h>

int main(){
  char alphabet = 27;
  return 0;
} */
/***********************/



/**** Chapter 7 ****/
/**** Arrays ****/


// Arrays Syntax


/*
#include<stdio.h>

int main(){
  int marks[3] = {95, 96};
  scanf("%d", &marks[2]);
  printf("%d", marks[2]);
  return 0;
} */



// Pointer Arithmetic


/*
#include<stdio.h>

int main(){
  // int age = 40;
  // int *ptr = &age;
  // printf("pointer = %u\n", ptr);
  // ptr++;    // Pointer increment by 4 byte as per int
  // printf("pointer = %u\n", ptr);
  // ptr--;    // Pointer decrement by 4 byte as per int
  // printf("pointer = %u\n", ptr);
  // printf("-----------------\n");
  
  // float price = 40.00;
  // float *ptr1 = &price;
  // printf("pointer = %u\n", ptr1);
  // ptr1++;
  // printf("pointer = %u\n", ptr1);
  // ptr1--;
  // printf("pointer = %u\n", ptr1);
  // printf("-----------------\n");
  
  // char star = "*";
  // char *ptr2 = &star;
  // printf("pointer = %u\n", ptr2);
  // ptr2++;
  // printf("pointer = %u\n", ptr2);
  // ptr2--;
  // printf("pointer = %u\n", ptr2);

  int age = 23;
  int age2 = 24;
  int *ptr = &age;
  int *ptr2 = &age2;

  printf("1 = %u\n2 = %u\nDifference = %u\n", ptr, ptr2, ptr - ptr2);    // We can'd get difference b/w a in and a char or a float or int pointer should be of same data type
  // ptr2 = &age;
  printf("Comparison = %u\n", ptr == ptr2);

  // Array is a pointer
  // int arr [] = {20, 55};
  // int *ptr = &arr[0]; is equal to int *ptr = arr;
  return 0;
} */



// Traverse an Array


/*
#include<stdio.h>

int main(){
  int marks[5];

  int *ptr = &marks[0];
  for(int i = 0; i < 5; i++) {
    printf("%d index: ", i);
    scanf("%d", (ptr+i));
  }

  for(int i = 0; i < 5; i++) {
    printf("%d index = %d\n", i, marks[i]);    // This and (ptr+i) both are correct
  }
  return 0;
} */



// Arrays as Function Argument


/*
#include<stdio.h>

void arrEx(int arr[], int n) {    // Or void arrEx2(int *arr, int n) both are correct
  for(int i = 0; i < n; i++) {
    printf("%d\t", arr[i]);
  }
  printf("\n");
}

int main(){
  int arr[] = {5, 6, 7};
  arrEx(arr, 3);    // Here arr = &arr[0] 
  return 0;
} */



// Multidimensional Arrays


/*
#include<stdio.h>

int main() {
  // 2d Arrays
  int marks[2][3];    // It can be defined like this also => {{1, 3, 8}, {4, 5, 6}};
  marks[0][0] = 90;
  marks[0][1] = 56;
  marks[0][2] = 64;

  marks[1][0] = 89;
  marks[1][1] = 12;
  marks[1][2] = 23;

  printf("%d", marks[0][1]);
  return 0;
} */



/***********************/
// Practice Set Chapter 7


// Program to enter  price of 3 items & print their final cost with gst.


/*
#include<stdio.h>
int main(){
  float price[3];
  float final;
  float gst;

  printf("Enter the price of first item: ");
  scanf("%f", &price[0]);
  printf("Enter the price of second item: ");
  scanf("%f", &price[1]);
  printf("Enter the price of third item: ");
  scanf("%f", &price[2]);

  printf("Total price of first item: %f\n", price[0]+(0.18 * price[0]));
  printf("Total price of second item: %f\n", price[1]+(0.18 * price[1]));
  printf("Total price of third item: %f\n", price[2]+(0.18 * price[2]));
  return 0;
} */



// Function to count the number of odd numbers in an array


/*
#include<stdio.h>

void array(int arr[], int n) {
  int count = 0;
  for(int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      count++;
    }
  }
  printf("There is a total %d odd numbers in the array", count);
}

int main(){
  int arr[] = {5, 7, 45, 20};
  array(arr, 4);
  return 0;
} */



// For given array, what will be the output


/*
#include<stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  printf("%d", *(arr+2));    // Here * is value at address operator
  printf("%d", *(arr+5));
  return 0;
} */



// Function to reverse an array


/*
#include<stdio.h>

void reverse(int arr[], int n) {
  for (int i = 0; i < n / 2; i++) {
    int firstValue = arr[i];
    int lastvalue = arr[n-i-1];
    arr[i] = lastvalue;
    arr[n -i-1] = firstValue;
  }
  for (int i = 0; i < n; i++) {
      printf("%d\t", arr[i]);
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  reverse(arr, 5);
  return 0;
} */



// Program to store the first n fibonacci numbers


/*
#include<stdio.h>

int main() {
  int n;
  printf("Enter n (n>2): ");
  scanf("%d", &n);

  int fib[n];
  fib[0] = 0;
  fib[1] = 1;
  printf("%d\t", fib[0]);
  printf("%d\t", fib[1]);

  for (int i = 2; i < n; i++) {
    fib[i] = fib[i-1] + fib[i-2];
    printf("%d\t", fib[i]);
  }
  return 0;
} */



// Create a 2d array to store table of 2 and 3


/*
#include<stdio.h>

void tableGen(int arr[][10], int n, int m) {
  for (int i = 0; i < 10; i++) {
    arr[n][i] = m * (i + 1);
  }
}

int main() {
  int table[2][10];
  tableGen(table, 0, 2);
  tableGen(table, 1, 3);
  
  for (int i = 0; i < 10; i++) {
    printf("%d\t", table[0][i]);
  }
  printf("\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\t", table[1][i]);
  }
  printf("\n");
  return 0;
} */



// In an array find how many times x occur


/*
#include<stdio.h>

void count(int arr[], int n, int x) {
  int countX = 0;
  for (int i = 0; i <= n; i++) {
    if(arr[i] == x) {
      countX++;
    }
  }
  printf("%d", countX);
}

int main() {
  int arr[] = {1, 3, 5, 6, 4, 3, 4, 2, 4};
  count(arr, 9, 3);
  return 0;
} */



// Program to print the largest number in an array


/*
#include<stdio.h>

int main() {
  int arr[] = {1, 2, 3, 44, 54, 7, 9, 2};
  int big = 0;
  for (int i = 0; i < 8; i++) {
    if(big < arr[i]) {
        big = arr[i];
    }
  }
  printf("%d", big);
  return 0;
} */



// Program to insert element at the end of an arry


/*
#include<stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

  printf("Enter a number to insertin the array: ");
  scanf("%d", &arr[7 + 1]);

  for (int i = 0; i < 9; i++) {
    printf("%d", arr[i]);
  }
  return 0;
} */
/***********************/



/**** Chapter 8 ****/
/**** Strings ****/


// Syntax of Strings


/*
#include<stdio.h>

int main() {
  char name[] = {'M', 'a', 'y', 'a', 'n', 'k', 'r', 'a', 'j', '\0'};
  char surname[] = "Varma";
  
  return 0;
} */



// String Format Specifier


/*
#include<stdio.h>

int main() {
  char name[50];
  scanf("%s", name);
  printf("Your name is: %s\n", name);
  return 0;
} */



// gets(), fgets() and puts()


/*
#include<stdio.h>

int main() {
  char name[50];
  // gets(name);    // gets() is dangerous and removed
  fgets(name, 50, stdin);
  puts(name);
  return 0;
} */



// String using Pointers


/*
#include<stdio.h>

int main() {
  char *canChange = "Hello World";    // Can be reinitialized
  puts(canChange);
  canChange = "Hello";
  puts(canChange);

  char cannotChange[] = "Hello World!";    // Cannnot be reinitialized
  puts(cannotChange);
  // cannotChange = "Hello";    // Error
  return 0;
} */



// Standard Kibrary Function


/*
#include<stdio.h>
#include<string.h>

int main() {
  char firstStr[100] = "Mayank";
  char secondStr[] = "Minobic";
  
  int length = strlen(firstStr);    // 1st
  printf("Length is: %d\n", length);

  // strcpy(firstStr, secondStr);    // 2nd
  puts(firstStr);

  strcat(firstStr, secondStr);    // 3rd
  puts(firstStr);

  printf("%d\n", strcmp(firstStr, secondStr));    // 4th    // Strings are compare by their ASCII values
  return 0;
} */



/***********************/
// Practice Set Chapter 8


// Create a string firstName & lastName and print them via loop


/*
#include<stdio.h>

void printName(char arr[]) {
  for (int i = 0; arr[i] != '\0'; i++) {
    printf("%c", arr[i]);
  }
  printf(" ");
}

int main() {
  char firstName[] = "Mayankraj";
  char lastName[] = "Varma";

  printName(firstName);
  printName(lastName);
  return 0;
} */



// Ask user for first name and print and do with full name too


/*
#include<stdio.h>

int main() {
  char firstName[10], lastName[10];
  
  printf("Enter your first name: ");
  scanf("%s", firstName);
  printf("Enter your last name: ");
  scanf("%s", lastName);

  printf("Hello %s %s\n", firstName, lastName);
  return 0;
} */



// Program that inputs user name & print its length


/*
#include<stdio.h>

int printLength(char name[]) {
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count - 1;
}

int main() {
  char name[10];
  fgets(name, 10, stdin);
  printf("String has: %d words\n", printLength(name));
  return 0;
} */



// Take string input by using %c


/*
#include<stdio.h>

int main() {
  char str[10];
  char ch;
  int i = 0;

  for (i = 0; ch != '\n'; i++) {
    scanf("%c", &ch);
    str[i] =ch;
  }
  
  str[i] = '\0';
  puts(str);
  return 0;
} */



// Salt a password enterd by user


/*
#include<stdio.h>
#include<string.h>

void salting(char pass[]) {
  char salt[] = "mino";
  char newPass[100];
  
  strcpy(newPass, pass);
  strcat(newPass, salt);
  puts(newPass);
}

int main() {
  char pass[100];
  scanf("%s", pass);
  salting(pass);
  return 0;
} */



// Make a fn slice which takes string & return sliced string from index n to m


/*
#include<stdio.h>

void slicer(char str[], int n, int m) {
  char slice[10];
  int j = 0;
  
  for (int i = n; i <= m; i++, j++) {
    slice[j] = str[i];
  }
  slice[j] = '\0';
  puts(slice);
}

int main() {
  char str[] = "helloworld";
  slicer(str, 3, 6);
  return 0;
} */



// Fn to count the no. of vowels in string


/*
#include<stdio.h>

void vCounter(char str[]) {
  int count = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
      count++;
    }
  }
  printf("String has %d vowels", count);
}

int main() {
  char str[] = "Mayank";
  vCounter(str);
  return 0;
} */



// Check if a given character is present in a string or not


/*
#include<stdio.h>

void cCheck(char str[], char ch) {
  int check = 0;
  
  for (int i = 0; str[i] != '\0'; i++) {
    if (ch == str[i]) {
      check++;
    }
  }

  if (check >= 1) {
      printf("Yes, %c is present in the string", ch);
    } else {
      printf("No, %c is not present in the string", ch);
    }
}

int main() {
  char str[] = "mayank";
  char ch = 'm';
  cCheck(str, ch);
  return 0;
} */



// Program to convert all lowercase vowels to uppercase in a string


/*
#include<stdio.h>

void vChanger(char str[]) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
      str[i] = str[i] - 32;
    }
  }
  printf("%s", str);
}

int main() {
  char str[100] = "Mayank";
  vChanger(str);
  return 0;
} */



// Program to print highest frequency charter in a string


/*
#include<stdio.h>

void frequency(char str[]) {
  char result;
  int i;
  int max = 0;
  int freq[256] = {0};
  
  for (int i = 0; str[i] != '\0'; i++) {
    freq[str[i]]++;
  }
  for (int i = 0; str[i] != '\0'; i++) {
    if (max <= freq[str[i]]) {
      max = freq[str[i]];
      result = str[i];
    }
  }
  printf("Character %c comes %d times", result, max);
}

int main() {
  char str[] = "Mayank";
  frequency(str);
  return 0;
} */



// Program to remove blanck space from string


/*
#include<stdio.h>

void sRemover(char str[]) {
  int count = 0;
  char space = ' ';

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] != space) {
      str[count++] = str[i];
    }
  }
  str[count] = '\0';
  printf("%s", str);
}

int main() {
  char str[] = "M ayankraj Va rma ";
  sRemover(str);
  return 0;
} */



// Program to replace lowercase letters to uppercase & vice versa in string


/*
#include<stdio.h>

void cChanger(char str[]) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 32;
    } else if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + 32;
    }
  }
  printf("%s", str);
}

int main() {
  char str[100] = "Mayank";
  cChanger(str);
  return 0;
} */
/***********************/



/**** Chapter 9 ****/
/**** Structures ****/


// Structure Syntax


/*
#include<stdio.h>
#include<stdio.h>

struct student {
  char name[100];
  int roll;
  float cgpa;
};

int main() {
  struct student s1;
  // s1.name = "Mayank";    // Wrong
  strcpy(s1.name, "Mayank");    // Have to use string fn
  s1.roll = 18;
  s1.cgpa = 9.3;

  printf("Student name = %s\n", s1.name);
  printf("Student roll no = %d\n", s1.roll);
  printf("Student cgpa = %f\n", s1.cgpa);
  return 0;
} */



// Array of Structures 


/*
#include<stdio.h>

struct student {
  char name[100];
  int roll;
  float cgpa;
};

int main() {
  struct student ece[10];
  strcpy(ece[0].name, "Mayank");
  ece[0].roll = 18;
  ece[0].cgpa = 9.3;

  printf("Student name = %s\n", ece[0].name);
  printf("Student roll no = %d\n", ece[0].roll);
  printf("Student cgpa = %f\n", ece[0].cgpa);
  return 0;
} */



// Initializing Structures


/*
#include<stdio.h>

struct student {
  char name[100];
  int roll;
  float cgpa;
};

int main() {
  struct student s1 = {"Mayank", 18, 9.2};
  printf("Student name = %s\n", s1.name);
  return 0;
} */



// Pointers to Structures


/*
#include<stdio.h>

struct student {
  char name[100];
  int roll;
  float cgpa;
};

int main() {
  struct student s1 = {"Mayank", 18, 9.2};
  
  struct student *ptr;
  ptr = &s1;
  printf("Student name = %s\n", (*ptr).name);
  printf("%p\n", ptr);
  return 0;
} */



// Arrow Operator


/*
#include<stdio.h>

struct student {
  char name[100];
  int roll;
  float cgpa;
};

int main() {
  struct student s1 = {"Mayank", 18, 9.2};
  
  struct student *ptr = &s1;
  printf("Student name = %s\n", ptr->name);
  printf("Student roll no = %d\n", ptr->roll);
  printf("Student cgpa = %f\n", ptr->cgpa);
  return 0;
} */



// Passing Structure to Function


/*
#include<stdio.h>

struct student {
  char name[100];
  int roll;
  float cgpa;
};

void printInfo(struct student s1) {    // This should be defined after the structure cuz compiler reads the code line by line
  struct student *ptr = &s1;
  printf("Student name = %s\n", ptr->name);
  printf("Student roll no = %d\n", ptr->roll);
  printf("Student cgpa = %f\n", ptr->cgpa);

  s1.roll = 20;    // It wont change cuz structures passed by call by value
}

int main() {
  struct student s1 = {"Mayank", 18, 9.2};
  printInfo(s1);
  printf("Student Roll no = %d", s1.roll);
  return 0;
} */



// Keyword typedef


/*
#include<stdio.h>
#include<string.h>

typedef struct computerEngineeringStudent {
  char name[100];
  int roll;
  float cgpa;
} coe;

int main() {
  coe s1;
  strcpy(s1.name, "Mayank");
  s1.roll = 19;
  s1.cgpa = 9.5;

  printf("Student name = %s\n", s1.name);
  printf("Student roll no = %d\n", s1.roll);
  printf("Student cgpa = %f\n", s1.cgpa);
  return 0;
} */



/***********************/
// Practice Set Chapter 9


// Program to store data of 3 students


/*
#include<stdio.h>

struct student {
  char name[100];
  int roll;
  float cgpa;
};

int main() {
  struct student s1;
  strcpy(s1.name, "Mayank");
  s1.roll = 18;
  s1.cgpa = 9.3;

  printf("Student name = %s\n", s1.name);
  printf("Student roll no = %d\n", s1.roll);
  printf("Student cgpa = %f\n", s1.cgpa);
  printf("---------------------------\n");
  struct student s2;
  strcpy(s2.name, "Minobic");
  s2.roll = 19;
  s2.cgpa = 8.43;

  printf("Student name = %s\n", s2.name);
  printf("Student roll no = %d\n", s2.roll);
  printf("Student cgpa = %f\n", s2.cgpa);
  printf("---------------------------\n");
  struct student s3;
  strcpy(s3.name, "Minobot");
  s3.roll = 20;
  s3.cgpa = 6.9;

  printf("Student name = %s\n", s3.name);
  printf("Student roll no = %d\n", s3.roll);
  printf("Student cgpa = %f\n", s3.cgpa);
  return 0;
} */



// Enter address (house no,  block, city, state) of 5 people


/*
#include<stdio.h>

struct address {
  int house;
  int block;
  char city[50];
  char state[50];
};

void printAddress(struct address adrs) {
  printf("Address is: %d, %d, %s, %s\n", adrs.house, adrs.block, adrs.city, adrs.state);
}

int main() {
  struct address adrs[5];

  printf("Enter info for 1:\n");
  scanf("%d", &adrs[0].house);
  scanf("%d", &adrs[0].block);
  scanf("%s", adrs[0].city);
  scanf("%s", adrs[0].state);

  printf("Enter info for 2:\n");
  scanf("%d", &adrs[1].house);
  scanf("%d", &adrs[1].block);
  scanf("%s", adrs[1].city);
  scanf("%s", adrs[1].state);

  printf("Enter info for 3:\n");
  scanf("%d", &adrs[2].house);
  scanf("%d", &adrs[2].block);
  scanf("%s", adrs[2].city);
  scanf("%s", adrs[2].state);

  printf("Enter info for 4:\n");
  scanf("%d", &adrs[3].house);
  scanf("%d", &adrs[3].block);
  scanf("%s", adrs[3].city);
  scanf("%s", adrs[3].state);

  printf("Enter info for 5:\n");
  scanf("%d", &adrs[4].house);
  scanf("%d", &adrs[4].block);
  scanf("%s", adrs[4].city);
  scanf("%s", adrs[4].state);

  printAddress(adrs[0]);
  printAddress(adrs[1]);
  printAddress(adrs[2]);
  printAddress(adrs[3]);
  printAddress(adrs[4]);
  return 0;
} */



// Create structure to store vectors then make a function to return sum of 2 vectors


/*
#include<stdio.h>

struct vectors {
  int x;
  int y;
};

void calcSum(struct vectors v1, struct vectors v2, struct vectors sum) {
  sum.x = v1.x + v2.x;
  sum.y = v1.y + v2.y;

  printf("Sum of x is: %d\n", sum.x);
  printf("Sum of y is: %d\n", sum.y);
}

int main(){
  struct vectors v1 = {5, 4};
  struct vectors v2 = {6, 9};
  struct vectors sum = {0};

  calcSum(v1, v2, sum);
  return 0;
} */



// Create a structure to store complex numbers by using arrow operator

/*
#include<stdio.h>

struct complex {
  int real;
  int img;
};

int main() {
  struct complex num1 = {4, 6};
  struct complex *ptr = &num1;

  printf("Real part = %d\n", ptr->real);
  printf("Img part = %d\n", ptr->img);
  return 0;
} */



// Make structure to store bank account info of a customer of abc bank with alias


/*
#include<stdio.h>

typedef struct account {
  char name[50];
  int accNo;
} acc;

int main() {
  acc acc1 = {"Mayank", 123};
  acc acc2 = {"Minobic", 124};
  acc acc3 = {"Minobot", 125};

  printf("Name no = %s\n", acc1.name);
  printf("Acc no = %d\n", acc1.accNo);
  return 0;
} */



// Make a system to store all info about college student


/*
#include<stdio.h>

typedef struct computerScienceStudent {
  char name[50];
  double marks;
} cs;

typedef struct imformationTechnologyStudent {
  char name[50];
  double marks;
} it;

int main() {
  cs cs1 = {"Mayank", 7.10};
  cs cs2 = {"Shivansh", 7.85};
  cs cs3 = {"Ujass", 6.75};
  cs cs4 = {"Sneha", 7.10};
  cs cs5 = {"Kirti", 7.10};

  it is1 = {"Bhumi", 7.95};
  it is2 = {"anonymus", 6.58};
  it is3 = {"Rahul", 7.10};

  printf("CS student name: %s\n", cs1.name);
  printf("CS student marks: %f\n", cs1.marks);
  printf("CS student name: %s\n", cs2.name);
  printf("CS student marks: %f\n", cs2.marks);
  printf("CS student name: %s\n", cs3.name);
  printf("CS student marks: %f\n", cs3.marks);
  printf("CS student name: %s\n", cs4.name);
  printf("CS student marks: %f\n", cs4.marks);
  printf("CS student name: %s\n", cs5.name);
  printf("CS student marks: %f\n", cs5.marks);
  printf("--------------------------------\n");
  printf("IT student name: %s\n", is1.name);
  printf("IT student marks: %f\n", is1.marks);
  printf("IT student name: %s\n", is2.name);
  printf("IT student marks: %f\n", is2.marks);
  printf("IT student name: %s\n", is3.name);
  printf("IT student marks: %f\n", is3.marks);
  return 0;
} */
/***********************/



/**** Chapter 10 ****/
/**** File Input Output ****/


// File Pointer


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("text.txt", "r");    // fopen("file name", "mode") this ude to open a file
  fclose(fptr);    // fclose(file name) to close the file

  // File Opening Modes
  // 1) "r"  read
  // 2) "rb" read in binary
  // 3) "w"  write              // Overwrites the data
  // 4) "wb" write in binary    // Overwrites the data
  // 5) "a"  append             // Add data with the existing data
  return 0;
} */



// Best practice before opening a file


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("Mtest.txt", "r");

  if (fptr == NULL) {
    printf("File dosen't exist");
  } else {
    fclose(fptr);
  }
  return 0;
} */



// Reading from a File


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "r");

  char ch;
  // fscanf(fptr, "%c", &ch);

  // printf("Character = %c", ch);

  printf("%c\n", fgetc(fptr));    // This also can be use if u want to read char by char

  fclose(fptr);
  return 0;
} */



// Writing to a file


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "w");

  // fprintf(fptr, "%s", "Minobic");
  
  fputc('M', fptr);    // This used to get input char by char but simple to use

  fclose(fptr);
  return 0;
} */



// EOF (End of File)


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "r");
  char ch;
  ch = fgetc(fptr);
  while (ch != EOF) {
    printf("%c", ch);
    ch  = fgetc(fptr);
  }
  printf("\n");
  
  fclose(fptr);
  return 0;
} */



/***********************/
// Practice Set Chapter 10


// Program to read 5 integers from a file


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "r");

  int n;
  fscanf(fptr, "%d", &n);
  printf("Number = %d\n", n);
  fscanf(fptr, "%d", &n);
  printf("Number = %d\n", n);
  fscanf(fptr, "%d", &n);
  printf("Number = %d\n", n);
  fscanf(fptr, "%d", &n);
  printf("Number = %d\n", n);
  fscanf(fptr, "%d", &n);
  printf("Number = %d\n", n);  

  fclose(fptr);
  return 0;
} */



// Program to input student info from a user & enter it to a file


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("Student.txt", "w");

  char name[50];
  int age;
  float cgpa;
  
  printf("Enter name: ");
  scanf("%s", name);
  printf("Enter age: ");
  scanf("%d", &age);
  printf("Enter cgpa: ");
  scanf("%f", &cgpa);

  fprintf(fptr, "Student name = %s\n", name);
  fprintf(fptr, "Student age = %d\n", age);
  fprintf(fptr, "Student cgpa = %f", cgpa);

  fclose(fptr);
  return 0;
} */



// Program to write all the odd numbers from 1 to n in a file


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("odd.txt", "w");

  int n;
  printf("Entear a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      fprintf(fptr, "%d\n", i);
    }
  }
  
  fclose(fptr);
  return 0;
} */



// Two numbers are in file program to replace them with their sum


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "r");

  int n, m;
  fscanf(fptr, "%d", &n);
  fscanf(fptr, "%d", &m);
  printf("%d %d", n, m);
  
  fclose(fptr);

  fptr = fopen("test.txt", "w");

  fprintf(fptr, "%d", n + m);
  
  fclose(fptr);
  return 0;
} */



// Program to read string from file & ooutput to the user


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("text.txt", "r");

  char ch;
  ch = fgetc(fptr);
  for (int i = 0; ch != EOF; i++) {
    printf("%c", ch);
    ch = fgetc(fptr);
  }
  
  fclose(fptr);
  return 0;
} */



// Replace data in file of Q(a) with the numbers of vowels in the string


/*
#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("text.txt", "r");

  int count = 0;
  char ch;
  ch = fgetc(fptr);
  
  for (int i = 0; ch != EOF; i++) {
    if (ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      count++;
    }
    ch = fgetc(fptr);
  }

  fclose(fptr);

  fptr = fopen("text.txt", "w");

  fprintf(fptr, "%d", count);
  
  fclose(fptr);
  return 0;
} */



// Format the info of 5 students (name, marks, cgpa, course) in a table like structure in a file


/*
#include<stdio.h>

struct student {
  char name[50];
  int marks;
  float cgpa;
  char course[50];
};

int main() {
  struct student s[5] = {
    {"Mayank", 71, 7.10, "Computer Science"},
    {"Shivansh", 78, 7.85, "Computer Science"},
    {"Ujaas", 65, 6.56, "Computer Science"},
    {"Sneha", 77, 7.75, "Computer Science"},
    {"Bhumi", 79, 7.95, "Information Technology"}
  };
  
  FILE *file;
  file = fopen("student-info.txt", "w");

  fprintf(file, " Name\t\t Marks\t\tCgpa\t\t\t\t\tCourse\n");
  fprintf(file, "--------------------------------------------\n");
  for (int i = 0; i < 5; i++) {
    fprintf(file, "%s\t\t%d\t\t%f\t\t%s\n", s->name, s->marks, s->cgpa, s->course);
  }
  fprintf(file, "--------------------------------------------");

  fclose(file);

  printf("Data has been successfully written to the file.\n");
  return 0;
} */
/***********************/



/**** Chapter 11 ****/
/**** Dynamic Memory Allocation ****/


// Function for DMA
// 1) malloc()    // Mem allocation
// 2) calloc()    // Continues alloc
// 3) free()      // Frees alloc mem after work done
// 4) realloc()   // Re-alloc



// Malloc Function


/*
#include<stdio.h>
#include<stdlib.h>

int main() {
  int *ptr;
  ptr = (int *) malloc(5 * sizeof(int));

  ptr[0] = 1;
  ptr[1] = 2;
  ptr[2] = 3;
  ptr[3] = 4;
  ptr[4] = 5;

  for (int i = 0; i < 5; i++) {
    printf("%d\n", ptr[i]);
  }
  return 0;
} */



// Calloc Function


/*
#include<stdio.h>
#include<stdlib.h>

int main() {
  int *ptr;
  ptr = (int *) calloc(5, sizeof(int));    // Initilizes all the int to 0

  for (int i = 0; i < 5; i++) {
    printf("%d\n", ptr[i]);
  }
  return 0;
} */



// Free Function


/*
#include<stdio.h>
#include<stdlib.h>

int main() {
  int n;
  int *mem;
  
  printf("Enter a number: ");
  scanf("%d", &n);

  mem = (int *) calloc(n, sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("%d\n", mem[i]);
  }

  free(mem);

  mem = (int *) calloc(2, sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("%d\n", mem[i]);
  }
  return 0;
} */



// Realloc Function


/*
#include<stdio.h>
#include<stdlib.h>

int main() {
  int *mem;
  mem = (int *) malloc(5 * sizeof(int));
  mem = realloc(mem, 10 * sizeof(int));
  return 0;
} */



/***********************/
// Practice Set Chapter 11


// Program to allocate memory to store 5 price


/*
#include<stdio.h>
#include<stdlib.h>

int main() {
  float *prices;
  prices = (float *) malloc(5 * sizeof(float));

  prices[0] = 1.2;
  prices[1] = 2.3;
  prices[2] = 3.4;
  prices[3] = 4.5;
  prices[4] = 5.6;

  for (int i = 0; i < 5; i++) {
    printf("%f\n", prices[i]);
  }
  return 0;
} */



//  Program to allocate memory of size n, where n is entered by the user


/*
#include<stdio.h>
#include<stdlib.h>

int main() {
  int n;
  int *mem;
  
  printf("Enter a number: ");
  scanf("%d", &n);

  mem = (int *) calloc(n, sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("%d\n", mem[i]);
  }
  return 0;
} */



// Allocate memory for 5 numbers then dynamically increase it to 8 numbers


/*
#include<stdio.h>
#include<stdlib.h>

int main() {
  int *mem;
  
  mem = (int *) calloc(5, sizeof(int));

  for (int i = 0; i < 5; i++) {
    printf("%d\n", mem[i]);
  }
  printf("----------------\n");
  mem = realloc(mem, 8);

  for (int i = 0; i < 8; i++) {
    printf("%d\n", mem[i]);
  }
  return 0;
} */



// Create array of size 5 by calloc & enter its values from user


/*
#include<stdio.h>
#include<stdlib.h>

int main() {
  int *arr;
  arr = (int *) calloc(5, sizeof(int));

  printf("Enter five numbers: ");
  
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 5; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
} */



// Allocate memory to store first 5 odd numbers then reallocate it to store first 6 even number.


/*
#include<stdio.h>
#include<stdlib.h>

int main() {
  int *mem;
  mem = (int *) calloc(5, sizeof(int));

  mem[0] = 1;
  mem[1] = 3;
  mem[2] = 5;
  mem[3] = 7;
  mem[4] = 9;

  for (int i = 0; i < 5; i++) {
    printf("%d\t", mem[i]);
  }

  free(mem);
  printf("\n----------------------\n");
  mem = realloc(mem, 6 * sizeof(int));

  mem[0] = 2;
  mem[1] = 4;
  mem[2] = 6;
  mem[3] = 8;
  mem[4] = 10;
  mem[5] = 12;

  for (int i = 0; i < 6; i++) {
    printf("%d\t", mem[i]);
  }

  free(mem);
  return 0;
} */
/***********************/
