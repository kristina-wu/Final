#include"include/tree depth.h"
void TreeDepth(Tree T){
    int height=0,hmax=0;
    if(T){
      Tree p=T->firstchild;
      while(p){
         height=TreeDrpth(p);
         p=p->nextsibling;
         if(hmax
            hmax=height;
      }
   }
   return hmax+1;
}
