# Lab 1

This repository contains the starter code for tasks 1, 2, and 3 of Lab 1.

The starter code includes a file `lab1.c`. Within lab1.c is some code to help you test each of the tasks. Feel free to modify this code however you see fit. 

## Compiling Your Code
To make things convenient, we have included a makefile you can use to compile the various tasks as you work on the lab. example usage is as follows: 

```bash
make task1 # compiles the code for task1, generates task1 executable
make task2 # compiles the code for task2, generates task2 executable 
make task3 # compiles the code for task3, generates task3 executable 
```

After using make to compile your code, you can run the executable as follows: 

```bash
./task1 # runs task1
```

for task 2, you will need to pass some command line arguments. To do this, you simply run the make command for task2, then execute it from the command line as follows: 

```bash
./task2 <arg1> <arg2> <arg3> ...
```

**Note:** if you modify (outside of just uncommenting the code for the part you are working on) the lab1.c file, the way that you interact with the executables and pass command line arguments may be different than the above examples.

## Task 1

For task 1, the starter code is in the file `task1.c`. The steps you need to follow are:

1. comment out the line marked `// Line A`
2. compile and run the code for task 1 several times, noting the output. 
3. Remove the comment that you added in step 1 so that the line with `// Line A` gets compiled into the program
4. Run the code several times, noting how the ouput is different from when `// Line A` was commented out

Once you have done this, don't forget to answer the questions for task 1 on Gradescope.


## Tasks 2 & 3

For tasks 2 and 3, there are more detailed explanations in the lab write up. Please refer to the write up for how to complete these tasks.

## Autograder Submission 

To submit the autograded portions of the lab, create a zip file with all of your code (including the tiny-AES-c library for task2) and submit it to gradescope. 
