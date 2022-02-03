#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;


/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
void printNode(Node *t)
{
  while(t!=NULL)
  {
      cout<<t->data<<"->";
      t=t->next;
  }
  cout<<"NULL"<<"\n";
}
Node *split(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node *temp=head->next;
    while(temp!=NULL)
    {
        temp=temp->next;
        if(temp==NULL) break;
        temp=temp->next;
        head=head->next;
    }
    Node *toreturn=head->next;
    head->next=NULL;
    return toreturn;
}
Node *l;
Node *x;
Node *reversenode(Node *t)
{
    if(t==NULL)
        return t;
      Node *p=reversenode(t->next);
        Node *newnode=new Node(t->data);
        if(l==NULL)
        {
            l=newnode;
            x=newnode;
        }
        else
        {
            x->next=newnode;
            x=newnode;
        }
      return l;
}

bool isPalindrome(Node *head)
{
    //Write your code here
    Node *temp=head;
    Node *split_head=head;
    split_head=split(head);
    //printNode(split_head);

    Node *reverseofsplit=reversenode(split_head);
    //printNode(reverseofsplit);
    while(reverseofsplit!=NULL&&temp!=NULL)
    {
        if(temp->data!=reverseofsplit->data)
            return false;
        reverseofsplit=reverseofsplit->next;
        temp=temp->next;
    }
    return true;
}


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}
