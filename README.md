# Assignment 3 - Sorting: Putting your affairs in order

The program **sorting.c** will be implementing the **Shell**,**Quick**,**Heap**,and **Batcher** sorting algorithm.

## Files In The Repository
1. batcher.c
2. quick.c
3. shell.c
4. heap.c
5. sorting.c
6. sets.c
7. stats.c
8. batcher.h
9. quick.h
10. shell.h
11. heap.h
12. sets.h
13. stats.h
14. gaps.h
15. Makefile
16. DESIGN.pdf
17. WRITEUP.pdf
18. README.md

# Make commands

```
$ make clean
```
This command will make the repository clean by deleting the object file and executable file of **sorting.c**.


```
$ make format
```

This command will format C file into clang format.

```
$ make
```

This command will just compile other C files and make the executable and object file for **sorting.c**.

## Running the program

```
$ make
```
1. This command will just compile and make the executable and object file for **sorting.c**.

```
$ ./sorting -flag
```

2. flags = p,r,n,a,s,b,q,H, and h you can pass one or many flags together.

### Flags

-a
: Enable all sorts.

-s
: Enable Shell Sort.

-h
: Enable Heap Sort.

-q
: Enable Quick Sort.

-b
: Enable Batcher Sort.

-H
: Display program help and usage.

-p elements
: With this flag you need to pass a parameter. Specify number of elements to print (default: 100).

-r seed
: With this flag you need to pass a parameter. Specify random seed (default: 13371453).

-n length
: With this flag you need to pass a parameter. Specify number of array elements (default: 100).
