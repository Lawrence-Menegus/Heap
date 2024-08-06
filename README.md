# Heap Operations and Insertions

<p>This program demonstrates various heap operations including heapification, insertion, and printing heap values. The program includes functions to determine parent and child nodes in the heap, perform heapify operations, build the heap, and insert new elements into the heap.</p>

### Program Overview
<p>The program performs the following tasks:</p>
<ul>
    <li>Prints the initial array.</li>
    <li>Identifies and prints the parent and child nodes for given indices.</li>
    <li>Heapifies the array and prints the updated array.</li>
    <li>Builds the heap from the array and prints the resulting heap.</li>
    <li>Inserts new values into the heap and prints the heap after each insertion.</li>
</ul>

### Compile and Run the Program
<p>To compile and run the program, follow these steps in your terminal:</p>
<b>Compile the Program</b>:
<pre><code>g++ -o Heap.cpp</code></pre>
<b>Run the Program</b>:

<pre><code>./Heap</code></pre>

### Usage
<p>1. The program initializes an array and prints its values:</p>
<ul>
    <li>Prints the initial array: [4, 1, 3, 2, 16, 9, 10, 14, 8, 7].</li>
</ul>
<p>2. The program identifies and prints the parent and child nodes for specified indices:</p>
<ul>
    <li>Prints the parent of node 5.</li>
    <li>Prints the left child of node 3.</li>
    <li>Prints the right child of node 3.</li>
</ul>
<p>3. The program performs heapify operations:</p>
<ul>
    <li>Calls the heapify function for index 1 and prints the array.</li>
</ul>
<p>4. The program builds the heap and prints the heap:</p>
<ul>
    <li>Calls the build_heap function and prints the array after heapification.</li>
</ul>
<p>5. The program inserts new values into the heap and prints the heap after each insertion:</p>
<ul>
    <li>Inserts the value 20 and prints the updated heap.</li>
    <li>Inserts the value 17 and prints the updated heap.</li>
</ul>

### Contributor 
<p>Lawrence Menegus </p>
