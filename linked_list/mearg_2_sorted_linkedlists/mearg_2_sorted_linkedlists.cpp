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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    Node *fhead=NULL;
    Node *ftail=NULL;
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->data<head2->data)
        {
            if(fhead==NULL)
            {
                fhead=head1;
                ftail=head1;
            }
            else
            {
                ftail->next=head1;
                ftail=ftail->next;
            }
            head1=head1->next;
        }
        else
        {
              if(fhead==NULL)
            {
                fhead=head2;
                ftail=head2;
            }
            else
            {
                ftail->next=head2;
                ftail=ftail->next;
            }
            head2=head2->next;
        }
    }
    while(head1!=NULL)
    {
         if(fhead==NULL)
            {
                fhead=head1;
                ftail=head1;
            }
            else
            {
                ftail->next=head1;
                ftail=ftail->next;
            }
            head1=head1->next;
    }
    while(head2!=NULL)
    {
         if(fhead==NULL)
            {
                fhead=head2;
                ftail=head2;
            }
            else
            {
                ftail->next=head2;
                ftail=ftail->next;
            }
            head2=head2->next;
    }
    return fhead;

}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}
