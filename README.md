# Bank Application

This application allows users to manage their banking transactions. It handles customer information, account details, and balances. Additionally, it includes functionalities such as withdrawal, deposit, and saving data to a file.

![Screenshot of Bank Application](https://github.com/Eren3567/Course-First-Repo/blob/main/image_1/Banka%20uygulamasi%20menu%CC%88su%CC%88.png)

__Technologies Used__

- C++
- File Handling
- Classes and Objects
- Control Flow

# Features

- View all Customer Information: Display names, account details, and balances of existing customers.
- Withdrawal Transaction: Perform a withdrawal transaction from a specific account.
- Deposit Transaction: Perform a deposit transaction to a specific account.
- Save Data to File: Save existing customer information to a specified file.

## Usage

1. **View All Customer Information**: List the names, account information, and balances of existing customers.
2. **Withdrawal Transaction**: Perform a withdrawal transaction from a specific account.
3. **Deposit Transaction**: Perform a deposit transaction to a specific account.
4. **Save Data to File**: Save existing customer information to a specified file.

[Github Link Here](Bank_Application)

# Arithmetic Operation Calculator

This simple calculator application allows users to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. It uses a `while` loop and a `goto` statement for operation handling.

![alt text](https://github.com/Eren3567/Course-First-Repo/blob/main/image_1/ikinci%20sayi%20gir.png)



__Features__

- Perform Arithmetic Operations: Add, subtract, multiply, or divide two numbers.
- Continue Operation: Allows users to continue performing operations until manually stopped.

## Usage

1. **Enter First Number**: Input the first number for the operation.
2. **Enter Second Number**: Input the second number for the operation.
3. **Select Operation**: Choose the desired arithmetic operation (`+`, `-`, `*`, `/`).
4. **View Result**: The result of the operation will be displayed.
5. **Repeat or Stop**: Choose to continue with another operation or stop the program.

[GitHub Repository Link](Switch_Case_Calculate.txt)

# Day of the Week Checker

This program allows users to input a number representing a day of the week (1-7) and then determines whether it's a weekday or weekend day. It utilizes a `switch` statement for efficient handling of different cases.

__Features__

- Determine Day Type: Weekday or weekend.
- Error Handling: Provides feedback for invalid inputs.

## Usage

1. **Input Day Number**: Enter a number representing a day of the week (1-7).
2. **Check Result**: The program will display whether the input corresponds to a weekday or a weekend day.
3. **Repeat or Stop**: Choose whether to check another day or exit the program.


This structure outlines the functionality, features, and usage instructions for a program that checks whether a given number corresponds to a weekday or a weekend day.

[GitHub Repository Link](https://github.com/Eren3567/Course-First-Repo/blob/main/Select_Day.txt)

# Exponential Calculator

This program calculates the result of raising a given base number to a specified power using the `pow()` function from the `<math.h>` library. It prompts users to input the base and the exponent and then displays the result of the exponentiation.

__Features__

- Exponential Calculation: Calculates the result of raising a number to a power.
- Input Validation: Accepts base and exponent inputs.
- Error Handling: Provides feedback for invalid inputs.

## Usage

1. **Enter Base**: Input the base number.
2. **Enter Exponent**: Input the exponent (power).
3. **View Result**: The program will display the result of the exponentiation.
4. **Repeat or Stop**: Choose whether to calculate another exponent or exit the program.

[GitHub Repository Link](https://github.com/Eren3567/Course-First-Repo/blob/main/first.txt)

This structure outlines the functionality, features, and usage instructions for a program that calculates the result of raising a number to a power using the `pow()` function.

# Enum Example: Application Levels

This program demonstrates the use of enums in C to represent different application levels. It defines three levels: low, medium, and high, each with a corresponding numeric value.

__Features__

- Enum Definition: Defines three application levels using the `enum` keyword.
- Value Assignment: Assigns integer values to each enum member.
- Enum Initialization: Initializes a variable with one of the enum values.

## Usage

The program initializes a variable `uygulamasi` with the value corresponding to the "medium" level (`orta`). It then prints the numeric value associated with the "medium" level.


This structure outlines the usage of enums to represent different levels within an application, along with their corresponding integer values.

[GitHub Repository Link](https://github.com/Eren3567/Course-First-Repo/blob/main/Enum.txt)


# Object-Oriented Area Calculation

This program calculates the area of a rectangle using object-oriented programming concepts in C++.

__Features__

- Object Creation: Defines a class `Hesapyap` to represent a rectangle and its area calculation.
- User Input: Accepts user input for the height and width of the rectangle.
- Area Calculation: Calculates the area of the rectangle using the provided height and width.
- Output Display: Displays the calculated area of the rectangle.

## Usage

1. **Enter Height**: Input the height of the rectangle.
2. **Enter Width**: Input the width of the rectangle.
3. **View Result**: The program will calculate and display the area of the rectangle.


This structure outlines a simple C++ program that demonstrates object-oriented area calculation for rectangles.

[GitHub Repository Link](https://github.com/Eren3567/Course-First-Repo/blob/main/Area_with_Function.txt)

# Inheritance in Tank Class

This C++ program demonstrates inheritance and access control in a tank class hierarchy. It defines a base class `tank` and two derived classes `M22` and `M20`. 

__Features__

- Base Class: `tank` class represents the basic properties of a tank, such as its name and length.
- Derived Class: `M22` class inherits from `tank` and adds additional attributes such as `deger`, `seritek`, and `kurmapozisyonu`.
- Access Control: The `deger` attribute is declared as `protected`, allowing access within the class and its subclasses.
- Public Attributes: The `seritek` and `kurmapozisyonu` attributes are declared as public in both derived classes.
- Object Creation: Objects of classes `M22` and `M20` are created, and their attributes are accessed and modified.

## Usage

1. **Object Creation**: Objects of classes `M22` and `M20` are created.
2. **Attribute Modification**: Attributes of the objects are modified.
3. **View Result**: The program displays the modified attribute values.


This structure outlines a simple C++ program that demonstrates inheritance and access control in a tank class hierarchy.

[GitHub Repository Link](https://github.com/Eren3567/Course-First-Repo/blob/main/Inheritance_Tank_Type.txt)

# Reference in C++

This C++ program demonstrates the usage of references. It defines an integer variable `sayi` and creates a reference `deneme` to it. 

__Features__

- Reference Creation: A reference `deneme` is created and initialized to refer to the integer variable `sayi`.
- Reference Modification: The value of the reference `deneme` is modified, which in turn modifies the value of the original variable `sayi`.
- Output: The program prints the updated value of the variable `sayi`.

## Usage

1. **Reference Creation**: A reference `deneme` is created and initialized to refer to the integer variable `sayi`.
2. **Modification**: The value of the reference `deneme` is modified.
3. **View Result**: The program prints the updated value of the original variable `sayi`.

This structure outlines a simple C++ program that demonstrates the usage of references.

[GitHub Repository Link](https://github.com/Eren3567/Course-First-Repo/blob/main/References_Assigning.txt)

# Object Upcasting in C++

This C++ program demonstrates object upcasting, where a derived class object is treated as a base class object. It defines two classes `tank` and `M20`, where `M20` is derived from `tank`. 

__Features__

- Object Creation: Instances of classes `M20` and `M22` are created.
- Upcasting: An object of the derived class `M20` is upcasted to a pointer of the base class `tank`.
- Access: The program accesses and modifies the member variable `uzunlugu` of the upcasted object.
- Output: The program prints the updated value of the member variable `uzunlugu` of the original object.

## Usage

1. **Object Creation**: Instances of classes `M20` and `M22` are created.
2. **Upcasting**: An object of the derived class `M20` is upcasted to a pointer of the base class `tank`.
3. **Access and Modification**: The program accesses and modifies the member variable `uzunlugu` of the upcasted object.
4. **View Result**: The program prints the updated value of the member variable `uzunlugu` of the original object.

This structure outlines a simple C++ program that demonstrates object upcasting.


[GitHub Repository Link](https://github.com/Eren3567/Course-First-Repo/blob/main/Upconversion_Object-Oriented.txt)

# Virtual Method Usage in C++

This C++ program demonstrates the usage of virtual methods, which allows polymorphic behavior in a program. It defines two classes `tank` and its derived classes `M20` and `M22`. The `tank` class has a pure virtual method `ses1()`, which is overridden in the derived classes.

__Features__

- Polymorphic Behavior: The program uses virtual methods to achieve polymorphic behavior.
- Abstract Class: The `tank` class acts as an abstract class with a pure virtual method.
- Derived Classes: Two derived classes `M20` and `M22` are defined, each implementing the `ses1()` method differently.
- Function Call: A function `ates()` is defined that takes a pointer to the base class `tank` and calls the `ses1()` method.

## Usage

1. **Object Creation**: Instances of classes `M20` and `M22` are created.
2. **Function Call**: The `ates()` function is called with pointers to objects of both `M20` and `M22` classes.
3. **Polymorphic Behavior**: The virtual method `ses1()` is invoked for each object, resulting in different outputs based on the actual type of the object.

This structure outlines a C++ program demonstrating the usage of virtual methods to achieve polymorphic behavior.

[GitHub Repository Link](https://github.com/Eren3567/Course-First-Repo/blob/main/Virtual_Methods.txt)



