## C - Hello, World

This is an intorductory project for low-level computer programming in C.
Some of the concepts explored in this project include:
  1. C program compilation process.
  2. Origins of C programming.
  3. Keywords and identifiers.
  4. Data types.
  5. Type casting.
  6. sizeof() operator.
  7. Input and Output using putchar/getchar and printf/scanf.
  8. Betty Coding style.
  
Below we have short descriptions for each program and what task it performs:

#### 0-preprocessor
This is a shell script that runs a C file through the processor and sves the result into another file.
  - The C file will be saved in the variable $CFILE.
  - The output should be saved in the file c.
  
#### 1-compiler
This is a shell script that compiles a C file but does not link.
  - The C file will be saved in the variable $CFILE.
  - The output file should be named the same as the C file, but with the          extension .o instead of .c

#### 2-assembler
This is a shell script that generates the assembly code of a C code and saves it in an output file.
  - The C file will be saved in the variable $CFILE.
  - The output file should be named the same as the C file, but with the extension .s instead of .c

#### 3-name
This is a shell script that compiles a C file and creates an executable file named cisfun.
  - The C file name will be saved in the variable $CFILE.
 
#### 4-puts.c
This is a C program that prints exactly **"Programming s like building a multilingual puzzle**, followed by a new line. 
  - We are using the function puts
  - We are not allowed to use printf
  - Our program should end with the value 0.
  
#### 5-printf.c
This is a C program that prints exactly **with proper grammar, but the outcome is a piece of art,**, followed by a new line.
  - We are using the function printf
  - We are not allowed to use the function puts.
  - Our program should return 0
  - Our program should compile without warning when using the -Wall gcc        option.
  
#### 6-size.c
This is a C program that prints the size of various types on the computer it is compiled and run on.
  - We should produce the exact same output as in the example.
  - Warnings are allowed.
  - Our program should return 0.
  - We might have to install the package **libc6-dev-i386** on our Linux to test the -m32 gcc option.
