#ifndef __GEEKSFORGEEKS__
#define __GEEKSFORGEEKS__
#include <stdint.h>


#define bool 		_Bool
#define true 		1
#define false 		0

struct node
{
    int key;
    struct node *next;
};

struct binNode
{
    int key;
    struct binNode *left;
    struct binNode *right;
};

struct threadNode
{
    int key;
    struct threadNode *left;
    struct threadNode *right;
    int rightThread;
};


struct MaxHeap
{
    int size;
    int *array;
};

/* priority queue */
struct item {
	int item;
	int priority;
};

void insertPQ(struct item, int );
struct item *getHighestPrio(void);
void deleteHighestPrio();


void printArray(int *, int);

/* list */
void push(struct node **, int);
void printList(struct node *);
int  GetNth(struct node *, int);
void returnNth(struct node *, int, struct node **);
void deleteNode(struct node *);
void reverse(struct node **);
void recursiveReverse(struct node **);
int  detectLoop(struct node *, struct node **);
void pairWiseSwap(struct node *);
void swap(int *, int *);
void swapNode(struct node *, struct node *);
void deleteAlt(struct node *);
void rotate(struct node **, int);

/* tree */
struct binNode *newNode(int );
void preorder(struct binNode *);
void inorder(struct binNode *);
void postorder(struct binNode *);
struct threadNode *leftmost(struct threadNode *);
void threadInorder(struct threadNode *);
int sizeTree(struct binNode *);
int identicalTrees(struct binNode *, struct binNode *);
int maxDepth(struct binNode *);
void deleteTree(struct binNode **);
void __deleteTree(struct binNode *);
void mergeSort(int *, int, int);
void merge(int *, int, int, int);

/* sort */
int heapSort(int *, int);
struct MaxHeap *buildMaxHeap(int *, int);
int maxHeapify(struct MaxHeap *, int);
void insertSort(int *, int);

/* bit algorithms */
int getSingle(int *, int);
int isPowerOf2(int);
int getSetBit(int);
uint8_t swapNibbles(uint8_t n);
int32_t turnOffK(int, int);
bool isKBitSet(uint32_t, uint32_t);
bool isPalindrome(uint32_t);
void binIter(uint32_t);
void binRecu(int);

#endif
