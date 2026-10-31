# Git and GitHub Assignment

## Student Details
- Name: Amogh Koushik
- Roll Number: BT25CSE219
- Section: CSE C

## Assignment Description
This repository contains the completed exercises for the Git and GitHub assignment. It demonstrates version control, repository management, and GitHub collaboration.

Each exercise is a small C++ program. Every exercise was done on its own branch, linked to a GitHub issue, and merged into main through a pull request.

## Completed Exercises
1. Exercise 01 - Simple Calculator (exercise-01): takes two numbers and an operator and prints the result. Handles division by zero, invalid operator and non-numeric input.
2. Exercise 02 - Prime Numbers in a Range (exercise-02): prints all primes between L and R and the total count.
3. Exercise 03 - Array Statistics (exercise-03): reads n integers and prints sum, average, minimum, maximum and the sorted array.

## Repository Structure

    .
    ├── README.md
    ├── git-commands.md
    ├── .gitignore
    ├── exercise-01/
    │   ├── calculator.cpp
    │   ├── input.txt
    │   └── output.txt
    ├── exercise-02/
    │   ├── primes.cpp
    │   ├── input.txt
    │   └── output.txt
    └── exercise-03/
        ├── array_stats.cpp
        ├── input.txt
        └── output.txt

## Compilation and Execution
Requirement: g++ with C++17 support.

Exercise 01

    cd exercise-01
    g++ -std=c++17 -Wall calculator.cpp -o calculator
    ./calculator < input.txt

Exercise 02

    cd exercise-02
    g++ -std=c++17 -Wall primes.cpp -o primes
    ./primes < input.txt

Exercise 03

    cd exercise-03
    g++ -std=c++17 -Wall array_stats.cpp -o array_stats
    ./array_stats < input.txt

The programs can also be run without `< input.txt` to enter values manually. On Windows the executable is created as `.exe`. Sample output for each exercise is in its `output.txt` file.

## GitHub Activities

### Issues
- [#1 Exercise 01: Simple calculator](https://github.com/Amogh-Koushik/git-practice-BT25CSE219/issues/1)
- [#2 Exercise 02: Prime numbers in a range](https://github.com/Amogh-Koushik/git-practice-BT25CSE219/issues/2)
- [#3 Exercise 03: Array statistics](https://github.com/Amogh-Koushik/git-practice-BT25CSE219/issues/3)
- [#4 Complete README and git-commands.md](https://github.com/Amogh-Koushik/git-practice-BT25CSE219/issues/4)

### Pull Requests
- [#5 Add exercise 01: simple calculator](https://github.com/Amogh-Koushik/git-practice-BT25CSE219/pull/5)
- [#6 Add exercise 02: primes in a range](https://github.com/Amogh-Koushik/git-practice-BT25CSE219/pull/6)
- [#7 Add exercise 03: array statistics](https://github.com/Amogh-Koushik/git-practice-BT25CSE219/pull/7)
- [#8 Complete README and Git documentation](https://github.com/Amogh-Koushik/git-practice-BT25CSE219/pull/8)

## Merge Conflict
A merge conflict occurred in README.md while merging the exercise-02 branch, because exercise-01 and exercise-02 both edited the same line. It was resolved by keeping both changes. Full details are in [git-commands.md](git-commands.md#merge-conflict-faced).
