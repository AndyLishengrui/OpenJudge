# 一天中的第几秒
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
一天24小时，每小时60分钟，每分钟60秒。一天共有86400秒。

0点0分0秒是每天的第1秒；
0点0分1秒是每天的第2秒；
0点1分0秒是每天的第61秒；
1点0分0秒是每天的第3601秒；
23点59分59秒是每天的第86400秒。

你的任务是编写一个程序，计算出一个24小时制的时间（从00:00:00到23:59:59）是这一天的第几秒？


## Input
每行输入24小时制的时间，至EOF结束。
时间的格式为“hh:mm:ss”，时、分、秒各占2位，不足两位的有前缀0，如0点0分0秒为“00:00:00”。
输入的时间均满足0<=hh<23，0<=mm,ss<=59。


## Output
每行输出为对应输入行的计算结果，仅为一个整数n，表示输入的时间是这一天的第n秒。


## Sample Input
```
00:00:00
00:00:01
00:01:00
00:59:59
02:46:38
23:59:59

```
## Sample Output
```
1
2
61
3600
9999
86400

```

## HINT
