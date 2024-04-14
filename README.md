# C++ Collatz Sequence

This repository contains a C++ program that computes the length of the Collatz sequence for numbers up to 1,000,000. The program identifies the number that produces the longest sequence.

## Program Description

The Collatz conjecture is a conjecture in mathematics that concerns a sequence defined as follows: start with any positive integer `n`. Then each term is obtained from the previous term as follows: if the previous term is even, the next term is one half of the previous term. If the previous term is odd, the next term is `3` times the previous term plus `1`. The conjecture is that no matter what value of `n`, the sequence will always reach `1`.

The program `collatz_len` function calculates the length of the Collatz sequence for a given number `a`. The `main` function iterates through numbers from `2` to `1,000,000`, computes the sequence length for each, and identifies the number with the maximum sequence length.

## Usage

Compile the program with a C++ compiler and run the executable. The output will display the maximum sequence length and the number that produces this sequence.

## Author

- Written by mht83

