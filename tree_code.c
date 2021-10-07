#include "header_file.h"

struct tree{
 int data;
 struct tree *left;
 struct tree *right;
}*root=NULL,*temp=NULL;

void find(struct tree* tptr){
	if((temp->data > tptr->data) && (tptr->right!=NULL)) 
		find(tptr->right);
	else if((temp->data > tptr->data) && (tptr->right==NULL))
		tptr->right=temp;


	else if((temp->data < tptr->data) && (tptr->left!=NULL))
		find(tptr->left);
	else if((temp->data < tptr->data) && (tptr->left==NULL))
		tptr->left=temp;

}

void inorder(struct tree* tptr){
	
	if(tptr == NULL)
	{
		printf("\n Tree is empty\n");
		return;
	}
	if(tptr->left != NULL)
		inorder(tptr->left);
	
	printf(" %d ", tptr->data);
	
	if(tptr->right != NULL)
		inorder(tptr->right);
	
}
void bst(){
	temp=(struct tree*)malloc(sizeof(struct tree));
	temp->data = rand();
	temp->left = NULL;
	temp->right= NULL;
	if(root==NULL)
		root=temp;
	else
		find(root);
}


void create_tree(){	
	for(int i=1;i<=7;i++)		
		bst();		
	
	inorder(root);
}
