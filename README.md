# MathKit

A menu-driven console application developed in C that provides several mathematical and statistical tools. It allows users to perform calculations through an interactive menu with keyboard navigation.

## Features

### 1. Measures of Central Tendency
Calculates the three fundamental measures of central tendency using user-provided numbers.

- **Mean** – Calculates the average of all entered numbers.
- **Median** – Determines the middle value after sorting the numbers in ascending order.
- **Mode** – Identifies the most frequently occurring number.
- Accepts 10 to 50 numbers.

### 2. Fibonacci Sequence
Generates a Fibonacci sequence based on user input.

- Allows users to specify the number of terms.
- Allows users to specify the starting term.
- Displays the generated sequence.

### 3. Factorial Calculator
Calculates the factorial of a given positive integer.

- Uses an iterative approach.
- Displays the factorial result.

### 4. Permutation Calculator
Calculates the number of possible arrangements when selecting objects from a given set.

- Accepts the total number of objects (`n`).
- Accepts the number of objects to arrange (`r`).
- Validates the input values.
- Includes a basic overflow detection mechanism.

### 5. Interactive Console Menu
Provides a keyboard-controlled navigation system.

- Uses the **Up and Down arrow keys** to navigate.
- Highlights the currently selected option.
- Uses **Enter** to select an option.
- Allows users to return to the main menu after completing a calculation.

## Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **Libraries:**
  - `stdio.h` – Standard input and output operations.
  - `conio.h` – Keyboard input using `getch()`.
  - `stdlib.h` – Utility functions, including `system()`.
  - `windows.h` – Windows console manipulation and text highlighting.

## How to Run

1. Clone or download this repository.
2. Open the project folder in Visual Studio Code or another C development environment.
3. Make sure GCC and the required Windows development headers are installed.
4. Compile the source file:

   ```bash
   gcc Code/math.c -o C-Code/math.exe
   ```

5. Run the executable:

   ```bash
   ./C-Code/math.exe
   ```

## Requirements

- Windows operating system.
- GCC compiler (MinGW-w64 recommended).
- C development environment.
- Keyboard with functional arrow keys and Enter key.

## Project Purpose

This project was developed to practice fundamental C programming concepts, including:

- Loops and conditional statements.
- Arrays and array manipulation.
- User input and output.
- Mathematical algorithms.
- Sorting and searching techniques.
- Functions and code organization.
- Basic overflow checking.
- Console-based user interface development.

---

**Note:** This application is designed for Windows because it uses Windows-specific console functionality through `windows.h` and `conio.h`.

Developed as a programming project to demonstrate the practical application of fundamental C programming concepts.
