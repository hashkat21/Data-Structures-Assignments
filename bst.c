#include<stdio.h>
void create_bst();
void in_order(struct node *root);
void pre_order(struct node *root);
void post_order(struct node *root);



struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL,*temp,*trav;

int main ()
{
    create_bst();
    printf("Pre-order Traversal is :\n");
    pre_order(root);
    printf("Inorder Traversal is:\n");
    in_order(root);
    printf("Post_order Traversal is:\n");
    post_order(root);
}


void create_bst()
{
    int n,i;
    printf("Enter no. of nodes:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&temp->data);
        temp->left =temp->right=NULL;
        if(root == NULL)
          root= temp;
        else
        trav=root;
        while(1)
        {
            if(temp->data<trav->data)
            {
               if(trav->left==NULL)
               {
                trav->left=temp;
                break;
               }
               else
               trav=trav->left;
               elseif(temp->data>trav->data);
            }
            if(trav->right==NULL)
            {
                trav->right==temp;
                break;
            }
            else 
            trav=trav->right;
            elseif("Invalid data");
        }
    }
}


void in_order(struct node *root)
{
    if(root != NULL)
    {
        in_order(root->left);
        printf("%d",root->data);
        in_order(root->right);
    }

}

void pre_order(struct node *root)
{
    if(root !=NULL)
    {
        printf("%d",root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}

void post_order(struct node *root)
{
    if(root != NULL)
    {
        post_order(root->left);
        post_order(root->right);
        printf("%d",root->data);
    }
}