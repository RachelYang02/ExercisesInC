## Chapter 1

### Compilation

1) Interpreted languages, where programs are read and executed by a software interpreter, support dynamic types instead of static types, which means that one can tell what type a variable points to only at run time, and not by simply looking at the program at compile time.

2) Advantages of static typing: errors are caught earlier because type errors are caught at compile time instead of run time. It also allows the program to check for errors in programs that haven't run yet, so if you have an architecture where a function isn't called unless another function works, you wouldn't be able to catch all the errors with dynamic typing in both functions unless the first one works perfectly. Because these error checks don't happen at run time, static typing can lead to a quicker run time. It also saves space since variable names aren't stored at run time.

3) If a function requires three arguments and only two are given. If a function requires a int argument and is given a list.

4) Code optimization can make certain bugs in one's code appear or disappear, which isn't helpful while developing new code. It can also require longer compilation time if it's a higher number optimization.

5) The -S flag has gcc compile the program and generate assembly code for the specific machine one is running on. Different computers have different architectures, which run on different machines, and so gcc will generate different assembly code per machine.

6) Spelling a variable name wrong leads to a syntax error, which gives a message from the compiler. Spelling a function name wrong leads to the linker providing the error message, not the compiler. This is because the linker finds the libraries that functions are defined in, and so if a function isn't defined in any library, the error comes from the linker.

7) A segmentation fault is when one tries to read and write to a wrong memory location.

## Chapter 2

### Processes

1) Virtualization: shopping / buying online -- lots of processes behind the scenes, especially if the item is out of stock and needs to be resetocked from another store, but all the buyer sees is one big "BUY" button. For example, Amazon's "1-click buy" option where the buyer only needs to click one button for their cart to be bought, attached to the mailing address and bought using the buyer's credit card information without the buyer needing to do any of these extra work or needing to see any of the behind-the-scenes processes.

2) A process is a software object that represents a running program. It contains data on the program text, the data referenced in the program, the status of any pending operations, and the hardware state of the program. It loads and runs programs but is not a program itself.

3) Abstraction simplifies complicated processes so that users and programmers can use these complex systems without necessarily having to master any and all details about their implementation.

4) The kernel is responsible for core capabilities like creating threads.

5) Daemon is a process that runs in the background and provides operating system services.
