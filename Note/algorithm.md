# algorithm

Author: SukiXuu Subject: COMP10002 Time: 2020-09-09, 2020 Semester

## 数据结构和算法

### 什么是数据结构和算法？

_程序=数据结构+算法_

* 数据结构：储存数据和组织数据的方法---数据存储的基本单位  e.g.array
* 算法是规定的计算步骤

### 二分查找 Binary Search

* 前提数列是_有序的_
* 复杂度分析 切到只有一个

  $$
  n: 数列长度, k: 搜索次数 \\
  n/2, n/2/2=n/4, n/8, n/16,..., n/2^k \\
  n/2^k = 1(最坏假设)\\
  2^k = n\\
  k = log(n)
  $$

* 优先队列 Binary \(max\) Heap _优先队列_是一个数据结构 但是其本身是由数据结构&&算法构成

算法复杂度分析 关于复杂度的概念我们会在下一章节详细讲解，接下来简单分析一下时间空间复杂度，大家只要了解就好。

最糟糕的情况下，我们需要将数组迭代切分到只有一个元素，那么需要多少次才会切到只有一个元素呢？假设如果数组有n个元素，切分的次数为k，每次都切一半，也就是 n / \(2^k\) = 1，转换公式为 2^k = n，那么k就是log2N，所以时间复杂度为O\(log2N\)。

因为我们不需要额外的空间，所以空间复杂度为O\(1\)。

### LeetCode实践练习

以下是leetcode中和二分搜索相关的题目：

1. [Find Smallest Letter Greater Than Target \(744\)](https://leetcode.com/problems/find-smallest-letter-greater-than-target/)
2. [Search a 2D Matrix \(74\)](https://leetcode.com/problems/search-a-2d-matrix/)
3. [Single Element in a Sorted Array \(540\)](https://leetcode.com/problems/single-element-in-a-sorted-array/)
4. [Find First and Last Position of Element in Sorted Array \(34\)](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

### Algorithms List

* [时间空间复杂度 Time Complexity, Space Complexity](bigo.md)
* [排序算法 Sorting](sorting.md)
* 链表 List
* 栈和队列 Stack, Queue
* 优先队列和哈希表 Priority Queue, Hash Table
* 树和图 Tree, Graph

