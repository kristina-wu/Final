#include"include/delete tree.h"
void deleteTree(Tree T){
    if(!T)
        return OK;
    else{
        deleteTree(T->firstchild);
        deleteTree(T->nextsibling);
        free(T);
        T=NULL;
    }
}
