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
Node *half(Node *head)
{
    if(head==NULL)
        return head;
    Node *slow=head;
    Node *fast=head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }

    return slow;
}
Node *merge(Node *head1,Node *head2)
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
Node *mergeSort(Node *head)
{
	//Write your code here
	Node *head1;
    if(head==NULL)
        return head;
    if(head->next==NULL)
        return head;
    head1=half(head);
    Node *head3=mergeSort(head1->next);
    head1->next=NULL;
    Node *head2=mergeSort(head);

    Node *shead=merge(head2,head3);
    return shead;
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
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}
