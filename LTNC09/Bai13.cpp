Node* insert(Node *head,int data)
      {
          Node *myNode = new Node(data);
          if(head == NULL)
          {
                return myNode;
          }
          Node *tmp = head;
          while(tmp->next != NULL)
          {
                tmp = tmp->next;
          }

          tmp->next = myNode;

          return head;
          //Complete this method
      }
