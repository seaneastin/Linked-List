| Sean Eastin|
| :---          	|
| s198013    	|
| Intro to c++|
||

## I. Requirements

1. Description of Problem 

	- **Name**: Linked list

	- **Problem Statement**: creaate a double linked list that we can insert ande delete nodes from

	- **Problem Specifications** :

2. Input Information(All information being given to the application)

- you use the keyboard to pick options

3.  Output Information
- the program displays in a console window




1. _System Architecture_(This is where you describe how your application flows. This should break down the main game loop and how the application works from start to end)

 

3. ### Object Information(All classes and their atrributes shsould be described here.)

   **File**: Node.h

     Description: a templeted class.
     
    **Attributes(This is a list of each variable,function, and property inside the class**

         Name: info
             Description: stores the data inside the node
             Type: T

         Name: next
             Desceription: the next node in the list
             Type: Node<T>*

         Name: previous
             Desceription: the previous node in the list
             Type: Node<T>*

    **File**: UnorderedList.h

     Description:


    **Attributes**


        Name: search
             Description: 
             searches to see if a node with the data inputed exists in the list
             Type: function

        Name: insertFirst
             Description: 
             inserts a node at the front of the list
             Type: function

         Name: insertLast
             Desceription:
             inserts a node at the end of the list
             Type: function

         Name: deletenode
             Desceription:
             deletes the specified node in the list
             Type: function
 

     **File**: List.h

     Description: 

    **Attributes**


        Name: m_count
             Description: 
             stores the ammount of items in the list
             Type: int

        Name: m_first
             Description: 
             the first node in the list
             Type: Node<T>* m_first

         Name: m_last
             Desceription:
            the last node in the list
             Type: Node<T>* m_last

         Name: front
             Desceription:
             returns the first item in the list
             Type: function

         Name: back
             Desceription:
             returns the last item in the list
             Type: function

         Name: begin
             Desceription:
             used for iterating from the begins of the list
             Type: function

         Name: end
             Desceription:

             Type: function
 
          Name: isEmpty
             Desceription: is used to tell if the list is empty
             Type: function
             

    **File**: Iterator.h

    Description: used for iterating through the list


        **Attributes**


        Name: current
             Description: 
            the current node
             Type: Node<T>*

        Name: Iterator
             Description: default constructor
             Type: function

         Name: Iterator
             Desceription: contructor for iterator 
             Type: Node<T>* m_last
             arguments: Node<T>* ptr

         Name: Operator*
             Desceription:
             Type: function

         Name: operator++
             Desceription: iterates forward through the list
             Type: function

         Name: operator--
             Desceription:  iterates backwards through the list
             Type: function

         Name: operator==
             Desceription: checks to see if current is equal to what is sent in

             Type: function
 
          Name: operator!=
             Desceription: checks to see if current is not equal to what is sent in
             Type: function
 