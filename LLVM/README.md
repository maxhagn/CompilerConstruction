# Compiler Construction with LLVM

In this repository you can find a self written programming language which I developed with the help of LLVM.

## Getting Started
The compiler can be used by downloading the data, the only additional requirement is a current version (tested on LLVM and Clang version 14) of LLVM and Clang. More information on the official pages: 

For easy access: https://apt.llvm.org/ <br>
For sophisticated users: https://llvm.org/docs/GettingStarted.html

## Installation

1. download or clone this repository  
`git clone https://github.com/maxhagn/CompilerConstructionLLVM`
2. extract files or cd into folder
3. use the feature-rich Makefile  
      
| Command                             | Description                        |
|-------------------------------------|------------------------------------|
| `make`  `make all`  `make language` | build the compiler                 |
| `make clean`                        | clean the object and binary files  |
| `make fresh`                        | make clean, clean_screen and build |
| `make clean_screen`                 | clear the terminal                 |
| `make check`                        | run the test suite                 |

4. Use the compiler  

| Usage                                                                    | Description                                                                                                                           |
|--------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------|
| `./language`                                                             | use the integrated JIT compiler, after quitting through `strg + d` <br> the compiled assembly file is saved as output.s               |
| `./language < [PathToYourSource]`                                        | write your code in any development environment and compile <br> the code with the tool, a compiled assembly file is saved as output.s |

5. Compile the assembly file with a compiler of your choice to a binary file
   `gcc output.s -o output`
   `clang++ output.s -o output`

6. Run your program
`./output`

you can do all steps combined by calling the instruction below, or adding the commands to the makefile or to a shell script
`./language < [PathToYourSource] && gcc output.s -o output && ./ouput`

after everything is set up it should be a very fast compiling and execution process 

## Documentation
### Function
### Variables
### Binary Operators
### While-Loop
### For-Loop
### If {} Else If {} Else {}  

