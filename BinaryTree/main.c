/*************************************************************************
	> File Name: main.c
	> Author: Li Wen
	> Mail: loneavon1@gmail.com 
	> Created Time: 2014年02月23日 星期日 14时42分04秒
 ************************************************************************/

#include<stdio.h>
#include"BinaryTree.h"

void PreOrder(BTree root) {
    if(root != NULL) {
        PreOrder(root->left);
        PreOrder(root->right);
        printf("%d\n",root->key);
    }
}
    
BTree ctree=NULL;

int main(void) {

    BTree ctr=NULL;
    int a;
    int i=0;

    for(;i<=3;i++) {
        scanf("%d",&a);
        ctree = InsertBTreeRec(ctree,a);
    }
    printf("input num is over!\n");

//    PreOrder(ctree);

    ctr=BTreeFindRec(ctree,2);
    printf("RecFindNum:%d\n",*ctr);
    ctr=BTreeFindUnrec(ctree,3);
    printf("UnrecFindNum:%d\n",*ctr);

    return 0;
}
