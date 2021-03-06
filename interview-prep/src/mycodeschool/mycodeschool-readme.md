### Data Structure
- [x] Video 1
  - ADT - define data and operation but no implementation
  - need to know
    - logical view
    - operations
    - cost
    - implementation
- [x] Video 2
  - list data type
- [x] Video 3
  - linked list
- [x] Video 4
    - array vs linked list
      - search
      - memory
      - access
      - easiness
- [x] Video 5
  - implementation 
  - create linked list, new node, traverse, insert end
- [x] Video 6
  - linked list insert at beginning, print
- [x] Video 7
  - linked list insert at n'th position
- [x] Video 8
  - linked list delete n'th 
- [x] Video 9
  - reverse linked list iterative 
- [x] Video 10
  - print in forward and backward
- [x] Video 11
  - reverse linked list recursive
- [x] Video 12 (SinglyLinkedList.java)
  - doubly linked list intro
- [x] Video 13 (DoublyLinkedList.java)
  - doubly linked list implementation
- [x] Video 14
  - Stack ADT
    - insertion and deletion performed only from one end called top
  - LIFO
  - Operations
    - push
    - pop
    - top
    - isEmpty
  - Applications
    - Function calls / Recursion
    - undo operation in editor
    - balenced parenthesis
- [x] Video 15(Stack.java)
  - Stack Implementation with array
- [x] Video 16 (Stack.java)
  - Stack implementation with linked list
- [x] Video 17 (ReverseStringByStack.java, ReverseLinkedListByStack.java)
  - reverse stack or linked list with 
- [x] Video 18 (BalancedParenthesisCheck.java)
  - Balanced Parenthesis check
- [x] Video 19
  - Infix   <Operand><Operator><Operand>
  - Postfix <Operand><Operand><Operator>
  - Prefix  <Operator><Operand><Operand>
- [x] Video 20
  - evaluation of postfix and prefix evaluation
    - postfix evaluate
      - create stack
      - go through all the character of the operation
        - if operand then push on the stack
        - if operator then
          - pop twice
          - perform the operator with the popped value
          - push the answer to the stack again 
      - return stack top
- [x] Video 21
  - infix to postfix using stack
    - res = ""
    - stack s
    - for c : characters 
      - if c is operand then append to res
      - if c is operator
        - while(!s.isEmpty() && hasHighPrecendence(s.top(), c) && !isOpenParentheses(s.top()))
          - append c to res
          - pop from stack
        - push c to stack
      - if c is openning parentheses
        - push it to the stack
      - if c is closing parentheses
        - while(!s.isEmpty() && !isOpenParentheses(s.top()))
          - append c to res
          - pop from stack
        - pop from the stack /* the openning parentheses*/         
      - while(!s.isEmpty())
        - append s.top() to res
        - s.pop()
    - return res  
- [x] Video 22
  - Queue ADT
  - Operations
    - Enueue
    - Dequeue
    - front
    - isEmpty
  - Application
    - Printer Queue
    - Process Scheduling
    - Simulating Wait 
- [x] Video 23
  - Array Implementation of Queue
- [x] Video 24
   - Linked List Implementation of Queue
- [x] Video 25
   - Tree Introduction
    - depth
        - x to root
    - height
        - leaf to x
    - binary tree
    - Application
        - hierarchical data structure: file
        - quick search, insertion, deletion
        - Trie
        - Network routing algorithm
    
- [x] Video 26
    - Binary tree
    - Strict / Proper binary tree
        - 2 or zero
    - Complete binary tree
        as left as possible 
    - Perfect Binary tree
    - Balanced Binary Tree
        - Hleft & Hright diff 1
    - Implementation
        - Array
            for node at index i
                left child = 2*i + 1
                right child = 2*i +2 
- [x] Video 27
    - Binary Search Tree
        - Basic Operation
        - Complexity
- [x] Video 28
  - Implementation - insert, search
- [x] Video 29
  - visualization in stack and heap of recursive insert method of bst
- [x] Video 30
  - find minimum and maximum element in BST
- [x] Video 31
  - find height of a tree
- [x] Video 32
  - Binary Tree traversal
    - bfs
      - level order
    - dfs
      - preorder
      - inorder
        - inorder of bst give a sorted list
      - postorder
- [x] Video 33
  - level order traversal
  - complexity
    - time: O(n)
    - space: if tree is one sided then O(1) [at most one element at a time in queue], for perfect tree # of element might be n/2 so on average - O(n)
- [x] Video 34
  - inorder, preorder, postorder
  - Complexity:
    - Time : O(n)
    - Space: O(h)
- [x] Video 35
  - check if binary search tree or not
- [x] Video 36
  - delete from bst
- [x] Video 37
  - Inorder successor
    - if a node is visited and has right subtree in the inorder traversal then the most left element of the right subtree is the in order successor (minimum in right subtree)
    - if has no right subtree then parent if ccoming from right, but if coming from right subtree then parent of parent
- [x] Video 38
  - Intro to graph 
  - web crawling - one type of graph 
  - weighted and non weighted
- [x] Video 39
  - Properties of Graph 
    - vertices
    - edgesdi
    - directed
    - undirected
    - weight
    - self loop
    - multi or parallel edge
    - dense graph 
      - adjacency matrix 
    - sparse graph 
      - adacency list
    - path / walk
    - simple path 
    - trail 
    - strongly connected 
      - if there is path from any vertices to any other vertices 
    - closed walk
    - simple cycle 
    - acyclic graph 
    - DAG
- [x] Video 40
  - Graph Representation
    - Vertex List
    - EdgeList
      - list of edge
      - edge{
        - start vertex
        - end vertex
        - weight
      - } 
    - for dense graph it's not good 
    - O(n^2)
- [x] Video 41
  - adjacency matrix representation
    - O(V * V)
    - good if the graph is dense
- [x] Video 42
  - array list of linked list 