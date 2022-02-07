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

Node *evenAfterOdd(Node *head)
{
	//write your code here
    if(head==NULL||head->next==NULL)
        return head;

    Node *temp,*oddtail,*eventail,*evenhead,*oddhead;

    temp=head;
    oddhead=NULL;
    oddtail=NULL;
    eventail=NULL;
    evenhead=NULL;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            if(eventail==NULL)
            {
            eventail=temp;
             evenhead=temp;
            }
            else
            {
                eventail->next=temp;
                eventail=temp;
            }
        }
        else
        {
            if(oddtail==NULL)
            {
                oddhead=temp;
                oddtail=temp;
            }
            else
            {
                oddtail->next=temp;
                oddtail=temp;

            }

        }
        temp=temp->next;
    }
    if(oddtail!=NULL)
    oddtail->next=evenhead;
    if(eventail!=NULL)
     eventail->next=NULL;
       if(oddhead==NULL)
       {
        oddhead=evenhead;
        eventail->next=NULL;
       }
    return oddhead;
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
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}
