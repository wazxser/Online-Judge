[数组](https://github.com/wazxser/Online-Judge/blob/master/leetcode/README.md#数组)
[数字](https://github.com/wazxser/Online-Judge/blob/master/leetcode/README.md#数字)
[链表](https://github.com/wazxser/Online-Judge/blob/master/leetcode/README.md#链表)
[二叉树](https://github.com/wazxser/Online-Judge/blob/master/leetcode/README.md#二叉树)
[字符串](https://github.com/wazxser/Online-Judge/blob/master/leetcode/README.md#字符串)
[滑动窗口](https://github.com/wazxser/Online-Judge/blob/master/leetcode/README.md#滑动窗口)
[哈希](https://github.com/wazxser/Online-Judge/blob/master/leetcode/README.md#哈希)
[动态规划](https://github.com/wazxser/Online-Judge/blob/master/leetcode/README.md#动态规划)
[回溯](https://github.com/wazxser/Online-Judge/blob/master/leetcode/README.md#回溯)
[数据结构](https://github.com/wazxser/Online-Judge/blob/master/leetcode/README.md#数据结构)



## 数组
#### 215. Kth Largest Element in an Array

#### 剑指 最小的k个数
输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。


#### 剑指 连续子数组的最大和
给一个数组，返回它的最大连续子序列的和

#### 53. 最大子序和
```
int FindGreatestSumOfSubArray(vector<int> array) {
        if(array.size() == 0){
            return 0;
        }
        
        int res = array[0];
        int temp = array[0];
        for(int i = 1; i < array.size(); i++){
            temp = max(temp + array[i], array[i]);
            res = max(res, temp);
        }
        
        return res;
    }
```

#### 1. Two Sum 
给一个数组和数字，给出数组中两个元素相加和为指定数字的索引，假定只有唯一解。数组未排序。

1、暴力解决
2、哈希

#### 167. Two Sum II - Input array is sorted
在非递减排序数组中，找到两个数字相加和为S的索引。

头尾双指针

#### 11. 盛最多水的容器
给定 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点 (i, ai) 。在坐标内画 n 条垂直线，垂直线 i 的两个端点分别为 (i, ai) 和 (i, 0)。找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
说明：你不能倾斜容器，且 n 的值至少为 2。

头尾双指针

#### 84. 柱状图中最大的矩形
给定 n 个非负整数，用来表示柱状图中各个柱子的高度。每个柱子彼此相邻，且宽度为 1 。
求在该柱状图中，能够勾勒出来的矩形的最大面积。

单调递增栈

#### 85. 最大矩形
给定一个仅包含 0 和 1 的二维二进制矩阵，找出只包含 1 的最大矩形，并返回其面积。

输入:

[
  ["1","0","1","0","0"],
  
  ["1","0","1","1","1"],
  
  ["1","1","1","1","1"],
  
  ["1","0","0","1","0"]
]

输出: 6


#### 42. 接雨水
给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。

1、单调递减栈

2、动态规划

先遍历一遍存入每个位置左边的最大值，再遍历一遍存入每个位置右边的最大值，同时取左边和右边最大值的较小值，如果大于当前值，就可以存水，将高度差累加到结果中。

3、左右指针 

#### 剑指 和为S的两个数字
输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。

两个数和相等，绝对值差越大乘积越小

#### 剑指 和为S的连续正数序列
小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,他马上就写出了正确答案是100。但是他并不满足于此,他在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。没多久,他就得到另一组连续正数和为100的序列:18,19,20,21,22。现在把问题交给你,你能不能也很快的找出所有和为S的连续正数序列? Good Luck!

两个数字查找

#### 15. 三数之和
给定一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？找出所有满足条件且不重复的三元组。
注意：答案中不可以包含重复的三元组。

因为不要求返回索引，所以可以先排序。
遍历数组，确定了一个元素，寻找剩下两个元素时对该元素到数组末尾的子数组用双指针查找。
遍历数组时，如果元素大于0，break
如果元素和前一个元素相同，跳过。


#### 4. Median of Two Sorted Arrays 两个有序数组的中位数
给两个已经排好序的数组，长度分别为m和n，给出这两个数组的中位数，返回类型为double，时间复杂度要求O(log (m+n))。

主要思路：看时间复杂度要求和一般找排好序数组的中位数都是用二分法，这里是两个数组，思路为在两个数组找到两个位置i和j，把两个数组分为两个集合，0\~i-1, 0\~j-1和i\~m, j\~n，前一个集合的数字都小于后一个集合。

#### 剑指 旋转数组中的最小数
把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。

二分查找，如果arr[mid] > arr[left]，最小值在右边，left = mid+1； 如果arr[mid] < arr[left]，最小值在左边，right = mid；相等，left++。

#### 33. 搜索旋转排序数组

#### 287. Find the Duplicate Number 找出数组中重复的数字
给一个数组长度为n，一共包括n+1个数字，数组中元素取值范围为1~n，找出数组中唯一重复的数字。

利用题目给出的条件，元素的值在索引值的范围内，采用二分法，每次遍历数组找出小于等于mid的元素个数cnt，如果cnt <= mid，重复数字在范围(mid, n]，如果cnt > mid，重复数字在[1, mid]

#### 剑指 数组中重复的数字
在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。


#### 剑指 二维数组中的查找
在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

从左下角开始查找

#### 剑指 调整数组顺序使奇数位于偶数前面
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。

```
void reOrderArray(vector<int> &array) {
        if(array.size() == 0){
            return;
        }
        for(int i = 0; i < array.size(); i++){
            if(array[i] % 2 != 0){
                for(int j = i - 1; j >= 0; j--){
                    if(array[j] % 2 == 0){
                        int temp = array[j+1];
                        array[j+1] = array[j];
                        array[j] = temp;
                    }
                }
            }
        }
    }
```
#### 剑指 构建乘积数组
给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法。

顺着乘一遍，倒着乘一遍

#### 剑指 整数中1出现的次数 （从1到n整数中1出现的次数）
求出1\~13的整数中1出现的次数,并算出100\~1300的整数中1出现的次数？为此他特别数了一下1\~13中包含1的数字有1、10、11、12、13因此共出现6次,但是对于后面问题他就没辙了。ACMer希望你们帮帮他,并把问题更加普遍化,可以很快的求出任意非负整数区间中1出现的次数（从1 到 n 中1出现的次数）。

```
int NumberOf1Between1AndN_Solution(int n)
{
        int count = 0;
        long long i = 1;
        for(i = 1; i <= n; i *= 10){
            int a = n / i, b = n % i;
            count = count + (a + 8) / 10 * i + (a % 10 == 1) * (b + 1);
        }
        return count;
}
```

#### 48. 旋转图像
给定一个 n × n 的二维矩阵表示一个图像。将图像顺时针旋转 90 度。

找旋转前和旋转后的索引关系

```
void rotate(vector<vector<int>>& matrix) {
  for(int i = 0, temp = 0, n = matrix.size()-1; i <= n/2; i++){
      for(int j = i; j < n-i; j++){
          temp = matrix[j][n-i];
          matrix[j][n-i] = matrix[i][j];
          matrix[i][j] = matrix[n-j][i];
          matrix[n-j][i] = matrix[n-i][n-j];
          matrix[n-i][n-j] = temp;
      }
  }
}
```

#### 剑指 数字在排序数组中出现的次数
统计一个数字在排序数组中出现的次数。

分别二分查找该数字第一次出现的位置和最后一次出现的位置。

#### 34. 在排序数组中查找元素的第一个位置和最后一个位置

一次二分查找，找到该元素的一个位置后，再找它的第一个位置和最后一个位置

#### 剑指 数组中的逆序对
在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。输入一个数组,求出这个数组中的逆序对的总数P。并将P对1000000007取模的结果输出。 即输出P%1000000007



#### 剑指 顺时针打印矩阵
输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，例如，如果输入如下4 X 4矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.

#### 55. 跳跃游戏
给定一个非负整数数组，你最初位于数组的第一个位置。数组中的每个元素代表你在该位置可以跳跃的最大长度。判断你是否能够到达最后一个位置。

#### 56. 合并区间
给出一个区间的集合，请合并所有重叠的区间。

#### 75. 颜色分类
给定一个包含红色、白色和蓝色，一共 n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。
此题中，我们使用整数 0、 1 和 2 分别表示红色、白色和蓝色。
注意:
不能使用代码库中的排序函数来解决这道题。
（使用常数空间一趟遍历解决问题）

设置left和right，分别指向左端开始遇到的最后一个零的位置和右端开始遇到的最后一个2的位置，i从left开始，如果i位置元素为0且i不等于left，i和left位置元素互换，left++，right同理。


#### 121.买卖股票的最佳时间
给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。
如果你最多只允许完成一笔交易（即买入和卖出一支股票），设计一个算法来计算你所能获取的最大利润。
注意你不能在买入股票前卖出股票。


#### 128. 最长连续序列
给定一个未排序的整数数组，找出最长连续序列的长度。
要求算法的时间复杂度为 O(n)。



## 数字
#### 剑指 孩子们的游戏 约瑟夫问题
每年六一儿童节,牛客都会准备一些小礼物去看望孤儿院的小朋友,今年亦是如此。HF作为牛客的资深元老,自然也准备了一些小游戏。其中,有个游戏是这样的:首先,让小朋友们围成一个大圈。然后,他随机指定一个数m,让编号为0的小朋友开始报数。每次喊到m-1的那个小朋友要出列唱首歌,然后可以在礼品箱中任意的挑选礼物,并且不再回到圈中,从他的下一个小朋友开始,继续0...m-1报数....这样下去....直到剩下最后一个小朋友,可以不用表演,并且拿到牛客名贵的“名侦探柯南”典藏版(名额有限哦)。请你试着想下,哪个小朋友会得到这份礼品呢？(注：小朋友的编号是从0到n-1)。
如果没有小朋友，请返回-1

```
int LastRemaining_Solution(int n, int m)
    {
        if(n == 0){
            return -1;
        }
        else if(n == 1){
            return 0;
        }
        else{
            return (LastRemaining_Solution(n-1, m) + m) % n;
        }
    }
```


#### 剑指 数组中只出现一次的数字 136. 只出现一次的数字
一个整型数组里除了两个数字之外，其他的数字都出现了两次。请写程序找出这两个只出现一次的数字。

遍历异或一遍，得到两个数字的异或值temp，找到temp二进制数字中1出现的最低位index，将两个数字区分开，再遍历一遍数组，异或。

#### 剑指 二进制中1的个数
输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。

#### 剑指 数值的整数次方 快速幂
给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。保证base和exponent不同时为0

```
double Power(double base, int exponent) {
    double res = 1.0;
    int n = abs(exponent);
    while(n){
        if(n&1){
            res *= base;
        }

        base *= base;
        n >>= 1;
    }

    return exponent > 0 ? res : (1/res);
}
```

#### 剑指 丑数
把只包含质因子2、3和5的数称作丑数（Ugly Number）。例如6、8都是丑数，但14不是，因为它包含质因子7。 习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。

```
class Solution {
public:
    int GetUglyNumber_Solution(int index) {
// 0-6的丑数分别为0-6
        if(index < 7) return index;
        //p2，p3，p5分别为三个队列的指针，newNum为从队列头选出来的最小数
        int p2 = 0, p3 = 0, p5 = 0, newNum = 1;
        vector<int> arr;
        arr.push_back(newNum);
        while(arr.size() < index) {
            //选出三个队列头最小的数
            newNum = min(arr[p2] * 2, min(arr[p3] * 3, arr[p5] * 5));
            //这三个if有可能进入一个或者多个，进入多个是三个队列头最小的数有多个的情况
            if(arr[p2] * 2 == newNum) p2++;
            if(arr[p3] * 3 == newNum) p3++;
            if(arr[p5] * 5 == newNum) p5++;
            arr.push_back(newNum);
        }
        return newNum;
    }
};
```

#### 剑指 把数组排成最小的数
输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。例如输入数组{3，32，321}，则打印出这三个数字能排成的最小数字为321323。

把数组中数字按照转换成字符串的大小进行排序，sort函数cmp实现。

#### 剑指 求1+2+3+...+n 
求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。

```
int Sum_Solution(int n) {
        int res = n;
        res && (res += Sum_Solution(res - 1));
        return res;
}
```

#### 剑指 不用加减乘除做加法
写一个函数，求两个整数之和，要求在函数体内不得使用+、-、\*、/四则运算符号。

```
int Add(int num1, int num2)
{
        while(num2 != 0){
            int temp = num1 ^ num2;
            num2 = (num1 & num2) << 1;
            num1 = temp;
        }

        return num1;
}
```

二进制异或相当于计算不进位的二进制加法，相与再左移一位，相当于计算进位。

#### 31. 下一个排列
实现获取下一个排列的函数，算法需要将给定数字序列重新排列成字典序中下一个更大的排列。如果不存在下一个更大的排列，则将数字重新排列成最小的排列（即升序排列）。必须原地修改，只允许使用额外常数空间。


#### 剑指 数组中出现超过一半的数字
数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。



## 链表
#### 剑指 两个链表的第一个公共结点
输入两个链表，找出它们的第一个公共结点。

可以先计算出两个链表的长度，得到长度差k，长的链表先走k步，再一起走，相遇就是公共结点

另外一种：
```
 ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        ListNode *ptr1 = pHead1;
        ListNode *ptr2 = pHead2;
        
        while(ptr1 != ptr2){
            ptr1 = !ptr1 ? pHead2 : ptr1->next;
            ptr2 = !ptr2 ? pHead1 : ptr2->next;
        }
        
        return ptr1;
    }
```
短链表的指针先走到终点，然后换到长链表的头结点，这是长链表指针在长链表中走了一个短链表的长度，长链表指针走到终点时，短链表指针在长链表中走了长链表减短链表的长度差，长链表这时再到短链表头部，再相遇时就是两个链表的公共结点。

#### 2. Add Two Numbers
给两个链表，每个链表表示一个数字，链表从头到尾表示数字的从低位到高位，给出两个链表表示的数字相加之后的和的链表形式

直接同时遍历两个链表，将两个链表对应位置的数字以及进位相加，得到结果相应位置的数字，最后注意两个链表长度不一定相同。

#### 剑指 删除链表中重复的结点
在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5

设置两个指针

#### 141. 环形链表
给定一个链表，判断链表中是否有环。

快慢指针是否相遇

#### 剑指 链表中环的入口结点
给一个链表，若其中包含环，请找出该链表的环的入口结点，否则，输出null。

快慢指针，都从表头出发，快指针每次走两步，慢指针每次走一步，快慢指针相遇时停止，慢指针回到开头，快慢指针每次都走一步，再相遇时为入口节点。

#### 剑指 反转链表
输入一个链表，反转链表后，输出新链表的表头。

三个指针，一次循环

#### 剑指 合并两个排序的链表
输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。

三个指针

#### 23. 合并K个排序的链表
合并 k 个排序链表，返回合并后的排序链表。请分析和描述算法的复杂度。

分治，两两合并

#### 剑指 从尾到头打印链表
输入一个链表，按链表从尾到头的顺序返回一个ArrayList。

用栈

#### 剑指 链表中倒数第k个结点
输入一个链表，输出该链表中倒数第k个结点。

两个指针，一个先走k步

#### 19. 删除链表的倒数第N个结点
给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。


#### 剑指 复杂链表的复制
输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，另一个特殊指针指向任意一个节点），返回结果为复制后复杂链表的head。（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）

注意：random指针可能指向该节点的前面的结点

#### 剑指 二叉搜索树与双向链表
输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求不能创建任何新的结点，只能调整树中结点指针的指向。



## 二叉树
#### 剑指 重建二叉树   105. 从前序与中序遍历序列构造二叉树
输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。

#### 106. 从中序与后序遍历序列构造二叉树


#### 剑指 二叉树的下一个结点
给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。

如果节点有右节点，则找右子树上的最左节点，如果没有，向上找父节点，如果父节点的左节点等于循环的节点，则返回该父节点。

#### 剑指 对称的二叉树
请实现一个函数，用来判断一颗二叉树是不是对称的。注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。

递归，先判断左右节点为空的情况，然后判断左右节点的值是否相同，如相同，再递归到左节点的右节点和右节点的左节点，左节点的左节点和右节点的右节点

#### 剑指 按之字形顺序打印二叉树
请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，其他行以此类推。

用两个栈实现

#### 剑指 二叉树的最大深度 104. 二叉树的最大深度

#### 114. 二叉树展开为链表
给定一个二叉树，原地将它展开为链表。

```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root){
            return;
        }
        if(root->left){
            flatten(root->left);
        }
        if(root->right)
            flatten(root->right);
        TreeNode *temp = root->right;
        root->right = root->left;
        root->left = NULL;
        while(root->right)
            root = root->right;
        root->right = temp;
    }
};
```

#### 124. 二叉树中的最大路径和
给定一个非空二叉树，返回其最大路径和。
本题中，路径被定义为一条从树中任意节点出发，达到任意节点的序列。该路径至少包含一个节点，且不一定经过根节点。

```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        dfs(root, res);
        return res;
    }
    
    int dfs(TreeNode * root, int & res){
        if(!root){
            return 0;
        }
        
        int left = max(dfs(root->left, res), 0);
        int right = max(dfs(root->right, res), 0);
        
        res = max(res, left+right+root->val);
        return max(left, right) + root->val;
    }
};
```


#### 94. 二叉树的中序遍历
给定一个二叉树，返回它的中序 遍历。

递归
```
vector<int> res;
    
    vector<int> inorderTraversal(TreeNode* root) {
        if(root != NULL){
            inorderTraversal(root->left);
            res.push_back(root->val);
            inorderTraversal(root->right);
        }
        
        return res;
    }
```

非递归
```
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> tempStack;
        while(!tempStack.empty() || root != NULL){
            if(root != NULL){
                tempStack.push(root);
                root = root->left;
            }
            else{
                root = tempStack.top();
                res.push_back(tempStack.top()->val);
                tempStack.pop();
                root = root->right;
            }
        }
        
        return res;
    }
};
```

#### 144. 二叉树的前序遍历
递归：
```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root != NULL){
            res.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        
        return res;
    }
};
```

非递归
```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> tempStack;
        tempStack.push(root);
        while(!tempStack.empty()){
            TreeNode* temp = tempStack.top();
            tempStack.pop();
            if(temp != NULL){
                res.push_back(temp->val);
                tempStack.push(temp->right);
                tempStack.push(temp->left);
            }
        }
        return res;
    }
};
```

#### 145. 二叉树的后序遍历
递归：
```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root != NULL){
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            res.push_back(root->val);
        }
        
        return res;
    }
};
```


非递归：
```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> tempStack;
        tempStack.push(root);
        while(!tempStack.empty()){
            TreeNode* temp = tempStack.top();
            tempStack.pop();
            if(temp != NULL){
                res.insert(res.begin(), temp->val);
                tempStack.push(temp->left);
                tempStack.push(temp->right);
            }
        }
        return res;
    }
};
```


#### 剑指 将二叉树打印成多行 层序遍历
从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。

用一个队列实现

#### 剑指 从上往下打印二叉树 层序遍历
从上往下打印出二叉树的每个节点，同层节点从左至右打印。

队列加cnt记录每层结点个数

#### 剑指 序列化二叉树
请实现两个函数，分别用来序列化和反序列化二叉树

二叉树的序列化是指：把一棵二叉树按照某种遍历方式的结果以某种格式保存为字符串，从而使得内存中建立起来的二叉树可以持久保存。序列化可以基于先序、中序、后序、层序的二叉树遍历方式来进行修改，序列化的结果是一个字符串，序列化时通过 某种符号表示空节点（#），以 ！ 表示一个结点值的结束（value!）。

二叉树的反序列化是指：根据某种遍历顺序得到的序列化字符串结果str，重构二叉树。

#### 剑指 二叉搜索树上的第k个节点
给定一棵二叉搜索树，请找出其中的第k小的结点。例如， （5，3，7，2，4，6，8）中，按结点数值大小顺序第三小结点的值为4。

#### 剑指 二叉树的镜像
操作给定的二叉树，将其变换为源二叉树的镜像。

左右子树交换，再递归

#### 剑指 树的子结构
输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）

#### 剑指 二叉搜索树的后序遍历序列
输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。

#### 剑指 二叉树中和为某一值的路径
输入一颗二叉树的根节点和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。(注意: 在返回值的list中，数组长度大的数组靠前)

#### 剑指 平衡二叉树
输入一棵二叉树，判断该二叉树是否是平衡二叉树。

#### 剑指 二叉树的深度
输入一棵二叉树，求该树的深度。从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。

#### 98. 验证二叉搜索树
给定一个二叉树，判断其是否是一个有效的二叉搜索树。

#### 96. 不同的二叉搜索树
给定一个整数 n，求以 1 ... n 为节点组成的二叉搜索树有多少种？

```
class Solution {
public:
    int numTrees(int n) {
        int dp[n+1];
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = 0;
            for(int j = 0; j < i; j++){
                dp[i] += dp[j] * dp[i-j-1];
            }
        }
        
        return dp[n];
    }
};
```




## 字符串


#### 5.Longest Palindromic Substring 最长回文子串
给一个字符串s，给出s中的最长回文子串。

分为回文串中间是一个还是两个字符两中情况，遍历字符串，以遍历到的字符为中间字符，查找最长长度的回文串。

#### 剑指 正则表达式匹配 
请实现一个函数用来匹配包括'.'和'*'的正则表达式。模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以出现任意次（包含0次）。 在本题中，匹配是指字符串的所有字符匹配整个模式。例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是与"aa.a"和"ab*a"均不匹配

#### 10. Regular Expression Matching 正则表达式匹配
给一个字符串s和一个模式串p，判断s是否符合p的模式，其中'.'匹配任意一个字符，'\*'匹配0个或多个前置字符。

递归匹配
分情况讨论
- p为空，判断s是否为空
- p只有一个字符，判断s是否只有一个字符，并且s[0] = p[0]或者p[0] = '.'
- p[1] != '\*', return (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p.substr(1))
- p[1] == '\*', 如果s和p的第一个字符匹配，可以选择p匹配s的一个或者零个或者多个相同的字符；如果s和p的第一个字符不匹配，可以跳过p的前两个字符再递归。

#### 剑指 字符串的排列 全排列
输入一个字符串,按字典序打印出该字符串中字符的所有排列。例如输入字符串abc,则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。

#### 46. 全排列
给定一个没有重复数字的序列，返回其所有可能的全排列。



#### leetcode 72. Edit Distance 编辑距离
计算从一个字符串变为另外一个字符串所需要的最小操作数，操作包括增加，删除，替换


#### 剑指 替换空格
请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

先计算一共需要增加多少空格，再从后往前遍历

#### 剑指 表示数值的字符串
请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。 但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。

分情况讨论

#### 剑指 左旋转字符串
汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,要求输出循环左移3位后的结果，即“XYZdefabc”。是不是很简单？OK，搞定它！

先翻转前k个字符，再翻转k以后的字符，在整体翻转一遍

#### 剑指 扑克牌顺子
LL今天心情特别好,因为他去买了一副扑克牌,发现里面居然有2个大王,2个小王(一副牌原本是54张)，他随机从中抽出了5张牌,想测测自己的手气,看看能不能抽到顺子,如果抽到的话,他决定去买体育彩票,嘿嘿！！“红心A,黑桃3,小王,大王,方片5”,“Oh My God!”不是顺子.....LL不高兴了,他想了想,决定大\小 王可以看成任何数字,并且A看作1,J为11,Q为12,K为13。上面的5张牌就可以变成“1,2,3,4,5”(大小王分别看作2和4),“So Lucky!”。LL决定去买体育彩票啦。 现在,要求你使用这幅牌模拟上面的过程,然后告诉我们LL的运气如何， 如果牌能组成顺子就输出true，否则就输出false。为了方便起见,你可以认为大小王是0。

用num记录numbers[i] - numbers[i-1]，遇到大小王num++。

#### 剑指 翻转单词顺序列
牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。同事Cat对Fish写的内容颇感兴趣，有一天他向Fish借来翻看，但却读不懂它的意思。例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？


#### 剑指 把字符串转换成整数

将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0


## 滑动窗口
#### 3. Longest Substring Without Repeating Characters 最长无重复子串
给一个字符串s，给出这个字符串中最长的没有重复字符的子串的长度。

设定一个左指针left，记录当前没有重复字符的子串的最左位置。初始化为0。设定一个数组last，记录每个字符在s中最近出现的位置。初使为-1。

遍历s，当字符c最近出现的位置last[s[i]]大于等于left时，表示出现重复字符，更新左指针。循环中每次更新last[s[i]] = i 和res = max(res, i - left + 1)。

#### 剑指 滑动窗口的最大值
给定一个数组和滑动窗口的大小，找出所有滑动窗口里数值的最大值。例如，如果输入数组{2,3,4,2,6,2,5,1}及滑动窗口的大小3，那么一共存在6个滑动窗口，他们的最大值分别为{4,4,6,6,6,5}； 针对数组{2,3,4,2,6,2,5,1}的滑动窗口有以下6个： {[2,3,4],2,6,2,5,1}， {2,[3,4,2],6,2,5,1}， {2,3,[4,2,6],2,5,1}， {2,3,4,[2,6,2],5,1}， {2,3,4,2,[6,2,5],1}， {2,3,4,2,6,[2,5,1]}。

#### 239. 滑动窗口的最大值

暴力法，双端队列，动态规划



## 哈希

#### 剑指 字符流中第一个不重复的字符 
请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。

用哈希数组记录每个字符出现的次数

#### 剑指 第一个只出现一次的字符
在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,并返回它的位置, 如果没有则返回 -1（需要区分大小写）.

用unordered_map<char, int>记录字符和出现次数，再从头遍历

#### 76. 最小覆盖子串
给你一个字符串 S、一个字符串 T，请在字符串 S 里面找出：包含 T 所有字母的最小子串。



## 动态规划
#### 剑指 跳台阶
一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。

#### 剑指 变态跳台阶
一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

2\*jumpFloorII(number-1)

#### 剑指 矩形覆盖
我们可以用2\*1的小矩形横着或者竖着去覆盖更大的矩形。请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？

dp[n] = dp[n-1] + dp[n-2]

#### 剑指 剪绳子
给你一根长度为n的绳子，请把绳子剪成整数长的m段（m、n都是整数，n>1并且m>1），每段绳子的长度记为k[0],k[1],...,k[m]。请问k[0]xk[1]x...xk[m]可能的最大乘积是多少？例如，当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘积是18。

dp[n] = max(temp, dp[i-j] * dp[j])

#### 64. 最小路径和
给定一个包含非负整数的 m x n 网格，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。
说明：每次只能向下或者向右移动一步。

dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];

初始化，每行直走，每列直走。

#### 62. 不同的路径
一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为“Start” ）。机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为“Finish”）。问总共有多少条不同的路径？

dp[j] += dp[j-1]

#### 139. 单词拆分
给定一个非空字符串 s 和一个包含非空单词列表的字典 wordDict，判定 s 是否可以被空格拆分为一个或多个在字典中出现的单词。
说明：
拆分时可以重复使用字典中的单词。
你可以假设字典中没有重复的单词。




## 回溯
#### 剑指 机器人的运动范围
地上有一个m行和n列的方格。一个机器人从坐标0,0的格子开始移动，每一次只能向左，右，上，下四个方向移动一格，但是不能进入行坐标和列坐标的数位之和大于k的格子。 例如，当k为18时，机器人能够进入方格（35,37），因为3+5+3+7 = 18。但是，它不能进入方格（35,38），因为3+5+3+8 = 19。请问该机器人能够达到多少个格子？

#### 剑指 矩阵中的路径
请设计一个函数，用来判断在一个矩阵中是否存在一条包含某字符串所有字符的路径。路径可以从矩阵中的任意一个格子开始，每一步可以在矩阵中向左，向右，向上，向下移动一个格子。如果一条路径经过了矩阵中的某一个格子，则该路径不能再进入该格子。 

#### 39. 组合总和
给定一个无重复元素的数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。
candidates 中的数字可以无限制重复被选取。

#### 17. 电话号码的字母组合
给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。
给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。

```
void dfs(string digits, int level, vector<string> &res, string dict[], string out){
        if(level == digits.size()) 
            res.push_back(out);
        else{
            int index = digits[level] - '2';
            string str = dict[index];
            for(int i = 0; i < str.length(); i++){
                out.push_back(str[i]);
                dfs(digits, level+1, res, dict, out);
                out.pop_back();
            }
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits == ""){
            return res;
        }
        string dict[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        dfs(digits, 0, res, dict, "");
        return res;
    }
```

#### 22. 括号生成
给出 n 代表生成括号的对数，请你写出一个函数，使其能够生成所有可能的并且有效的括号组合。

```
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(n==0)
            return res;
        dfs(n, n, "", res);
        return res;
    }
    
    void dfs(int a, int b, string out, vector<string>& res){
        if(a > b){
            return;
        }
        if(a == 0 && b == 0)
            res.push_back(out);
        else{
            if(a > 0)
                dfs(a-1, b, out+"(", res);
            if(b > 0)
                dfs(a, b-1, out+")", res);
        }
    }
};
```

#### 78. 子集
给定一组不含重复元素的整数数组 nums，返回该数组所有可能的子集（幂集）。
说明：解集不能包含重复的子集。

#### 79. 单词搜索
给定一个二维网格和一个单词，找出该单词是否存在于网格中。
单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。


## 数据结构
#### 剑指 栈的压入弹出序列
输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否可能为该栈的弹出顺序。假设压入栈的所有数字均不相等。例如序列1,2,3,4,5是某栈的压入顺序，序列4,5,3,2,1是该压栈序列对应的一个弹出序列，但4,3,5,1,2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）

用一个栈先压入push序列，再弹出和pop序列比较

#### 剑指 包含min函数的栈
定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数（时间复杂度应为O（1））。

两个栈

#### 剑指 数据流中的中位数
如何得到一个数据流中的中位数？如果从数据流中读出奇数个数值，那么中位数就是所有数值排序之后位于中间的数值。如果从数据流中读出偶数个数值，那么中位数就是所有数值排序之后中间两个数的平均值。我们使用Insert()方法读取数据流，使用GetMedian()方法获取当前读取数据的中位数。

两个优先队列

#### 32. 最长有效括号
给定一个只包含 '(' 和 ')' 的字符串，找出最长的包含有效括号的子串的长度。

栈

#### 146. LRU缓存机制
运用你所掌握的数据结构，设计和实现一个  LRU (最近最少使用) 缓存机制。它应该支持以下操作： 获取数据 get 和 写入数据 put 。

获取数据 get(key) - 如果密钥 (key) 存在于缓存中，则获取密钥的值（总是正数），否则返回 -1。
写入数据 put(key, value) - 如果密钥不存在，则写入其数据值。当缓存容量达到上限时，它应该在写入新数据之前删除最近最少使用的数据值，从而为新的数据值留出空间。

进阶:

你是否可以在 O(1) 时间复杂度内完成这两种操作？

示例:

LRUCache cache = new LRUCache( 2 /* 缓存容量 */ );

cache.put(1, 1);

cache.put(2, 2);

cache.get(1);       // 返回  1

cache.put(3, 3);    // 该操作会使得密钥 2 作废

cache.get(2);       // 返回 -1 (未找到)

cache.put(4, 4);    // 该操作会使得密钥 1 作废

cache.get(1);       // 返回 -1 (未找到)

cache.get(3);       // 返回  3

cache.get(4);       // 返回  4

```
class LRUCache {
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        auto it = m.find(key);
        if(it == m.end())
            return -1;
        l.splice(l.begin(), l, it->second);
        return it->second->second;
        
    }
    
    void put(int key, int value) {
        auto it = m.find(key);
        if(it != m.end()){
            l.erase(it->second);
        }
        
        l.push_front(make_pair(key, value));
        m[key] = l.begin();
        if(m.size() > cap){
            int k = l.rbegin()->first;
            l.pop_back();
            m.erase(k);
        }
    }
    
    int cap;
    unordered_map<int, list<pair<int, int>>::iterator > m;
    list<pair<int, int>> l;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
```

#### 208 实现Trie（前缀树）
实现一个 Trie (前缀树)，包含 insert, search, 和 startsWith 这三个操作。

示例:

Trie trie = new Trie();

trie.insert("apple");

trie.search("apple");   // 返回 true

trie.search("app");     // 返回 false

trie.startsWith("app"); // 返回 true

trie.insert("app");   

trie.search("app");     // 返回 true

```
class TrieNode{
public:
    TrieNode * child[26];
    bool isword;
    TrieNode(){
        isword = false;
        for(auto &a : child)
            a = nullptr;
    }
};

class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode * p = root;
        for(auto &a : word){
            int i = a - 'a';
            if (!p->child[i]) 
                p->child[i] = new TrieNode();
            p = p->child[i];
        }
        p->isword = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *p = root;
        for (auto &a : word) {
            int i = a - 'a';
            if (!p->child[i]) 
                return false;
            p = p->child[i];
        }
        return p->isword;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *p = root;
        for (auto &a : prefix) {
            int i = a - 'a';
            if (!p->child[i]) return false;
            p = p->child[i];
        }
        return true;
    }
private:
    TrieNode * root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
```

#### 剑指 用两个栈实现队列
用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。



