# Push_swap

**`push_swap`** is a C program that sorts integers using two stacks and a limited set of operations. The goal is to find the smallest sequence of operations to sort the stack in ascending order with minimal moves. This project is a practical exercise in sorting algorithms and optimization.

## Table of Contents

- [Foreword](#foreword)
- [Introduction](#introduction)
- [Objectives](#objectives)
- [Common Instructions](#common-instructions)
- [Mandatory Part](#mandatory-part)
  - [Rules](#rules)
  - [Example](#example)
  - [Program Description](#program-description)
  - [Benchmark](#benchmark)
- [Bonus Part](#bonus-part)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Foreword

The `push_swap` project challenges you to implement an efficient sorting algorithm using a set of stack operations. This task will test your understanding of algorithms, complexity, and optimization strategies.

## Introduction

The `push_swap` project requires you to sort a stack of integers using only two stacks (`a` and `b`) and a defined set of operations. You will write a C program that outputs the smallest sequence of instructions needed to sort the stack.

## Objectives

- Implement a sorting algorithm using stack operations.
- Minimize the number of operations required to sort the stack.
- Understand and apply algorithms and their complexities in practical scenarios.

## Common Instructions

- The project must be written in C.
- Follow the Norm strictly.
- Ensure your code is free of segmentation faults, double frees, or memory leaks.
- Use a Makefile for compilation with `-Wall`, `-Wextra`, and `-Werror`.
- The Makefile must include the rules: `NAME`, `all`, `clean`, `fclean`, and `re`.
- Implement the program with no global variables.
- Use the `ft_printf` function if necessary, but do not rely on any other external libraries.

## Mandatory Part

### Rules

- You have two stacks, `a` and `b`.
- At the start:
  - Stack `a` contains a list of unique integers (negative or positive).
  - Stack `b` is empty.
- The objective is to sort stack `a` in ascending order using the following operations:
  - **sa**: Swap the top two elements of stack `a`.
  - **sb**: Swap the top two elements of stack `b`.
  - **ss**: Perform `sa` and `sb` simultaneously.
  - **pa**: Push the top element from `b` to `a`.
  - **pb**: Push the top element from `a` to `b`.
  - **ra**: Rotate stack `a` up by one.
  - **rb**: Rotate stack `b` up by one.
  - **rr**: Perform `ra` and `rb` simultaneously.
  - **rra**: Reverse rotate stack `a` down by one.
  - **rrb**: Reverse rotate stack `b` down by one.
  - **rrr**: Perform `rra` and `rrb` simultaneously.

### Example

**Initial State:**
Stack a: 2 1 3 6 5 8
Stack b: _

markdown
Copy code

**Operations:**

1. `sa`:
Stack a: 1 2 3 6 5 8
Stack b: _

markdown
Copy code

2. `pb pb pb`:
Stack a: 6 5 8
Stack b: 3 2 1

markdown
Copy code

3. `ra rb` (equivalent to `rr`):
Stack a: 5 8 6
Stack b: 2 1 3

markdown
Copy code

4. `rra rrb` (equivalent to `rrr`):
Stack a: 6 5 8
Stack b: 1 2 3

markdown
Copy code

5. `sa`:
Stack a: 5 6 8
Stack b: 1 2 3

markdown
Copy code

6. `pa pa pa`:
Stack a: 1 2 3 5 6 8
Stack b: _

markdown
Copy code

### Program Description

- **Program Name:** `push_swap`
- **Files to Submit:** `Makefile`, `*.h`, `*.c`
- **Compilation:**

```bash
cc -Wall -Wextra -Werror *.c -o push_swap
Arguments: A list of integers for stack a.
Output: The smallest sequence of operations to sort stack a.
Error Handling: Print "Error" and exit if:
Arguments are not integers.
Arguments are out of integer range or are duplicates.
Benchmark
Minimal Validation: Sort 100 random integers in fewer than 700 operations.
Maximal Validation: Sort 500 random integers in fewer than 5500 operations.
Bonus Part
Checker Program
The bonus part involves implementing a checker program to verify the correctness of your push_swap program. The checker will use the provided instructions to check if the sorting is correctly performed.

Installation
Clone the Repository:

bash
Copy code
git clone https://github.com/yourusername/push_swap.git
cd push_swap
Build the Project:

bash
Copy code
make
Clean Up:

bash
Copy code
make clean
Full Clean:

bash
Copy code
make fclean
Rebuild:

bash
Copy code
make re
Usage
To run the push_swap program:

bash
Copy code
./push_swap 2 1 3 6 5 8
The program will output the list of instructions required to sort the stack.

