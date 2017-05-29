#include"include/travel tree.h"
void TraverseTree(Tree T){
    if(T){
        visit(T->data);
        TreaverseTree(T->firstchild);
        TreaverseTree(T->nextsibling);
    }
    return 0;
}
