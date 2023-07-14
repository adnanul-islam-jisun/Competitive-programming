#include<stdio.h>
#include <bits/stdc++.h>
struct ListNode
{
    int value;
    struct ListNode* next;
};

typedef struct ListNode ListNode;

ListNode* head = NULL;
ListNode* tail = NULL;

ListNode* createListNode(int data)
{
    ListNode* temp = (ListNode *)malloc(sizeof(ListNode));
    temp->value = data;
    temp->next = temp;
    return temp;
}

void printList()
{
    if(head==NULL) return;

    ListNode* i = head;
    do
    {
        printf("%d ", i->value);
        i = i->next;
    }while(i!=head);
    printf("\n");
    return;
}

void insertLast(int data)
{
    if(head==NULL)
    {
        head = createListNode(data);
        tail = head;
    }
    else
    {
        ListNode* temp = createListNode(data);
        tail->next = temp;
        tail = tail->next;
        tail->next = head;
        temp = NULL;
    }
}

void insertFirst(int data)
{
    if(head==NULL)
    {
        head = createListNode(data);
        tail = head;
    }
    else
    {
        ListNode* temp = createListNode(data);
        temp->next = head;
        head = temp;
        tail->next = head;
        temp = NULL;
    }
}

void deleteFirst()
{
    if(head==NULL) return;
    else if(head==tail)
    {
        free(head);
        head = tail = NULL;
    }
    else
    {
        ListNode* temp = head;
        head = head->next;
        temp->next = NULL;
        tail->next = head;
        free(temp);
    }
}

ListNode* prevLoc(int data)
{

}

void deleteLast()
{
    if(head==NULL) return;
    else if(head==tail)
    {
        free(tail);
        head = tail = NULL;
    }
    else
    {
        ListNode* pLoc = prevLoc(tail->value);
        pLoc->next = tail->next; /// or, pLoc->next = head
        tail->next = NULL;
        free(tail);
        tail = pLoc;
        pLoc = NULL;
    }
}



int main()
{
    return 0;
}
