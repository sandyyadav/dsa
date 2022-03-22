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
int maxsum=0;
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
     TreeNode<int>* f;

       int tempsum=0;
     for(int i=0;i<root->children.size();i++)
     {
       tempsum+=root->children[i]->data;
     }

     for(int i=0;i<root->children.size();i++)
     {
         f=maxSumNode(root->children[i]);
     }
    if(maxsum<tempsum)
     {
         maxsum=tempsum;
         f=root;
     }
    return f;
}

