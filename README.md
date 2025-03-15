# Homework0. Tutorial

## Overview

In this project, your task is to understand the submission of assignments using GitHub Classroom. Please complete your answers for the two problem sets: 1) SQL Practice and 2) C++ Programming.

See this [PDF](hw0.pdf) file.

## Problem 1. SQL Practice
In this problem, you need to construct a set of SQL queries for analyzing a database that will be provided to you. 
For this, we use the MySQL sample database (i.e., `classicmodels`). 
Please write your own SQL query in to each SQL files located in the `prob1/submission` directory.
** DO NOT MODIFY SOLUTIONS DIRECTORY**


## Problem 2. C++ Programming

Here, we use very simple calculator project to understand how auto-grading system works. 
For this, you need to write your own code.
You need to modify only `include/calc.h` file.
For example, you need to modify `return 0` to `return a+b`. 

```
...

/* add function */
// [Description] This function takes two parameters a and b, and returns their sum.
// [Hint] return a+b haha
template <typename T>
T Calculator<T>::add(T a, T b) {

        /* write your own code here */
        return 0;
}
```
### Prerequisite

You need `cmake` build tool. Please install `cmake`

- Ubuntu
```
sudo apt-get install cmake
```
- Mac
```
brew install cmake
```
- Windows
```
https://cmake.org/download/
```

### Build

```
cd prob2
mkdir bld && cd bld
cmake ..
make -j
```

### Run

```
./kudb <test number>
```

## Submission

1. Complete your tasks for `prob1` and `prob2`.

2. Commit and Push
| You can commit and push as you can before the deadline For final commit message for final submission, please set the commit message as submission-student-id (e.g., `git commit -m "submission-1234567"`)
```
git add .
git commit -m "submission-student-id"
git push
```

3. Check your Github action workflow log.
You can view the log in the `Actions` tab of your Github repository.


## Late Submission Policy

- 75% : 1 day late
- 50% : 2 days late
- 25% : 3 days late
- 0% : 4days and more

## Warning

-	Do not use ChatGPT.
-	Do not copy other student’s answer.
-	Do not collaborate other students. This is an individual project (No groups).
-	Do not modify any files in solutions directory in this repository.
-	We will evaluate the answer by comparing the output files. 
Please make sure to always verify your answer properly. (No partial points)

