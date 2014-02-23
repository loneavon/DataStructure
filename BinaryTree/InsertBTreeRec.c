/*************************************************************************
	> File Name: InsertBTreeRec.c
	> Author: Li Wen
	> Mail: loneavon1@gmail.com 
	> Created Time: 2014年02月23日 星期日 00时16分59秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"BinaryTree.h" 

BTree InsertBTreeRec(BTree root,int key) {
    if(NULL == root){
        BTree newtree;
        newtree=(BTree)malloc(sizeof(BinaryTree));
        newtree->key=key;
        root=newtree;
    }else if(root->key >= key){
        root->left = InsertBTreeRec(root->left,key);
    }else{
        root->right = InsertBTreeRec(root->right,key);
    }
    return root;
}
