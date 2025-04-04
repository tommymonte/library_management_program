
# Library Management Program

## Overview
This program implements a simple library management system using two primary classes: `Libro` (Book) and `Biblioteca` (Library). The program allows users to add, remove, and search for books using a command-line interface.

## Structure and Functionality

### **Libro Class**
- Represents a book with attributes:
  - **Title**
  - **Author**
  - **ISBN**
- Provides getter methods to retrieve book information.

### **Biblioteca Class**
- Manages a collection of books using a map where the **ISBN** is used as a unique key.
- Implements the following methods:
  
  1. **addBook(title, author, ISBN)**
     - Creates a new `Libro` object and adds it to the library collection.
  2. **removeBook(ISBN)**
     - Searches for a book by ISBN and removes it from the collection if found.
  3. **findBook(title)**
     - Searches for a book by title and returns the book's details if found.

### **Main Program**
- Uses an integer variable `comando` to receive user input.
- Executes corresponding operations based on the value of `comando`:
  - `1`: Add a new book.
  - `2`: Remove a book by ISBN.
  - `3`: Find book details by title.
  - `4`: Exit the program.
- Loops until the user enters `4` to terminate the program.

## Example Usage
```plaintext
Insert command:
1
Insert Title, Author, ISBN:
Title Name xxxabc
Book added!

Insert command:
...
...
```

## Requirements
- C++ compiler (if implemented in C++)
- Standard input/output handling for user interaction

## Future Improvements
- Implement file storage to persist books between sessions.
- Add user authentication for multi-user access.
- Enhance search functionality with more criteria.

This project provides a simple yet effective way to manage a small library of books through a command-line interface.

