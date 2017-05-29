#include"include/delete subtree.h"
bool deleteSubTree(Tree T,ElemType e)
{
    Tree pos=NULL;//标记其父节点的位置
    locateElem(T,e);
 
    //先判断pos是否有孩子节点
    if(pos->firstChild!=NULL)
    {
        deleteTree(pos->firstChild);   //调用删除树函数，删除以该节点最左孩子为根节点的子树
        return true;
    }
    else
        return false;
}
