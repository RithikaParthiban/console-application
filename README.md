# ATM Simulation in C++

A console-based ATM simulation built with C++. This project demonstrates **OOP, encapsulation, abstraction, pointers, STL vectors, and file persistence**.

## Features

* Create a bank account
* Automatically generate account numbers
* Login using account number and PIN
* Check balance
* Deposit money
* Withdraw money
* Validate deposit and withdrawal amounts
* Prevent withdrawals above available balance
* Support multiple users
* Persistent account storage using a binary file
* Menu-driven console interface

## Technologies

* C++
* OOP
* STL `vector`
* Binary file I/O
* `fstream`

## Project Structure

```text
ATM-Simulation/
│
├── main.cpp
├── user.h
├── user.cpp
├── atm.h
├── atm.cpp
├── userRepo.h
├── userRepo.cpp
├── .gitignore
└── README.md
```

### File Responsibilities

* **`user.h / user.cpp`** — User data and account operations
* **`atm.h / atm.cpp`** — Account creation, login, and ATM operations
* **`userRepo.h / userRepo.cpp`** — Saving and loading user data
* **`main.cpp`** — Console menus and program flow

## Persistence

User account data is stored in `users.bin` using binary file I/O.

When the application starts, existing users are loaded from the file. Account data is saved after account creation and transactions.

```text
Program
   ↓
userRepo
   ↓
users.bin
```

`users.bin` is excluded from Git using `.gitignore` because it contains runtime user data.

## How to Run

### Compile

```bash
g++ main.cpp user.cpp atm.cpp userRepo.cpp -o atm
```

### Run

**Windows:**

```bash
.\atm.exe
```

**Linux/macOS:**

```bash
./atm
```

## Limitations

* PINs are currently stored as plain integers
* No transaction history
* No money transfers
* Basic input validation
* Binary file storage is used instead of a database

## Future Improvements

* Transaction history
* Money transfers
* Change PIN
* Login attempt limits
* Better input validation
* Exception handling
* Secure PIN hashing
* Database integration

## Author

**Rithika P**
