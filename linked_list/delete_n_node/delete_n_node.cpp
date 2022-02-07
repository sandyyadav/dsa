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

Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if(head==NULL)
        return head;
        if(M==0)
            return NULL;
    Node *temp=head;
    int j=M;
    int l=N;
    while(temp!=NULL)
    {
        if(j!=1)
        {
            //cout<<temp->data<<" ";
            temp=temp->next;
            j--;
            //cout<<temp->data<<" ";
        }
        else
        {

            if(l!=0)
            {
                if(temp->next!=NULL)
                temp->next=temp->next->next;
                l--;
            }
            else{
                j=M;
                l=N;
                temp=temp->next;
            }
        }
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
		Node *head = takeinput();
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}
