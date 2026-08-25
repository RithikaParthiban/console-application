# ATM Simulation in C++

A simple **console-based ATM simulation** built using C++. The project demonstrates core **Object-Oriented Programming (OOP)** concepts by modeling users and ATM operations using classes.

The application allows users to create accounts, log in using their account number and PIN, check their balance, deposit money, withdraw money, and exit the ATM.

## Features

* Create a new bank account
* Automatically generate an account number
* PIN-based user authentication
* Login using account number and PIN
* Check current account balance
* Deposit money
* Withdraw money
* Validate deposit and withdrawal amounts
* Prevent withdrawals exceeding the available balance
* Support multiple users
* Store users using a `vector`
* Interactive menu-driven interface
* Object-oriented implementation using classes

## Technologies Used

* C++
* Standard Template Library (STL)
* `vector`
* Classes and objects
* Constructors
* Encapsulation
* Pointers
* `switch-case`
* `do-while` loops
* Conditional statements
* Console input/output

## How It Works

When the program starts, the user is presented with the main ATM menu:

```text
1. Login
2. Create Account
3. Exit
```

### 1. Create Account

The user can create a new account by providing:

* Name
* PIN

The program automatically generates an account number and creates a new `User` object with an initial balance of `0.0`.

Example:

```text
Enter your name:
Rithika

Enter your PIN:
1234

Account created successfully!
Your account number is: 1001
```

### 2. Login

The user can log in using their:

* Account number
* PIN

The ATM searches through the stored users and verifies whether the account number and PIN match.

If the credentials are valid, the user is successfully logged in.

```text
Enter your account number:
1001

Enter your PIN:
1234

Login successful!
```

If the credentials are incorrect:

```text
Invalid account number or PIN!
```

### 3. ATM Operations

After successful login, the user gets access to the following menu:

```text
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
```

#### Check Balance

Displays the current account balance.

```text
Your balance is: 5000
```

#### Deposit

The user can deposit money into their account.

The amount must be greater than `0`.

Example:

```text
Enter amount to deposit: 5000

Deposit successful!
Your new balance is: 5000
```

#### Withdraw

The user can withdraw money from their account.

The program checks:

* The withdrawal amount must be greater than `0`.
* The withdrawal amount must not exceed the available balance.

Example:

```text
Enter amount to withdraw: 2000

Withdrawal successful!
Your new balance is: 3000
```

If the user attempts to withdraw more than their balance:

```text
Insufficient balance!
```

#### Exit

The user can exit their ATM session and return to the main menu.

```text
=============================
Thank you for using the ATM!
=============================
```

## Project Structure

```text
ATM-Simulation/
│
├── main.cpp
└── README.md
```

## Classes Used

### `User`

The `User` class represents a bank account holder.

It stores:

```text
accountNumber
name
pin
balance
```

The class provides methods for:

* Getting account information
* Updating the user's name
* Updating the PIN
* Checking balance
* Depositing money
* Withdrawing money

### `Atm`

The `Atm` class manages the users registered with the ATM.

It contains:

```cpp
vector<User> users;
```

The class provides functionality to:

* Create new accounts
* Generate account numbers
* Store users
* Authenticate users during login

The `login()` function returns a pointer to the authenticated `User` object:

```cpp
User* login(int accNum, int pin);
```

This allows the main program to perform ATM operations directly on the logged-in user.

## Object-Oriented Programming Concepts Demonstrated

This project demonstrates several important C++ OOP concepts.

### Encapsulation

User information such as the PIN and balance is kept private inside the `User` class.

```cpp
private:
    int accountNumber;
    string name;
    int pin;
    double balance;
```

Access is provided through public member functions.

### Classes and Objects

The project uses two classes:

```cpp
class User
class Atm
```

Objects are created from these classes to represent users and the ATM system.

### Constructors

The `User` constructor initializes the account information:

```cpp
User(int accNum, string name, int pin, double balance)
```

### Pointers

The login function returns a pointer to the authenticated user:

```cpp
User* login(int accNum, int pin)
```

The pointer is then used to access the user's ATM operations.

### STL Vector

The ATM stores multiple users using:

```cpp
vector<User> users;
```

This allows the application to maintain multiple accounts during program execution.

## Input Validation

The program performs basic validation for financial transactions.

### Deposit Validation

```cpp
if(amount <= 0)
```

Deposits must be greater than zero.

### Withdrawal Validation

The program checks whether:

```cpp
amount <= 0
```

and whether:

```cpp
amount > balance
```

This prevents invalid withdrawals and overdrawing the account.

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

#### Windows

```bash
atm
```

or:

```bash
.\atm.exe
```

#### Linux/macOS

```bash
./atm
```

## Example

```text
===================
Welcome to the ATM!
===================

1.Login
2.Create Account
3.Exit

Please enter your choice: 2

Enter your name:
Rithika

Enter your PIN:
1234

Account created successfully!
Your account number is: 1001
```

Login:

```text
1.Login
2.Create Account
3.Exit

Please enter your choice: 1

Enter your account number:
1001

Enter your PIN:
1234

Login successful!

1. Check Balance
2. Deposit
3. Withdraw
4. Exit
```

Deposit:

```text
Please enter your choice: 2

Enter amount to deposit: 5000

Deposit successful!
Your new balance is: 5000
```

Withdrawal:

```text
Please enter your choice: 3

Enter amount to withdraw: 2000

Withdrawal successful!
Your new balance is: 3000
```

## Limitations

This is a basic educational ATM simulation. The current version has some limitations:

* User data exists only while the program is running.
* Data is not stored in a file or database.
* PINs are stored as plain integers and are not encrypted.
* Account numbers are generated based on the number of users.
* There is no transaction history.
* There are no transfer operations between accounts.
* There is no limit on the number of login attempts.
* The application uses console-based input/output.

## Possible Improvements

The project can be extended with:

* Transaction history
* Money transfers between accounts
* File-based data persistence
* Database integration
* Password/PIN hashing
* Maximum login attempt limits
* Daily withdrawal limits
* Account deletion
* Change PIN functionality
* Update account information
* Mini statement generation
* Different account types
* Exception handling
* Separate `.h` and `.cpp` files
* Improved input validation
* Better account number generation
* Admin functionality

## Future OOP Improvements

The project can also be expanded into a more complete banking system using additional classes such as:

```text
User
 └── Account
      ├── SavingsAccount
      └── CurrentAccount

ATM
Transaction
Bank
```

This would allow the project to demonstrate more advanced concepts such as:

* Inheritance
* Polymorphism
* Abstraction
* Composition
* Exception handling
* File handling
* Database connectivity

## Learning Outcomes

Through this project, the following C++ concepts can be practiced:

* Classes and objects
* Constructors
* Access specifiers
* Encapsulation
* Member functions
* Pointers
* STL `vector`
* Loops
* Conditional statements
* `switch-case`
* Input validation
* Basic authentication
* Object-oriented program design

## Author

**Rithika P**
