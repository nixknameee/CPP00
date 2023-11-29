# ***CPP00 - C++ Module 00***

## Overview
This GitHub repository contains the exercises and solutions for "C++ Module 00". The focus here is on foundational C++ concepts such as namespaces, classes, member functions, stdio streams, initialization lists, and other basic programming elements.

## Table of Contents
1. Introduction
2. General Rules
3. Exercises
    - Exercise 00: Megaphone
    - Exercise 01: My Awesome PhoneBook
    - Exercise 02: The Job Of Your Dreams
4. Submission and Peer Evaluation

## Introduction
C++ is a general-purpose programming language, an extension of C, or "C with Classes". The modules aim to introduce Object-Oriented Programming, starting with C++. We adhere to the C++98 standard for simplicity and clarity.

## General Rules

### Compiling
Compile with c++ and flags -Wall -Wextra -Werror.
Code must still compile with -std=c++98 flag.

### Formatting and Naming Conventions
Exercise directories: ex00, ex01, etc.
Class names in UpperCamelCase.
Use .hpp/.h for header files and .cpp for implementation.
Include guards to prevent double inclusion.

### Allowed/Forbidden Elements
Standard library use is encouraged, but C++11 and later features, as well as external libraries like Boost, are forbidden.
Avoid *printf(), *alloc(), and free().
using namespace <ns_name> and friend keywords are forbidden.

## Exercises

### ***Exercise 00: Megaphone***
Develop a megaphone program that capitalizes input strings.

### ***Exercise 01: My Awesome PhoneBook***
Create a phonebook application using classes PhoneBook and Contact.

### ***Exercise 02: The Job Of Your Dreams***
Recreate a missing Account.cpp file based on given Account.hpp and tests.cpp files.
