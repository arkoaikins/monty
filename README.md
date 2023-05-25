# 0x19. C - Stacks, Queues - LIFO, FIFO
- A project to create an interpreter for Monty ByteCodes files.

## What to expect from this project
|        Table of contents           | 
| -----------------------------------| 
|   What i learnt in this project    |
|        My header file              |
|   Project tasks(task 0 - task 5)  |

## What i learnt in this project
In this project i learnt 
- About LIFO,which means Last In First Out and FIFO,which means First In First out
- What a stack is an how to use it
- What a quene is and how to use it
- The common implementations of stacks and queues
- The most common use cases of stack and queues
- The proper way to use global variables

## My header file
- All the prototypes of my functions are included in my header file monty.h
## Project tasks
### 0. push, pall
Implemented the push and pall opcodes.

The push opcode
- The opcode push pushes an element to the stack.

   - sage: push <int>
    - where <int> is an integer
   - if <int> is not an integer or if there is no argument given to push, print the error message L<line_number>: usage: push integer, followed by a new lin     e, and exit with the status EXIT_FAILURE
    - where is the line number in the file
   - You won’t have to deal with overflows. Use the atoi function
The pall opcode

The opcode pall prints all the values on the stack, starting from the top of the stack.

- Usage pall
- Format: see example
- If the stack is empty, don’t print anything
#### Tested code with
![image](https://github.com/arkoaikins/alx-low_level_programming/assets/110135034/17a9e008-29e4-4192-ac12-2e4c4972dc9c)

### 1. pint
Implemented the pint opcode.

The pint opcode

The opcode pint prints the value at the top of the stack, followed by a new line.

- Usage: pint
- If the stack is empty, print the error message L<line_number>: can't pint, stack empty, followed by a new line, and exit with the status EXIT_FAILURE
#### Tested code with
![image](https://github.com/arkoaikins/alx-low_level_programming/assets/110135034/d383d7e3-27a8-452b-a699-4107e2462e47)

### 2. pop
Implemented the pop opcode.

The pop opcode

The opcode pop removes the top element of the stack.

- Usage: pop
- If the stack is empty, print the error message L<line_number>: can't pop an empty stack, followed by a new line, and exit with the status EXIT_FAILURE
#### Tested code with
![image](https://github.com/arkoaikins/alx-low_level_programming/assets/110135034/bd993efc-f89f-428e-ac68-0dbb83ae4fbe)

### 3. swap
Implemented the swap opcode.

The swap opcode

The opcode swap swaps the top two elements of the stack.

- Usage: swap
- If the stack contains less than two elements, print the error message L<line_number>: can't swap, stack too short, followed by a new line, and exit with the status EXIT_FAILURE

#### Tested code with
![image](https://github.com/arkoaikins/alx-low_level_programming/assets/110135034/c20b929b-61f9-4252-968a-a1f1e830c8c2)

### 4. add
Implemented the add opcode.

The add opcode

The opcode add adds the top two elements of the stack.

- Usage: add
- If the stack contains less than two elements, print the error message L<line_number>: can't add, stack too short, followed by a new line, and exit with the status EXIT_FAILURE
- The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
  - The top element of the stack contains the result
  - The stack is one element shorter

#### Tested code with
![image](https://github.com/arkoaikins/alx-low_level_programming/assets/110135034/2d35a6c9-48f4-44fb-99c1-310e9fc834d9)

### 5. nop
Implemented the nop opcode.

The nop opcode

The opcode nop doesn’t do anything.

 - Usage: nop




## Author:page_with_curl:
Edwin Arko Aikins
