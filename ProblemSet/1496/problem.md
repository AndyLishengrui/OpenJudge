# 电量的显示
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
手机大家都有吧？最上面的电量指示图都知道吧？现在呢，就需要你来编一个程序，根据用户给出的电量，模拟一个电量示意图。
原理很简单：对于给定的一个0~100之内的整数N（N就是电量的百分比，0%表示没电了，100%表示满电），用N个“|”来表示电量。


## Input
输入有多行。第一行是一个非负整数N，表示后面有N行输入。之后的N行，每一行是一个介于[0,100]的整数K，表示要显示的电量。


## Output
输出有N行，每行输出与上述输入一一对应。输出的格式为：
case ? : |||||||||......
其中？表示用例编号（从1开始），”：”前、后各有一个空格，“|”的个数与每行输入相同。


## Sample Input
```
4
0
1
20
3
```
## Sample Output
```
case 1 : 
case 2 : |
case 3 : ||||||||||||||||||||
case 4 : |||

```

## HINT