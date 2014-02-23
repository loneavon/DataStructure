/*************************************************************************
	> File Name: BinaryTree.h
	> Author: Li Wen
	> Mail: loneavon1@gmail.com 
	> Created Time: 2014年02月23日 星期日 00时01分59秒
 ************************************************************************/

#include<stdio.h>

typedef struct BinaryTreeNode{
    int key;
    struct BinaryTreeNode * left;
    struct BinaryTreeNode * right;
}BinaryTree,* BTree;

BTree InsertBTreeRec(BTree CBtree,int key);
BTree InsertBTreeUnrec(BTree CBtree,int key);
BTree BTreeFindRec(BTree CBtree,int key);
BTree BTreeFindUnrec(BTree CBtree,int key);



