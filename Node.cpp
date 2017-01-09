#include "Node.h"
#include <iostream>

using namespace std;

Node* Node::getNext(){
  return pointer;
}
Student* Node::getStudent(){
  return data;
}
void Node::setNext(Node* node){
  pointer = node;
}
void Node::push_back(Student* student){
  Node* currentNode = this;
  for(currentNode; currentNode->getNext() != NULL; currentNode = currentNode->getNext());
  currentNode->setNext(new Node(student));
}
Node* Node::end(){
  Node* currentNode = this;
  for(currentNode; currentNode->getNext() != NULL; currentNode = currentNode->getNext());
  return currentNode;
}
void Node::wipe(){
  if (pointer){
    pointer->wipe();
    delete this;
  }
  delete &data;
}
Node::Node(Student* student){
  data = student;
}
Node::~Node(){
  delete &data;
}
