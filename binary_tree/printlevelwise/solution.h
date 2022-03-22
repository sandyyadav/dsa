/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public :
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<int>* front=q.front();
        q.pop();
        cout<<front->data<<":";
        if(front->left!=NULL)
        {
            if(front->right==NULL)
        	cout<<"L:"<<front->left->data<<",";
            else
              cout<<"L:"<<front->left->data<<",";
            q.push(front->left);
        }
        else
        {
            if(front->right==NULL)
        	cout<<"L:-1"<<",";
            else
              cout<<"L:-1"<<",";
        }
        if(front->right!=NULL)
        {
           cout<<"R:"<<front->right->data<<"\n";
            q.push(front->right);
        }
        else
        {
            cout<<"R:-1"<<"\n";
        }

    }
}
