#include"include/insert tree.h"
bool insertSubTree(Tree T,ElemType e,Tree Tadd)
{
    Tree pos=NULL;     //标记子树的父节点的位置
    locateElem(T,e);     //查找到其父节点位置
    if(pos!= NULL)
    {
        Tadd->nextSibling=pos->firstChild;  //将新子树根节点作为该节点的最左孩子
        pos->firstChild=Tadd;
        return true;
    }
    else
        return false;
}
