<p align="center">
   <img src="https://github.com/vtiquet/holbertonschool-printf/blob/main/Holberton-Logo.svg" width=40% height=40%/>
</p>

# 🚀 holbertonschool-printf Project
This project is a custom implementation of the famous C `printf` function.

## Table of Contents
- [Project Description](#-project-description)
- [Requirements](#-requirements)
- [Features](#-features)
- [Flowchart et Snippets](#-flowchart-et-Snippets)
- [Project Structure](#-project-structure)
- [Author](#-author)

## 📝 Project Description
`_printf` is a variadic function that produces formatted output to the standard output stream (`stdout`). This project was completed as part of the Holberton School curriculum. The goal is to recreate the behavior of `printf` for a subset of its features, while adhering to strict coding standards (Betty style) and using only a limited set of allowed functions.

## ✅ Requirements
### General
- **Allowed Editors**: `vi`, `vim`, `emacs`
- **Compilation Environment**: Ubuntu 20.04 LTS
- **Compiler**: GCC using the options (e.g: `-Wall -Werror -Wextra -pedantic -std=gnu89`)

### ⚙️ Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

### Code Standards
- All files must end with a new line
- Use Betty coding style (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- Maximum of 5 functions per file
- All function prototypes in `main.h`
- Header files must use include guards

### Authorized Functions and macros
- `write (man 2 write)`
- `malloc (man 3 malloc)`
- `free (man 3 free)`
- `va_start (man 3 va_start)`
- `va_end (man 3 va_end)`
- `va_copy (man 3 va_copy)`
- `va_arg (man 3 va_arg)`

## ✨ Features
- Custom implementation of `printf`
- Supports multiple format specifiers:
  - `%c`: Character printing
  - `%s`: String printing
  - `%%`: Percent sign printing
  - `%d` and `%i`: Integer printing

## 📊 Flowchart et Snippets

<img src="https://github.com/vtiquet/holbertonschool-printf/blob/main/FlowChart%20_printf.jpg" width=70% height=70%/>

### Test file
- main testing file with all the specifiers given on the project page.
<img src="https://github.com/vtiquet/holbertonschool-printf/blob/main/Snippet%20input.png" width=40% height=40%> 

### Output
- The output of this testing file after the implementation of `%c`, `%s`, `%%` specifiers.
<img src="https://github.com/vtiquet/holbertonschool-printf/blob/main/Snippet%20output%20v0.png" width=40% height=40%>

- The output of this testing file after the implementation of `%d`, `%i` specifiers.
<img src="https://github.com/vtiquet/holbertonschool-printf/blob/main/Snippet%20output%20v1.png" width=40% height=40%>

## 📦 Project Structure
- [_printf.c](https://github.com/vtiquet/holbertonschool-printf/blob/main/_printf.c): function that produces output according to a format
- [which_handler.c](https://github.com/vtiquet/holbertonschool-printf/blob/main/which_handler.c): Format specifier handler functions
- [_printc.c](https://github.com/vtiquet/holbertonschool-printf/blob/main/_printc.c): function that print a charater.
- [_prints.c](https://github.com/vtiquet/holbertonschool-printf/blob/main/_prints.c): function that print a string.
- [_printp.c](https://github.com/vtiquet/holbertonschool-printf/blob/main/_printp.c): function that print a '%'.
- [_printi.c](https://github.com/vtiquet/holbertonschool-printf/blob/main/_printi.c): function that print an unsigned int.
- [_putchar.c](https://github.com/vtiquet/holbertonschool-printf/blob/main/_putchar.c): writes the character c to stdout.
- [main.c](https://github.com/vtiquet/holbertonschool-printf/blob/main/main.c): main testing file.
- [main.h](https://github.com/vtiquet/holbertonschool-printf/blob/main/main.h): Header file with function prototypes and specifier struct.
- [man_3_printf](https://github.com/vtiquet/holbertonschool-printf/blob/main/man_3_printf): man page for the custom _printf.c function.

## ✍️ Author
- [TIQUET Valentin - vtiquet](https://github.com/vitquet) - Student in programming at Holberton School
