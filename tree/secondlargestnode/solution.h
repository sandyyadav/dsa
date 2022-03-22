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
class pair1
{
    public:
    TreeNode<int>* largest;
    TreeNode<int>* sclargest;
    pair1()
    {
        largest=NULL;
        sclargest=NULL;
    }
    ~pair1()
    {
        delete largest;
        delete sclargest;
    }
};
pair1* helper(TreeNode<int>* root,pair1* p)
{

    for(int i=0;i<root->children.size();i++)
    {
        p=helper(root->children[i],p);
    }
    if(p->largest->data>root->data)
    {
        if(p->sclargest!=NULL)
        {
   		 if(root->data>p->sclargest->data)
           p->sclargest=root;
        }
        else
        {
             p->sclargest=root;
        }
    }
    else
    {
        p->largest=root;
    }
    return p;
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
   pair1* p=new pair1();
   p->largest=root;
    p->sclargest=NULL;
    p=helper(root,p);
    return p->sclargest;
}
