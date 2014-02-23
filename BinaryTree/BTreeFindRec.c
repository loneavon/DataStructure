/*************************************************************************
	> File Name: BTreeFindRec.c
	> Author: Li Wen
	> Mail: loneavon1@gmail.com 
	> Created Time: 2014年02月23日 星期日 21时16分55秒
 ************************************************************************/

#include<stdio.h>
#include"BinaryTree.h"

BTree BTreeFindRec(BTree ctree, int key){
    if (!ctree)
        return NULL;

    if(ctree->key == key){
        return ctree;
    }else if (ctree->key > key)
        return BTreeFindRec(ctree->left,key);
    else
        return BTreeFindRec(ctree->right,key);
}









