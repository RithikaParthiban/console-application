# ATM Simulation in C++

A simple console-based ATM simulation built using C++. The program allows users to check their balance, deposit money, withdraw money, and exit the ATM.

## Features

* Check current account balance
* Deposit money
* Withdraw money
* Validate deposit and withdrawal amounts
* Prevent withdrawals exceeding the available balance
* Interactive menu-driven interface
* Maintain balance history using a `vector`

## Technologies Used

* C++
* Standard Template Library (STL)
* `vector`
* `switch-case`
* `do-while` loop
* Conditional statements
* Console input/output

## How It Works

The program starts with an initial balance of `10000.0`.

The user is presented with four options:

```text
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
```

### 1. Check Balance

Displays the user's current account balance.

### 2. Deposit

The user enters an amount to deposit.

* The amount must be greater than `0`.
* The amount is added to the current balance.
* The updated balance is displayed.

### 3. Withdraw

The user enters an amount to withdraw.

The program checks:

* The amount must be greater than `0`.
* The withdrawal amount must not exceed the available balance.

If both conditions are satisfied, the amount is deducted from the balance.

### 4. Exit

Terminates the program and displays a thank-you message.

## Concepts Demonstrated

This project demonstrates the following C++ concepts:

* Variables and data types
* Vectors
* Loops
* `switch` statements
* `if-else` conditions
* User input and output
* Input validation
* Arithmetic operations
* STL containers

## How to Run

### 1. Clone the Repository

```bash
git clone <your-repository-url>
cd <repository-folder>
```

### 2. Compile the Program

Using `g++`:

```bash
g++ main.cpp -o atm
```

### 3. Run the Program

On Windows:

```bash
atm
```

On Linux/macOS:

```bash
./atm
```

## Example

```text
===================
Welcome to the ATM!
===================
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Please enter your choice: 1

Your balance is: 10000
```

Example deposit:

```text
Please enter your choice: 2
Enter amount to deposit: 5000

Deposit successful! Your new balance is: 15000
```

Example withdrawal:

```text
Please enter your choice: 3
Enter amount to withdraw: 2000

Withdrawal successful! Your new balance is: 13000
```

## Project Structure

```text
ATM-Simulation/
│
├── main.cpp
└── README.md
```

## Possible Improvements

The project can be extended with:

* PIN authentication
* Multiple user accounts
* Account numbers
* Transaction history
* Money transfers
* Daily withdrawal limits
* File-based data persistence
* Object-oriented implementation using classes
* Exception handling
* Database integration

## Author

Rithika P
