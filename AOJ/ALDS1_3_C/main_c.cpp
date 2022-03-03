#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

struct Node
{
    int key;
    Node *prev, *next;
}

class DoublyLinkedList
{
    Node *nil;

    void init()
    {
        nil = (Node *)malloc(sizeof(Node));
        nil->next = nil;
        nil->prev = nil;
    }

    void insert(int key)
    {
        Node *x = malloc(sizeof(Node));
        x->key = key;
        x->next = nil->next;
        nil->next->prev = x;
        nil->next = x;
        x->prev = nil;
    }

    Node *listSearch(int key)
    {
        Node *cur = nil->next;
        while (cur != nil && cur->key != key)
        {
            cur = cur->next;
        }
        return cur;
    }

    void deleteNode(Node *t)
    {
        if (t == nil)
            return;
        t->prev->next = t->next;
        t->next->prev = t->prev;
        free(t);
    }

    void deleteFirst()
    {
        deleteNode(nil->next);
    }

    void deleteLast()
    {
        deleteNode(nil->prev);
    }

    void deleteKey(int key)
    {
        deleteKey(listSearch(key));
    }

}

int
main()
{
    Node *nil;
}