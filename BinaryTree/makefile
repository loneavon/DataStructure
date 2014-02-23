main: main.o InsertBTreeRec.o BTreeFindRec.o BTreeFindUnrec.o
	gcc -o main main.o InsertBTreeRec.o BTreeFindUnrec.o BTreeFindRec.o

main.o: main.c BinaryTree.h 
	gcc -c -g main.c

InsertBTreeRec.o: InsertBTreeRec.c BinaryTree.h
	gcc -c -g InsertBTreeRec.c

BTreeFindRec.o: BTreeFindRec.c BinaryTree.h
	gcc -c -g BTreeFindRec.c

BTreeFindUnrec.o: BTreeFindUnrec.c BinaryTree.h
	gcc -c -g BTreeFindUnrec.c

clean:
	rm main main.o InsertBTreeRec.o BTreeFindUnrec.o BTreeFindRec.o
