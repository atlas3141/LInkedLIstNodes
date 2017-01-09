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

}
void Node::erase(){

}
Node::Node(Student* student){
  
}
Node::~Node(){

}
