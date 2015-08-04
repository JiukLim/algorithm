#include <iostream>
using namespace std;

struct Node{
	Node* Left;
	Node* Right;
	int Data;
};

Node* createNode(int data){
	Node* newNode = new Node;
	newNode->Left = NULL;
	newNode->Right = NULL;
	newNode->Data = data;
	return newNode;
}

Node* searchNode(Node* Tree, int findData){
	if (Tree == NULL) return NULL;
	if (Tree->Data == findData)
		return Tree;
	else if (Tree->Data < findData)
		return searchNode(Tree->Right, findData);
	else if (Tree->Data > findData)
		return searchNode(Tree->Left, findData);
}

void insertNode(Node* Tree, Node* newNode){
	if (newNode->Data > Tree->Data){
		if (Tree->Right != NULL) insertNode(Tree->Right, newNode);
		else Tree->Right = newNode;
	}
	else if (newNode->Data < Tree->Data){
		if (Tree->Left != NULL) insertNode(Tree->Left, newNode);
		else Tree->Left = newNode;
	}
}

Node* findMinNode(Node* Tree){
	if (Tree == NULL) return NULL;
	if (Tree->Left != NULL) return findMinNode(Tree->Left);
	else return Tree;
}

Node* removeNode(Node* Tree, int data){
	Node* tempNode;

	if (Tree == NULL) cout << "해당하는 노드를 찾을 수 없습니다." << endl;
	else if (Tree->Data > data) Tree->Left = removeNode(Tree->Left, data);
	else if (Tree->Data < data) Tree->Right = removeNode(Tree->Right, data);
	else{
		if (Tree->Left != NULL && Tree->Right != NULL){
			tempNode = findMinNode(Tree->Right);
			Tree->Data = tempNode->Data;

			Tree->Right = removeNode(Tree->Right, tempNode->Data);
		}
		else{
			tempNode = Tree;
			if (Tree->Left == NULL) Tree = Tree->Right;
			else if (Tree->Right == NULL) Tree = Tree->Left;
			delete tempNode;
		}
	}
	return Tree;
}

void printTree(Node *Tree){
	if (Tree == NULL) return;
	printTree(Tree->Left);
	cout << Tree->Data << " ";
	printTree(Tree->Right);
}

int main(){
	Node* Tree = createNode(10);
	Node* findNode;
	int input;

	insertNode(Tree, createNode(5));
	insertNode(Tree, createNode(1));
	insertNode(Tree, createNode(6));
	insertNode(Tree, createNode(17));
	insertNode(Tree, createNode(14));
	insertNode(Tree, createNode(21));


	while (1){
		cin >> input;
		findNode = searchNode(Tree, input);
		if (findNode != NULL){
			cout << "해당 노드를 찾았습니다. 노드를 제거합니다. 노드의 위치는 " << findNode << "입니다." << endl;
			removeNode(Tree, input);
			cout << "현재 트리 출력 : ";
			printTree(Tree); cout << endl;
		}
		else
			cout << "노드를 찾을 수 없습니다." << endl;
	}

	return 0;
}