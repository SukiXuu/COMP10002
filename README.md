# Foundation of Algorithm

\[TOC\]

### 内容\(主要学了什么\)

主题comp10002算法基础旨在增强的编程技能和计算知识。  
 在其中，将学习C语言，以及C程序的结构，编译和管理方式。并获得了计算机和编程的“幕后”视角。  
 同时，该主题涉及算法，即计算的基本构建块。主题包括动态数据结构以及操纵它们的算法（列表，树，哈希表）；搜索算法，包括模式搜索；和排序算法。  
 更一般而言，将有望发展自己的综合算法方法的能力，并根据可能适用的算法技术评估问题和计算任务。  
 Handouts: [intro](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/intro.pdf)

### Assessment

2020s2 On-line  
 [Quiz](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/Ass/Quisses.md)30% && [Programming](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/Ass/Programming.md)40% && [Final](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/Ass/Final.md)30% Hardle:   
 所有分数获得至少50％  
 Programming 至少获得16/40  
 笔试获得至少24/60的成绩  


### Weekly Schedule

✧: Eample / Exersice without code  
 ✎/✏️: 练习  
 Week表示的是题目包含知识对应的lecture时间，也就是说下面week02是week02讲的，对应在第二周的tutorial才讲。  
 [C\_normal\_model](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week01/start.c)

#### Week 01, 3 August to 7 August

**\[Topics\]:**

Introduction to algorithms; introduction to C programming.

**\[Reading\]:**

Chapters 1, 2, 3 of the textbook.

**\[Workshops\]:**

No Workshops this week.

#### Week 02, 10 August to 14 August

**\[Topics\]: Selection, iteration, and abstraction in C.**

**\[Reading\]:**

* [ ] Chapters 3, 4 and \(maybe a start on\) 5 in the textbook.

  **\[Workshops\]:**

* [x] Using either grok or jEdit and gcc
* [x] Compile and execute helloworld.c
* [x] Exercise  2.6 /yellow \(2.8/blue\)
* [x] Exercise 3.7/both. 

  **✏️ Exercise 1.02: Hello World**

Use the Grok editor to create the "Hello World" program. Compile and execute it. Test to make sure it gives the correct output.

Your output should be as follows:

```c
./program<br>
Hello world!
```

[Hello\_World.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week01/Hello_World.c)

**✏️ Exercise 2.08: Temperature conversion**

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

**✏️ Exercise 3.07: Temperature conversions again**

In the previous lab, you were asked to write a program that converted temperatures from Fahrenheit to Celsius.

Extend that program by adding in the reverse transformation:

```c
Enter a temperature: 212F
The temperature 212.0F converts to 100.0C

Enter a temperature: 212C
The temperature 212.0C converts to 413.6F
```

[Temperature\_conversions\_again.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week01/Temperature_conversions_again.c)

#### Week 03, 17 August to 21 August

**\[Topics\]: Functions and pointers.**

**\[Reading\]:**

* [ ] Chapters 5 and 6 of the textbook.

  **\[Advance Warning\]:**

  [Quiz](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/Ass/Quisses.md) 1: 4:15pm on Friday 28 August \(Week 4\).  


  A Practice Quiz will be available by the end of Week 3.

  **\[Workshops\]:**

* [x] Exercise 4.1 
* [x] Exercise 4.2 
* [x] Exercises 4.5
* [x] Exercise 4.6
* [x] Exercise 4.7
* [x] Exercise 5.6 \(additional\)

  **Practice**

  **✧︎ Exercise 4.01a**

  Trace the actions of these loops, and determine the values printed out by each of the printf statements. 

  Discuss your answer.

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

  **✧︎ Exercise 4.01b**

  Trace the actions of these loops, and determine the values printed out by each of the printf statements. 

  Discuss your answer.

  \`\`\`c

  **include**

int main\(int argc, char _argv\[\]\) { int i; for \(i=1; i&lt;2000000; i=2_i\) { printf\("%7d\n", i\); } return 0; }

```text
##### ✧︎ Exercise 4.01c
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

**✧︎ Exercise 4.01d**

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

**✧︎ Exercise 4.01e**

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

**✧︎ Exercise 4.01f**

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

**✧︎ Exercise 4.01g**

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

**✧︎ Exercise 4.02**

Give a general construction that shows how any do statement can be converted to an equivalent while statement. Discuss your solution.

**✏️ Exercise 4.5: Simple character graph**

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

**✏️ Exercise 4.6: Simple character and line count program**

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

**✏️ Exercise 4.7: Simple character, word, and line count program**

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

**Additional Practice**

**✏️ Exercise 4.3: Compute\_Fibonacci\_numbers\_using\_a\_loop**

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

**✎ Exercise 4.8: Extended\_version\_of\_the\_3n\_problem**

Extend the program in Figure 4.9 on page 54 of the textbook so that a value nmax is read, and each number between one and nmax is used as the seed to start the 3n+1 computation. Report the length of the longest cycle generated, and the seed that started that cycle. For example, when nmax is set to 50, the longest sequence is the one that starts at 27. It is the first one to take more than 100 cycles, and it passes through the value 9,232 before converging. The first cycle of length greater than 200 starts at 2,463 before converging. The first cycle of length greater than 200 starts at 2,463 and is of length 208; it grows as large as 250,504 before diminishing back to one. 这个题要看书

```c
./program
Enter value for nmax: 50
start =      27, cycles =   111, max =       9232
./program
Enter value for nmax: 2463
start =    2463, cycles =   208, max =     250504
```

[Extended\_version\_of\_the\_3n\_problem.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week02/Extended_version_of_the_3n_problem.c)

**✏️ Exercise 4.9: Compute\_the\_next\_prime\_number**

Use the program fragment shown in Figure 4.10 on page 55 of the textbook as a starting point, write a program nextprime that calculates the next prime number after a given value:

```c
./program
Enter an integer value: 8
The next prime is     : 11
./program
Enter an integer value: 87654321
The next prime is     : 87654337
```

[next\_prime\_number.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week02/next_prime_number.c)

**✏️ Exercise 4.4: Generate\_a\_table\_of\_printable\_ASCII\_characters.c**

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

#### Week 04, 24 August to 28 August

**\[Topics\]: Arrays and Algorithms.**

**\[Reading\]:**

* [ ] Chapter 7 of the textbook.

  **\[Advance Warning\]:**

  [Quiz](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/Ass/Quisses.md) 1: 4:15pm on Friday 28 August \(Week 4\).

  **\[Workshops\]:**

* [x] Discuss 6.2
* [x] Exercises 5.6
* [x] Exercises 6.9

  **Practice**

  **✧ Discuss 6.2**

  For each of the three marked points in the following program write down a list of all the program-declared variables and functions that are in scope at that point, and for each such identifier, its type. Don't forget main, argc, and argv \(which has the type \(char\*\)\[\], but you don't know what that means yet\). Where there is more than one choice for a given name, be sure to indicate which one you are referring to. Discuss your solution.

  \`\`\`c

  int bill\(int jack, int jane\);

  double jane\(double dick, int fred, double dave\);

int trev;

int main\(int argc, char _argv\[\]\) { double beth; int pete, bill; /_ point \#1 \*/ return 0; }

int bill\(int jack, int jane\) { int mary; double zack; / _point \#2_ / return 0; }

double jane\(double dick, int fred, double dave\) { double trev; / _point \#3_ / return 0.0; }

```text
[602.c](./code/week03/602.c)
##### ✏️ Exercises 6.9
Consider again the problem described in Exercise 3.6 on page 43. Write a function int try_one_coin(int *cents, int coin) that reduces the current cents amount by the value of the current coin as many times as is possible, altering the value of cents appropriately and returning the number of coins of that denomination that should be issued.

Then write a function void print_change(int cents) that tests each different coin denomination in the correct ordering, and uses try_one_coin to tell it how to generate the required change.

In the late 1980s in Australia, 1c and 2c coins were abolished, and $1 and $2 were introduced. Write a further function int round_to_5(int cents) that returns a value rounded off to the nearest multiple of five. For example, 12c of change is rounded to 10c; whereas 23c is rounded to 25c.

Finally, write a driver program that allows you to test your functions on monetary amounts up to $10.
```c
./program
Enter amount in cents: 987
give 4 200-cent coins
give 1 100-cent coins
give 1  50-cent coins
give 1  20-cent coins
give 1  10-cent coins
give 1   5-cent coins
```

[cent.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week03/cent_trans.c)

**✏️ Exercise 5.6**

Two numbers are an amicable pair if their factors \(excluding themselves\) add up to each other. The first such pair is 220, which has the factors \[1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110\], adding up to 284; and 284, which has the factors \[1, 2, 4, 71, 142\], the sum of which is 220. The next amicable pair is 1,184 and 1,210; and then 2,620 and 2,924.

Write a function that takes two int arguments and returns true if they are an amicable pair.

Then, test your function by writing a main program that reads an integer n and searches from n for the first amicable pair where at least one of the numbers is greater than or equal to n.

```c
./program
Enter a number n: 300
1184 and 1210 are amicable
```

[amicable\_pairs.c](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/code/week03/amicable_pairs.c)

#### Week 05, 31 August to 4 September

**\[Topics\]: Analysis of algorithms.**

**\[Reading\]:**

* [ ] Chapter 7 \(up to and including Section 7.6\), and then Chapter 12 \(Sections 12.1 and 12.4\).

  **\[Advance Warning\]:**

  [Quiz](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/Ass/Quisses.md) 1: 4:15pm on 11September Friday August \(Week 6\).

  **\[Workshops\]:**

* [ ] Discuss Exercises 7.6 and 7.7
* [ ] Confirm that you understand arrays and the operations that manipulate them; then
* [ ] Design and implement solutions to as many as you can get through of Exercises 7.3, 7.4, 7.6, 7.7, 7.8, 7.9, 7.10, and 7.11

**✎ Exercises**

#### Week 06, 7 September to 11 September

**\[Topics\]: Strings, and then pattern search algorithms.**

**\[Reading\]:**

* [ ] The second half of Chapter 7 \(Sections 7.7 to 7.9\)
* [ ] should have read Sections 12.1, 12.2 and 12.4 by now.

  **\[Advance Warning\]:**

  [Quiz](https://github.com/SukiXuu/websetting/tree/0aadb01b81fe627c447b9ad1e936219cc6e1a8cd/courses/COMP10002/Ass/Quisses.md) 1: 4:15pm on 11September Friday August \(Week 6\).

  **\[Workshops\]:**

* [ ] Discuss Exercises 1 and 4 at the end of the lec05.pdf slides
* [ ] Continue on with the Chapter 7 exercises from last week, you need to be "array-peaking" this week ready to tackle Assignment 1 next week;

### Relational Knowledge

### Reference && More Details

Moffat, A. \(2012\). Programming, Problem Solving, and Abstraction with C, Revised Edition. Pearson. ISBN 9781486010974   
 [Programs included in the Book](https://people.eng.unimelb.edu.au/ammoffat/ppsaa/c/)

### Notes For Textbook

Chapter1: Computers and Programs Chapter2: Numbers In, Numbers Out Chapter3: Making Choices Chapter4: Loops

> Figure 4.10 **break 的用法** **do-while loop 的用法** \`do-while使用的时候不管while里面的guard是否正确,do里面的语句一定会执行一次-在那之后才判定while里的guard.

Chapter5: Getting Start With Functions

