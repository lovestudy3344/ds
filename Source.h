#include<stdio.h>
//头文件，标准输入输出
#include<stdlib.h>
//内存分配函数malloc的头文件
typedef struct LNode
{
	int data;//数据
	struct LNode *next;//指向下一个节点的指针

}LNode, *Linklist;
void CreatList(Linklist &L, int n);//创建新的线性表的函数
void MergeList(Linklist &l1, Linklist &L2, Linklist &l3);//实现两个链表相结合形成第三个链表
void output(Linklist ll, int n);//新形成的线性表的输出
