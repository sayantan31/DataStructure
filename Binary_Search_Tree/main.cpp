#include<iostream>
#include "bst.h"

using namespace std;

int main() {

	BTree* myTree1 = new BTree();

	myTree1->insert(20);
	myTree1->insert(10);
	myTree1->insert(30);
	myTree1->insert(5);
	myTree1->insert(15);
	myTree1->insert(25);
	myTree1->insert(40);


/*	BTree* myTree2 = new BTree();

        myTree2->insert(5);
        myTree2->insert(3);
        myTree2->insert(8);
        myTree2->insert(2);
        myTree2->insert(1);
        myTree2->insert(7);
        myTree2->insert(4);
*/
//	myTree1->display();

/*	int h = myTree1->getHeight();

	cout << "Height: " << h << endl;


	if(myTree1->isBalanced()) {
		cout << "Balanced Tree = " << "True" << endl;
	}
	else {
		cout << "Balanced Tree = " << "False" << endl;
	}
	
	
	BTree* myTree = new BTree();

	if(myTree->isSameTree(myTree1,myTree2)) {
		cout << "Its the same tree" << endl;
	}
	else {

		cout << "Different trees" << endl;
	}
	*/
	//myTree1->printLevelByLevel();

	if(myTree1->hasPathSum(90)) {
		cout << "Has Path" << endl;
	}
	else {
		cout << "Has No Path" << endl;
	}
	
	return 0;
}