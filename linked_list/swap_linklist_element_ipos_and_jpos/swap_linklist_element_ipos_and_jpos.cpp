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

Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
	int k=i;
	int l=j;
    Node *temp=head;
    Node *p1=head;
    Node *c1=head;
    Node *c2=head;
    Node *p2=head;
    while(temp!=NULL)
    {
        if(i<=j)
        {


        if(i!=0)
        {
            p1=temp;
            c1=temp->next;
            i--;
        }
        if(j!=-1)
        {
            c2=temp;
            p2=temp->next;
            j--;
        }
        if(i==0&&j==-1)
            break;
        temp=temp->next;
    }

    else{

        if(j!=0)
        {
            p1=temp;
            c1=temp->next;
            j--;
        }
        if(i!=-1)
        {
            c2=temp;
            p2=temp->next;
            i--;
        }
        if(i==-1&&j==0)
            break;
        temp=temp->next;
        }
    }
    cout<<p1->data<<" "<<c1->data<<" "<<c2->data<<" "<<p2->data<<" "<<temp->data<<"\n";
   if((k-l)==1||(k-l)==-1)
   {
   p1->next=c2;
   c2->next=c1;
   c1->next=p2;
   }
   else
   {
    p1->next=c2;
    c2->next=c1->next;
    c1->next->next=c1;
    c1->next=p2;
   }
    return head;
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
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}
