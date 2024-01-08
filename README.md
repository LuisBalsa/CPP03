# CPP03  ClapTrap Inheritance Project

## Overview
This project focuses on implementing classes in C++ with a primary emphasis on inheritance. The programming exercises are organized into different modules, each introducing new concepts and building upon the previous ones. The central objective is to familiarize learners with Object-Oriented Programming (OOP) using C++98 standards.

## Project Structure
The project is divided into multiple exercises, each involving the creation and extension of classes. The exercises and their corresponding components are as follows:

### Exercise 00: Aaaaand... OPEN!
- **ClapTrap class:**
  - Implementation of a base class with private attributes.
  - Public member functions for attacking, taking damage, and being repaired.
  - Proper messages during construction, destruction, and function calls.
- **Tests:**
  - Custom tests to verify the functionality of the ClapTrap class.

### Exercise 01: Serena, my love!
- **ScavTrap class:**
  - Derived class from ClapTrap, inheriting attributes and functions.
  - Override necessary functions and add a new member function `guardGate`.
- **Tests:**
  - Demonstration of proper construction/destruction chaining.

### Exercise 02: Repetitive work
- **FragTrap class:**
  - Derived class from ClapTrap, inheriting attributes and functions.
  - Customization of construction/destruction messages and addition of `highFivesGuys` member function.
- **Tests:**
  - Additional tests to validate the FragTrap class.

### Exercise 03: Now it’s weird!
- **DiamondTrap class:**
  - Constructed from both FragTrap and ScavTrap, inheriting attributes and functions.
  - Addition of a new member function `whoAmI` for displaying both DiamondTrap and ClapTrap names.
  - Special attention to the unique creation of the ClapTrap subobject within DiamondTrap.
- **Tests:**
  - Thorough tests for the DiamondTrap class.

## Code Explanation

### `ClapTrap` Class (Exercise 00)
- Constructors and destructor: Default, parameterized, copy, and destructor.
- Operators: Assignment operator.
- Get functions: Retrieve name, hit points, energy points, and attack damage.
- Member functions: Attack, take damage, be repaired, print status, and check if depleted.

### `ScavTrap` Class (Exercise 01)
- Inherits from ClapTrap.
- Additional member function: `guardGate`.
- Overrides necessary functions.

### `FragTrap` Class (Exercise 02)
- Inherits from ClapTrap.
- Additional member function: `highFivesGuys`.
- Overrides necessary functions.

### `DiamondTrap` Class (Exercise 03)
- Inherits from both FragTrap and ScavTrap.
- Additional member function: `whoAmI`.
- Specialized construction involving a ClapTrap subobject.

### Main Functions (main.cpp)
- `pressEnter`: A utility function to wait for user input.
- `titleHeader`: Displays a formatted header with a provided message.
- `main`: The main function demonstrating the functionality of each class and exercise.

## Building and Running
To compile and run the project, navigate to the exercise directory (e.g., `ex00`, `ex01`, etc.) and use the provided Makefile:

```bash
make
./a.out
```

This will compile the source files, generate an executable (`a.out`), and run the program.

## Testing
Each exercise includes tests within its respective `main.cpp` file. After building the project, run the executable to observe the output and verify the correct behavior of the implemented classes.

## Detailed Function Explanation
1. `main`: Orchestrates the execution of tests and demonstrates the functionality of each class.
2. `pressEnter`: A utility function to wait for user input, enhancing the readability of the program.
3. `titleHeader`: Displays a formatted header for better visual separation of different sections in the output.
