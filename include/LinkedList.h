#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename >
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T data) : data(data), next(nullptr) {}
    };
    Node* head;

public:
    LinkedList() : head(nullptr) {}
    void inserir(T data);
    void remover(T data);
    bool buscar(T data);
    void exibir();
    ~LinkedList();
};

#endif