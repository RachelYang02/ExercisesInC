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

## Chapter 3

### Virtual memory

1) 6 bits because 5 bits will hold 32 letters (6 holds 64)

2) 2^32 bits, or 4GiB

3) Memory is volatile: the information stored there can be lost if, say, the machine shut down. Computers usually have 2-8 GiB of memory. Its contents include data from a process while it's running. When a process reads and writes to files, it puts the data in storage, which here means long-term storage. Computers can have storage on the magnitude of 500GB to 2TB.

4) A GiB is 2^30 bytes, while a GB is 10^9. GiB is a binary unit and GB is a decimal unit. A GiB is 93.1% of a GB.

5) Processes simply cannot generate and map different virtual addresses to the same physical memory because when the virtual address is translated into a physical address, it is done per-process, and so it automatically maps that virtual address to a different physical memory location.

6) The stack and the heap are at opposite ends because both have the need to expand and grow, and so for both to be able to in the most efficient manner, it makes the most sense for them to be at opposite ends.

7) Either a dictionary or a list of lists

8) It's a mechanism when the operating system interrupts a process, saves its current state, then runs another process.

### Aspace

0)
Allen's result


Address of main is 0x40057c
Address of global is 0x60104c
Address of local is 0x7fffd26139c4
Address of p is 0xc3b010

Rachel's result


Address of main is 0x40057d
Address of global is 0x60104c
Address of local is 0x7fffcbad9a64
Address of p is 0x169c010

1)
Address of main is 0x40057d
Address of global is 0x60104c
Address of local is 0x7ffed532e46c
Address of p is 0x6de010
Address of r is 0x6de0a0

2)
Address of main is 0x4005ee
Address of global is 0x601054
Address of local is 0x7ffdecd857ac
Address of local variable is 0x7ffdecd8578c
stack grows down
Address of p is 0x1f10010
Address of r is 0x1f100a0

3) 20
Address of main is 0x4005ee
Address of global is 0x601054
Address of local is 0x7ffd19024fa8
Address of local variable is 0x7ffd19024f8c
stack grows down
Address of p is 0x11a7010
Address of r is 0x11a70a0
Address of random one is 0x11a7130
Address of random two is 0x11a7150


## Chapter 4

### Files and file systems

1) The file system maps the file name to its contents; a file is a sequence of bytes. Files are bytes-based whereas persistent storage is block based.

2) Generally, it keeps track of "file position" and how much of the file has been read. So it may store information such as line number or character number at any given point that flags the most the file has read up to that point in time.

3) Block transfers (processor does 5 ms of work on each block to keep the processor busy), prefetching (loading blocks before a request to load it), buffering (modifying the block while its in memory and writing to the disk once), and caching (keeping copies of blocks in memory for quicker future requests)

4) The data is in a cache, but still not written to the disc, and so is lost when the computer loses power even though it said it finished writing.

5) For FAT, file sizes aren't fixed -- one doesn't need to know the size of the file in the beginning, while in inodes, file sizes are fixed. However, inodes make it easy to grow files and provides safe file renaming and directory copying.

6) Overhead is the data structures used by the allocator, and it should be minimal so that as much space as possible is left for data. Fragmentation is the unused space left by unused or partially used blocks.

7) Benefit: 1) programmers only have to learn one API 2) this principle makes
programs more versatile. Downfall: when people have conflicting definitions of "file" -- file systems include objects that may not necessarily be a file (like sockets) and this can lead to problems if the programmer isn't understanding the abstraction correctly.
