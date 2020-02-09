## 数组
#### 1. Two Sum 
给一个数组和数字，给出数组中两个元素相加和为指定数字的索引，假定只有唯一解。

暴力解决

#### 4. Median of Two Sorted Arrays 两个有序数组的中位数
给两个已经排好序的数组，长度分别为m和n，给出这两个数组的中位数，返回类型为double，时间复杂度要求O(log (m+n))。

主要思路：看时间复杂度要求和一般找排好序数组的中位数都是用二分法，这里是两个数组，思路为在两个数组找到两个位置i和j，把两个数组分为两个集合，0~i-1, 0~j-1和i~m, j~n，前一个集合的数字都小于后一个集合。

#### 287. Find the Duplicate Number 找出数组中重复的数字
给一个数组长度为n，一共包括n+1个数字，数组中元素取值范围为1~n，找出数组中唯一重复的数字。

利用题目给出的条件，元素的值在索引值的范围内，采用二分法，每次遍历数组找出小于等于mid的元素个数cnt，如果cnt <= mid，重复数字在范围(mid, n]，如果cnt > mid，重复数字在[1, mid]

## 数字
#### 剑指 数组中只出现一次的数字
一个整型数组里除了两个数字之外，其他的数字都出现了两次。请写程序找出这两个只出现一次的数字。

遍历异或一遍，得到两个数字的异或值temp，找到temp二进制数字中1出现的最低位index，将两个数字区分开，再遍历一遍数组，异或。


## 链表
#### 2. Add Two Numbers
给两个链表，每个链表表示一个数字，链表从头到尾表示数字的从低位到高位，给出两个链表表示的数字相加之后的和的链表形式

直接同时遍历两个链表，将两个链表对应位置的数字以及进位相加，得到结果相应位置的数字，最后注意两个链表长度不一定相同。


## 二叉树


## 字符串


## 滑动窗口
#### 3. Longest Substring Without Repeating Characters 最长无重复子串
给一个字符串s，给出这个字符串中最长的没有重复字符的子串的长度。

设定一个左指针left，记录当前没有重复字符的子串的最左位置。初始化为0。设定一个数组last，记录每个字符在s中最近出现的位置。初使为-1。

遍历s，当字符c最近出现的位置last[s[i]]大于等于left时，表示出现重复字符，更新左指针。循环中每次更新last[s[i]] = i 和res = max(res, i - left + 1)。


## 哈希