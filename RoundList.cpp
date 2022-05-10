//
// Created by yehud on 03/05/2022.
//
#include <iostream>
#include "RoundList.h"

using namespace std;

RoundList::RoundList() : List() {
}

RoundList::~RoundList() {
    clear();
}

void RoundList::addToEnd(int val){
    if(head == nullptr){//if list is empty
        head = new Link(val, nullptr);
        head->next = head;
        return;
    }
    Link* temp = head;
    head = new Link(val, head->next);
    temp->next = head;
}

int RoundList::search(int n) {
    if(head == nullptr) return -1;
    Link* temp = head->next;
    for(int i = 0; i < n; i++){
        temp = temp->next;
    }
    return temp->value;
}

void RoundList::add(int val) {
    if(head == nullptr){//if list is empty
        head = new Link(val, nullptr);
        head->next = head;
        return;
    }
    head->next = new Link(val, head->next);
}

void RoundList::clear() {
    if (isEmpty()) return;
    if(head == head->next){
        delete head;
        head = nullptr;
        return;
    }
    // empty all elements from the List
    Link* theNext;
    RoundList::Link* end = head;
    RoundList::Link* p = head->next;
    while (true){
        theNext = p->next;
        if(p == end){
            delete p;
            break;
        }
        delete p;
        p = theNext;
    }
    // mark that the List contains no elements
    head = nullptr;
}

void RoundList::removeFirst() {
    if (isEmpty())
        throw "the List is empty, no Elements to remove";
    if(head == head->next){
        delete head;
        head = nullptr;
        return;
    }
    Link* temp = head->next;
    head->next = head->next->next;
    delete temp;
}

ostream &operator<<(ostream & os, const RoundList & r) {
    if(r.head == nullptr) return os;
    RoundList::Link* end = r.head;
    RoundList::Link* p = r.head->next;
    while (true){
        os << p->value << " ";
        if(p == end){
            break;
        }
        p = p->next;
    }
    return os;
}

int RoundList::firstElement() const {
    return head->next->value;
}

