#include <iostream>
#include "Node.h"

using namespace std;

class Student{
public:
  Student(int i){
    id = i;
  }
  int getId(){
    return id;
  }
private:
  int id;
  
};

int main(){
  Student* s1 = new Student(1);
  Student* s2 = new Student(3);
  Student* s3 = new Student(4);

  Node* header = new Node(s1);
  header->push_back(s2);
  header->push_back(s3);

  cout << header->end()->getStudent()->getId() << endl;

  for(Node* currentNode = header; currentNode->getNext() != NULL; currentNode = currentNode->getNext()){
    cout << currentNode->getStudent()->getId() << endl;
  }
}
