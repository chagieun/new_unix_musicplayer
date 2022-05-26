#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"

static Node* _head = NULL;
static Node* _tail = NULL;
static Node* _cur_node = NULL;

bool empty(){
    if(_head == NULL) return true;
    else return false;
}

size_t size() {
    //linked_list 원소의 개수
    Node* temp = _head;
    int size = 0;
    if(empty()) return size;
    while(temp != NULL){
        temp = temp->next;
        size++;
    }
    return size;
}

void print(){
	
}

void print_file(FILE* stream){

}

void clear(){
    //재생 목록을 비움
    Node* temp = _head;
    while(temp != NULL){
        temp = temp->next;
        free(_head);
        _head = temp;
    }
    printf("LinkedList is cleared!\n");
}

Node* append_left(size_t n, char new_data[]){
    //재생 목록의 첫 번째 위치에 노래를 추가함
    Node* newNode;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = new_data;
    newNode->prev = NULL;
    newNode->next = NULL;
    //printf("%s\n", newNode->data);
    if(empty()){
        _head = newNode;
        _tail = newNode;
    }
    else {
        newNode->next = _head;
        _head->prev = newNode;
        _head = newNode;
    }
    //printf("%s\n", _head->data);
    return newNode;
}

Node* append(size_t n, char new_data[]){
    //연결 리스트 마지막에 노드추가
    Node* newNode;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = new_data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(empty()){
        _head = newNode;
        _tail = newNode;
    }
    else{
        _tail->next = newNode;
        newNode->prev = _tail;
        _tail = newNode;
    }
    return newNode;
}

Node* _insert_after(Node* cur_node, size_t n, char new_data[]){

}

Node* insert_after(Node* cur_node, Node* new_node){

}

Node* pop_left(){

}

Node* pop(){

}

Node* delete_node(Node* cur_node){

}

Node* delete_by_data(char* data){

}

Node* next(){

}

Node* prev(){

}

Node* first_node(){

}

Node* last_node(){

}

Node* get_node(size_t index){

}
