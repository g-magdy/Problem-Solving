template<typename T>
class Node
{
private :
    T item;    // A data item (can be any complex sturcture)
    Node<T>* next;    // Pointer to next node
public :

    Node( ) //default constructor
    {
        next= nullptr;
    } 

    Node( T newItem) //non-default constructor
    {
        item = newItem;
        next= nullptr;

    }

    void setItem( T newItem)
    {
        item = newItem;
    } // end setItem

    void setNext(Node<T>* nextNodePtr)
    {
    next = nextNodePtr;
    } // end setNext

    T getItem() const
    {
        return item;
    } // end getItem

    Node<T>* getNext() const
    {
        return next;
    }
}; // end Node

template <typename T>
class LinkedList
{
private:
    Node<T> *Head;    //Pointer to the head of the list
    //You can add tail pointer too (depending on your problem)
public:


    LinkedList()
    {
        Head = nullptr;
    }

    //List is being desturcted ==> delete all items in the list
    ~LinkedList()
    {
        DeleteAll(); 
    }
    ////////////////////////////////////////////////////////////////////////
    /*
    * Function: PrintList.
    * prints the values of all nodes in a linked list.
    */
    void PrintList()    const
    {        
        Node<T> *p = Head;

        while(p)
        {
            cout << p->getItem() << "->";
            p = p->getNext();
        }
        cout << "NULL\n";
    }
    ////////////////////////////////////////////////////////////////////////
    /*
    * Function: InsertBeg.
    * Creates a new node and adds it to the beginning of a linked list.
    * 
    * Parameters:
    *    - data : The value to be stored in the new node.
    */
    void InsertBeg(const T &data)
    {
        Node<T> *R = new Node<T>(data);
        R->setNext(Head);
        Head = R;

    }
    ////////////////////////////////////////////////////////////////////////
    /*
    * Function: DeleteAll.
    * Deletes all nodes of the list.
    */
    void DeleteAll()
    {
        Node<T> *P = Head;
        while (Head)
        {
            P = Head->getNext();
            delete Head;
            Head = P;
        }
    }



    ////////////////     Requirements   ///////////////////
    //
    // Implement the following member functions


    //[1]InsertEnd 
    //inserts a new node at end if the list
    void InsertEnd(const T& data)
    {
        if (Head == nullptr)
        {
            Head = new Node<T>(data);
            Head->setNext(nullptr);
        }
        else
        {
            Node<T>* R = new Node<T>(data);
            R->setNext(nullptr); // make this new node the end of ll.
            Node<T>* currentPtr = Head;
            while (currentPtr->getNext() != nullptr)
            {
                currentPtr = currentPtr->getNext();
            }
            // currentPtr is now pointing to the last element
            currentPtr->setNext(R);
        }
        return;
    }
    void countDelOccurence(LinkedList<T>& frequency)
    {
        Node<T>* currentptr = Head;
        while (currentptr != nullptr)
        {
            int myfreq = 1;
            if (currentptr->getNext() == nullptr)
            {
                // it was the last item in linked list
                frequency.InsertEnd(myfreq);
                return;
            }
            

            while (currentptr->getItem() == currentptr->getNext()->getItem())
            {
                myfreq++;
                Node<T>* toDelPtr = currentptr->getNext();
                currentptr->setNext(toDelPtr->getNext());
                delete toDelPtr;
                //currentptr = currentptr->getNext();
            }


            frequency.InsertEnd(myfreq);
            currentptr = currentptr->getNext();
        }
    }

};

/* // first main
    LinkedList<int> L;    //create an object of class LinkedList
    int val;

    cout<<"\nPlease enter int values to add to the list (-1 to stop):\n";
    cin>>val;
    while(val != -1)
    {
        L.InsertEnd(val);
        cin>>val;
    }
    L.PrintList();
    LinkedList<int> freqlist;
    L.countDelOccurence(freqlist);
    L.PrintList();
    freqlist.PrintList();
    cout<<" \n ..............  Lab Requirements .............\n";
    cout<<"\n Check File LinkedList.h and write the required member functions";
    cout<<"\n Then test these functions by calling them from the main()";

    cout<<endl;
    return 0;

*/

