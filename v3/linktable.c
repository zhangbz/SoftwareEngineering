#include <stdio.h>
#include <stdlib.h>
#include "linktable.h"

/*
* Create a LinkTable
*/
tLinkTable * CreateLinkTable()
{
    tLinkTable* linktable = (tLinkTable*)malloc(sizeof(tLinkTable));
    if(linktable == NULL)
        return NULL;
    linktable->pHead = NULL;
    linktable->pTail = NULL;
    linktable->SumOfNode = 0;    
}
/*
* Delete a LinkTable
*/
int DeleteLinkTable(tLinkTable *pLinkTable)
{

}
/*
* Add a LinkTableNode to LinkTable
*/
int AddLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode *pNode)
{
    tLinkTable* p = pLinkTable;
    tLinkTableNode* q = pNode;
    if(p->SumOfNode == 0)
    {
        p->pHead = q;
        p->pTail = q;
    }
    p->pTail->pNext = q;
    p->pTail = q;
    p->SumOfNode++;
}
/*
* Delete a LinkTableNode from LinkTable
*/
int DelLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode *pNode)
{

}
/*
* get LinkTableHead
*/
tLinkTableNode * GetLinkTableHead(tLinkTable *pLinkTable)
{
    return pLinkTable->pHead;
}
/*
* get next LinkTableNode
*/
tLinkTableNode * GetNextLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode * pNode)
{
    tLinkTable* p = pLinkTable;
    tLinkTableNode* q = pNode;
    int j;
    for(j = 0; j < p->SumOfNode; j++)
    {
        if((p->pHead) == q)
            return p->pHead;
        else
            p->pHead = p->pHead->pNext;
    }
    return NULL;
}
