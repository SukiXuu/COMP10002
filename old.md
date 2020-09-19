# COMP10002

\[toc\]

## Overview

✧: Eample / Exersice without code  
 ✏️: 练习  
 Week表示的是题目包含知识对应的lecture时间，也就是说下面week02是week02讲的，对应在第二周的tutorial才讲。  
 [C\_normal\_model](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week01/start.c)

## Course Notes

### Week\_01

#### ✧

#### ✏️ Exercise 1.02: Hello World

Use the Grok editor to create the "Hello World" program. Compile and execute it. Test to make sure it gives the correct output.

Your output should be as follows:

```c
./program<br>
Hello world!
```

[Hello\_World.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week01/Hello_World.c)

#### ✏️ Exercise 2.08: Temperature conversion

To convert from degrees Fahrenheit to degrees Celsius, you must first subtract 32 then multiply by 5/9.

Write a program that undertakes this conversion.

Your output should be as follows:

```c
./program
Enter degrees F: 212
In degrees C is: 100.0

./program
Enter degrees F: 82
In degrees C is: 27.8
```

[Temperature\_conversion.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week01/Temperature_conversion.c)

#### ✏️ Exercise 3.07: Temperature conversions again

In the previous lab, you were asked to write a program that converted temperatures from Fahrenheit to Celsius.

Extend that program by adding in the reverse transformation:

```c
Enter a temperature: 212F
The temperature 212.0F converts to 100.0C

Enter a temperature: 212C
The temperature 212.0C converts to 413.6F
```

[Temperature\_conversions\_again.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week01/Temperature_conversions_again.c)

### Week\_02

#### ✧︎ Exercise 4.01a

Trace the actions of these loops, and determine the values printed out by each of the printf statements. Discuss your answer.

```c
#include<stdio.h>
int main(int argc, char *argv[]) {
   int i;
   for (i=0; i<20; i=i+3) {
      printf("%2d\n", i);
   }
   return 0;
}
```

#### ✧︎ Exercise 4.01b

Trace the actions of these loops, and determine the values printed out by each of the printf statements. Discuss your answer.

```c
#include<stdio.h>

int main(int argc, char *argv[]) {
   int i;
   for (i=1; i<2000000; i=2*i) {
      printf("%7d\n", i);
   }
   return 0;
}
```

#### ✧︎ Exercise 4.01c

Trace the actions of these loops, and determine the values printed out by each of the printf statements. Discuss your answer.

```c
#include<stdio.h>

int main(int argc, char *argv[]) {
   int i, sum;
   sum = 0;
   for (i=1; i<10; i++) {
      sum=sum+i;
      printf("S(%2d) = %2d\n", i, sum);
   }
   return 0;
}
```

#### ✧︎ Exercise 4.01d

Trace the actions of these loops, and determine the values printed out by each of the printf statements. Discuss your answer.

```c
#include<stdio.h>
int main(int argc, char *argv[]) {
   int i, sum;
   sum = 0;
   for (i=1; i<10; i++) {
      sum=sum+i;
      printf("S(%2d) = %2d\n", i, sum);
   }
   return 0;
}
```

#### ✧︎ Exercise 4.01e

Trace the actions of these loops, and determine the values printed out by each of the printf statements. Discuss your answer.

```c
#include<stdio.h>
int main(int argc, char *argv[]) {
    int i, j;
    or (i=0; i<8; i++) {
    for (j=i+1; j<8; j+=3) {
        if (i+j==7) {
            break;
        }
    printf("i=%d, j=%d\n", i, j);
    }
    }
return 0;
}
```

#### ✧︎ Exercise 4.01f

Trace the actions of these loops, and determine the values printed out by each of the printf statements. Discuss your answer.

```c
#include<stdio.h>

int main(int argc, char *argv[]) {
   int i, j;
   j=5;
   for (i=0; i<j; i++) ; {
      printf("i=%d, j=%d\n", i, j);
   }
   return 0;
}

/* To observe the output of this program, you need to 
compile and run it in terminal with gcc. Running it 
with the auto-compilation on Grok will result in a 
compilation error.
*/
```

#### ✧︎ Exercise 4.01g

Trace the actions of these loops, and determine the values printed out by each of the printf statements. Discuss your answer.

```c
#include<stdio.h>
int main(int argc, char *argv[]) {
   int i, j;
   j=5;
   for (i=0; i<j; j++) {
      printf("i=%d, j=%d\n", i, j);
   }
   return 0;
}
```

#### ✧︎ Exercise 4.02

Give a general construction that shows how any do statement can be converted to an equivalent while statement. Discuss your solution.

#### ✏️ Exercise 4.5: Simple character graph

Write a program that reads a sequence of integers and draws a simple graph. Assume that all of the values read are between 1 and 70. For example:

```c
./program
Enter numbers: 20 25 30 28 26 22 17 14 13
20 |********************
25 |*************************
30 |******************************
28 |****************************
26 |**************************
22 |**********************
17 |*****************
14 |**************
13 |*************
```

[Simple\_character\_graph.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week02/Simple_character_graph.c)

#### ✏️ Exercise 4.6: Simple character and line count program

Write a program that counts the number of characters and lines in the input:

```c
Enter text:
Mary had a little lamb,
little lamb, little lamb;
Mary had a little lamb,
its fleece was white as snow.
Lines:      4
Chars:    104
```

Hint: use getchar to process on character at a time. Look for "\n" characters, and count them to determine the number of lines in the input. [Simple\_character\_and\_line\_count\_program.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week02/Simple_character_and_line_count_program.c)

#### ✏️ Exercise 4.7: Simple character, word, and line count program

Modify the program you wrote for the previous question so that it also counts the number of words in the input stream. You first need to decide on a suitable definition of what is meant by a "word". Your program should then use a flag variable inaword that records whether the last character was part of a word. Count the number of times inaword gets changed from false to true. A sample run of the program should look like:

```c
Enter text:
Mary had a little lamb,
little lamb, little lamb;
Mary had a little lamb,
its fleece was white as snow.
Lines:      4
Words:     20
Chars:    104
```

[Simple\_character,\_word,\_and\_line\_count\_program.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week02/Simple_character,_word,_and_line_count_program.c)

### Week\_02\_addition

#### ✏️ Exercise 4.3: Compute\_Fibonacci\_numbers\_using\_a\_loop

The Fibonacci numbers have a range of interesting uses in Mathematics and Computer Science. For example, suppose that a single mould spore falls onto a loaf of bread. Suppose also that 48 hours after a spore is created, it is able to clone itself and create a further fresh one every 24 hours thereafter. Finally, suppose also that 48 hours after it is created each new spore also starts cloning a fresh spore every day.

At the end of the first and second days there will be 1 spore present; by the end of the third day it has cloned and there will be 2; by the end of the fourth day the original spore has cloned again and there will be 3; by the end of the fifth day there will be 5, because two spores are now actively cloning; by the end of the sixth day there will be 8; and so on. In general, if F\(n\) is the number of spores present at the end of the nth day, then F\(1\) = 1, F\(2\) = 2, and then F\(n\) = F\(n-1\)+F\(n-2\) thereafter.

Write a program that prints out the number of spores present at the end of each day. Stop when the number of spores exceeds ten million. For example:

```c
After 3 days, 2 spores
After 4 days, 3 spores
After 5 days, 5 spores
After 6 days, 8 spores
After 7 days, 13 spores
After 8 days, 21 spores
After 9 days, 34 spores
After 10 days, 55 spores
After 11 days, 89 spores
After 12 days, 144 spores
After 13 days, 233 spores
After 14 days, 377 spores
After 15 days, 610 spores
After 16 days, 987 spores
After 17 days, 1597 spores
After 18 days, 2584 spores
After 19 days, 4181 spores
After 20 days, 6765 spores
After 21 days, 10946 spores
After 22 days, 17711 spores
After 23 days, 28657 spores
After 24 days, 46368 spores
After 25 days, 75025 spores
After 26 days, 121393 spores
After 27 days, 196418 spores
After 28 days, 317811 spores
After 29 days, 514229 spores
After 30 days, 832040 spores
After 31 days, 1346269 spores
After 32 days, 2178309 spores
After 33 days, 3524578 spores
After 34 days, 5702887 spores
After 35 days, 9227465 spores
After 36 days, 14930352 spores
```

[Compute\_Fibonacci.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week02/Compute_Fibonacci.c)

#### ✎ Exercise 4.8: Extended\_version\_of\_the\_3n\_problem

Extend the program in Figure 4.9 on page 54 of the textbook so that a value nmax is read, and each number between one and nmax is used as the seed to start the 3n+1 computation. Report the length of the longest cycle generated, and the seed that started that cycle. For example, when nmax is set to 50, the longest sequence is the one that starts at 27. It is the first one to take more than 100 cycles, and it passes through the value 9,232 before converging. The first cycle of length greater than 200 starts at 2,463 before converging. The first cycle of length greater than 200 starts at 2,463 and is of length 208; it grows as large as 250,504 before diminishing back to one. 这个题要看书

```c
./program
Enter value for nmax: 50
start =      27, cycles =   111, max =       9232
./program
Enter value for nmax: 2463
start =    2463, cycles =   208, max =     250504
```

\[\]

#### ✎ Exercise 4.9: Compute\_the\_next\_prime\_number

Use the program fragment shown in Figure 4.10 on page 55 of the textbook as a starting point, write a program nextprime that calculates the next prime number after a given value:

```c
./program
Enter an integer value: 8
The next prime is     : 11
./program
Enter an integer value: 87654321
The next prime is     : 87654337
```

#### ✏️ Exercise 4.4: Generate\_a\_table\_of\_printable\_ASCII\_characters.c

Write a program that generates a table of printable ASCII character set. The first printable character is blank, " ", with the integer value 32, and the last is the tilde character, "\`" with integer value 126. Laying out the table in rows of eight shows the relationship between the uppercase letters and the lowercase letters:

```c
           +0  +1  +2  +3  +4  +5  +6  +7
        +--------------------------------
     32 |       !   "   #   $   %   &   '
     40 |   (   )   *   +   ,   -   .   /
     48 |   0   1   2   3   4   5   6   7
     56 |   8   9   :   ;   <   =   >   ?
     64 |   @   A   B   C   D   E   F   G
     72 |   H   I   J   K   L   M   N   O
     80 |   P   Q   R   S   T   U   V   W
     88 |   X   Y   Z   [   \   ]   ^   _
     96 |   `   a   b   c   d   e   f   g
    104 |   h   i   j   k   l   m   n   o
    112 |   p   q   r   s   t   u   v   w
    120 |   x   y   z   {   |   }   ~
```

[ASCII\_print\_table.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week02/ASCII_print_table.c) Hint: start with a relatively simple program that writes the correct characters, and only when you have that program operating should you start working on getting the formatting right. Note also that the computation required is essentially one dimensional, so the program in Figure 4.9 on page 54 is a possible starting point.

### Week\_03

### Week\_04 🧨 Quiz 10% × 3

### Week\_05

### Week\_06 🧨 Quiz 10% × 3

### Week\_07

### Week\_08 🧨 Programming Assignment 1, due Week 8, 20%

### Week\_09

### Week\_10 🧨 Quiz 10% × 3

### Week\_11

### Week\_12 🧨 Programming Assignment 2, due Week 12, 20%

## Assignments 🧨

Semester2, 2020

### 🧨 Programming Assignment 1, due Week 8, 20%

### 🧨 Programming Assignment 2, due Week 12, 20%

### 🧨 Quiz 10% × 3

Time: Week 4, Week 6, and Week 10   
 Details: 30min online quiz, no gcc/grok && permit, LMS

### 🧨 On-Line Programming Exam, 30%,

Details: 60 minutes duration, taken via the LMS,   
 open book assessment, and with use of gcc/grok permitted

## Relational Knowledge

## Reference && More Details

Moffat, A. \(2012\). Programming, Problem Solving, and Abstraction with C, Revised Edition. Pearson. ISBN 9781486010974   
 [Programs included in the Book](https://people.eng.unimelb.edu.au/ammoffat/ppsaa/c/)

