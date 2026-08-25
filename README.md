# ATM Simulation in C++

A console-based ATM simulation built with C++. This project demonstrates basic OOP concepts such as **encapsulation, abstraction, classes, objects, pointers, and STL vectors**.

## Features

* Create a bank account
* Automatically generate account numbers
* Login using account number and PIN
* Check balance
* Deposit money
* Withdraw money
* Validate deposit and withdrawal amounts
* Prevent withdrawals above the available balance
* Support multiple users
* Menu-driven console interface
* Separate `.h` and `.cpp` files

## Technologies

* C++
* STL `vector`
* OOP
* Header and source files
* Console I/O

## Project Structure

```text id="j3nq0d"
ATM-Simulation/
│
├── main.cpp
├── User.h
├── User.cpp
├── Atm.h
├── Atm.cpp
└── README.md
```

### File Responsibilities

**`User.h`**

* Declares the `User` class and its functions.

**`User.cpp`**

* Implements the `User` class functions.
* Handles balance, deposits, and withdrawals.

**`Atm.h`**

* Declares the `Atm` class.

**`Atm.cpp`**

* Implements account creation and login.
* Stores users using `vector<User>`.

**`main.cpp`**

* Handles menus, user input, and program flow.

## OOP Concepts

### Encapsulation

Account details are private inside `User`.

```cpp
private:
    int accountNumber;
    string name;
    int pin;
    double balance;
```

They are accessed through public member functions.

### Abstraction

The internal implementation of `User` and `Atm` is hidden from `main.cpp`.

For example, `main.cpp` only needs to call:

```cpp
currUser->deposit(amount);
```

It doesn't need to know how the deposit is implemented.

### Separation of Interface and Implementation

Class declarations are stored in `.h` files and implementations are stored in `.cpp` files.

```text id="j8f7qk"
User.h  → User declaration
User.cpp → User implementation

Atm.h   → Atm declaration
Atm.cpp → Atm implementation
```

## How It Works

### Main Menu

```text id="6q6qxm"
1. Login
2. Create Account
3. Exit
```

### Create Account

The user enters their name and PIN. The ATM creates a new account with a balance of `0.0`.

### Login

The user enters their account number and PIN. The ATM searches its stored users and authenticates the user.

### ATM Menu

```text id="n1gkpe"
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
```

### Deposit

The amount must be greater than `0`.

### Withdraw

The amount must:

* Be greater than `0`
* Not exceed the current balance

## Compile and Run

### Compile

Since the project has multiple `.cpp` files:

```bash id="e8xw3u"
g++ main.cpp User.cpp Atm.cpp -o atm
```

### Run

**Windows:**

```bash id="z6h7tq"
.\atm.exe
```

**Linux/macOS:**

```bash id="7h0zqj"
./atm
```

## Limitations

* Data is lost when the program exits.
* No database or file storage.
* PINs are stored as plain integers.
* No transaction history.
* No money transfers.
* No login attempt limit.
* Basic input validation only.

## Future Improvements

* File/database persistence
* Transaction history
* Money transfers
* Change PIN
* Login attempt limits
* Transaction limits
* Exception handling
* Different account types
* Inheritance and polymorphism
* Admin functionality

## Author

**Rithika P**
