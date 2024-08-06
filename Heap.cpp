// Name: Lawrence Menegus
// Date: 10/22/23
// Course:Data Structures and Algorithms
// Description: This program is to print array values and Identify what is the parent node and what is the left child node and the right
// child node of a value in the array. Then to print heapify the array and print heap. Lastly the program then inserts to number into the heap 


#include <iostream>
using namespace std; 


// Function Phototypes 
int getParent(int index);
int getLeftChild(int index);
int getRightChild(int index);
void swap(int& item1, int& item2);
void heapify(int A[], int index, int size);
void build_heap(int A[], int size);
void printArray(int A[], int size);
void heapInsert(int A[], int& size, int Item);

// Main Function
int main() 
{
    int A[] = { 4,1,3,2,16,9,10,14,8,7 };
    int size = sizeof(A) / sizeof(A[0]);

    // Prints the Initial Array 
    cout << "Print Array A: " << endl; 
    printArray(A, size);  
    cout << endl;

    // Prints out the Parent and Child Nodes 
    cout << "The parent of node 5 is the node " << getParent(5) << endl; 
    cout << "The Left child of node 3 is the node " << getLeftChild(3) << endl;
    cout << "The Right child of node 3 is the node " << getRightChild(3)  << endl;
    cout << endl;

    // Prints out the Heapify Function 
    cout << "Calling Heapify A,1" << endl; 
    heapify(A, 1, size);
    printArray(A, size);
    cout << endl;

    // Prints out the Heap 
    cout << "Build Heap" << endl; 
    cout << "Print Heap A:" << endl; 
    build_heap(A, size); 
    printArray(A, size);
    cout << endl;

    // Prints the 20 value after it is inserted into the Heap 
    cout << "After Inserting the number 20 into the heap A: " << endl; 
    heapInsert(A, size, 20);
    printArray(A, size);
    cout << endl;

    // Prints the 17 value after it is inserted into the Heap 
    cout << "After Inserting the number 17 into the heap A: " << endl;
    heapInsert(A, size, 17);
    printArray(A, size); 
    cout << endl;
}

// Get Parent Function 
// Purpose: calculates the index of a node's parent node
// Post: integer value returned to caller
int getParent(int index)
{
    return (index - 1) / 2; 
}

// Get Left Child Function 
// Purpose: calculates the index of node's left child
// Post: integer value returned to caller
int getLeftChild(int index)
{
    return 2 * index + 1; 
}

// Get Right Child Function 
// Purpose: calculates the index of a node's right child
// Post: integer value returned to the user
int getRightChild(int index)
{
    return 2 * index + 2;
}

// Swap Function 
// Purpose: exchanges two values
// Post: item1 = old item2 and item2 = old item1, results 
// returned through reference parameter
void swap(int& item1, int& item2) 
{
    int temp = item1;
    item1 = item2;
    item2 = temp;
}

// Heapify Function 
void heapify(int A[], int index, int size)
{
    // gets both children of the node 
    int l = getLeftChild(index);
    int r = getRightChild(index);
    int largest = index;

    // Compares if left child is larger than root 
    if (l < size && A[l] > A[largest])
    {
        largest = l;
    }

    // Compares if right child is larger than root 
    if (r < size && A[r] > A[largest])
    {
        largest = r;
    }

    // Runs if largest is not root 
    if (largest != index)
    {
        // swaps root and largest node 
        swap(A[index], A[largest]);
        heapify(A, largest, size);
    }
}

// Function to Build Heap 
void build_heap(int A[], int size) 
{
    for (int i = size / 2 - 1; i >= 0; i--) 
    {
        heapify(A, i, size);
    }
}

// Print Array function
void printArray(int A[], int size)
{
    // Prints out the values in Array 
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " "; 
    }
    cout << endl; 
}

// Heap Insert Function 
void heapInsert(int A[], int& size, int Item)
{
    if (size == 0)
    {
        A[0] = Item;
        ++size;
        return;
    }

    // Add the new item at the end of the array.
    A[size] = Item;
    ++size;

    // Reheapify the heap starting from the last item and moving upwards.
    int currentIndex = size - 1;
    while (currentIndex > 0)
    {
        int parentIndex = getParent(currentIndex);

        // Compares the current index is larger than the parenet index 
        if (A[currentIndex] > A[parentIndex])
        {
            // Swaps the current and parent index 
            swap(A[currentIndex], A[parentIndex]);
            currentIndex = parentIndex;
        }
        else
        {
            break;
        }
    }
}