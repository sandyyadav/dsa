/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
      TreeNode<int>* f=q.front();
        q.pop();
        cout<<f->children.size()<<" ";
        cout<<f->data<<":";
        int i=0;
        int s=((f->children.size())-1);

        for(;i<((f->children.size())-1);i++)
        {
           // cout<<front->children.size()<<" ";
            cout<<f->children[i]->data<<",";
            q.push(f->children[i]);
        }
        if(((f->children.size())-1)>-1)
        {
        cout<<f->children[i]->data;
        q.push(f->children[i]);
        }
        cout<<"\n";
    }
}
