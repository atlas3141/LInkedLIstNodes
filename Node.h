//Josh Howell Node
//Nodes that organize themselves for a linked list that will be
//used for a student list

using namespace std;

class Student;

class Node{ 
 public:
  Node(Student* student);
  ~Node();
  Node* getNext(); 
  Student* getStudent();
  void setNext(Node* node);
  void push_back(Student* student);
  Node* end();
  void erase();
 protected:
    Student* data;
    Node* pointer;
};
      
