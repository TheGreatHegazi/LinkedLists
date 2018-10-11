#ifndef listh
#define listh

struct node{
    int item;
    struct node *next;
};

void newList();
int addNode(int value);
void prettyPrint();
#endif

