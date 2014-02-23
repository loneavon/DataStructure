/*************************************************************************
	> File Name: BTreeFindUnrec.c
	> Author: Li Wen
	> Mail: loneavon1@gmail.com 
	> Created Time: 2014年02月23日 星期日 21时24分40秒
 ************************************************************************/

#include<stdio.h>
#include"BinaryTree.h"

BTree BTreeFindUnrec(BTree ctree, int key){
    
    BTree s=ctree;

    if (!s)
        return NULL;

    while (s){
        if (s->key == key){
            return s;
        }else if (s->key > key){
            s=s->left;
        }else
            s=s->right;
    }

    return NULL;
}
