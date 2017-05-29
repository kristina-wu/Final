#include"include/inittree.h"
Tree InitTree(){
  Tree T=NULL;
  int ch;
  ch=getchar();
  if(ch!='#'){
       T=(Tree)malloc(sizeof(TNode));
       T->firstchild=NULL;
       T->nextsibling=NULL;
       T->data=ch;
  }
  return T;
}
