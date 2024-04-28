/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
        

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
  Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;

    while (current != nullptr) {
        next = current->next; 
        current->next = prev; 
        prev = current;       
        current = next;
    }
    head = prev; // Make the last node as head
    return head;
}
