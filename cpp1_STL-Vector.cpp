//******************STL (Standard Template Library)*****************
/*An STL is a library of generic functions and classes which saves you time and energy which you would have
  spent constructing for your use. This helps you reuse these well tested classes and functions umpteenth
  number of times according to your own convenience.

  COMPONENTS OF STL:
  1. Containers = Container is an object which stores data.
  2. Algorithm = Algorithms are a set of instructions which manipulates the input data to arrive at some
                 desired result
  3. Iterators = Iterators are objects which refer to an element in a container.

  Containers are themselves of three types:
  1. Sequence Containers = A sequence container stores that data in a linear fashion. Sequence containers
                           include Vector, List, Dequeue etc.
  2. Associative Containers = An associative container is designed in such a way that enhances the
                              accessing of some element in that container. Some of these containers are,
                              Set, Multiset, Map, Multimap etc.
  3. Derived Containers = These containers are derived from either the sequence or the associative
                          containers. Some examples of derived containers are Stack, Queue, Priority
                          Queue, etc.
-----------------------------------------------------------------------------------------------------------------------*/

// Vectors => vectors are Sequence Containers representing arrays that can change in size.

#include <iostream>
#include <vector>
using namespace std;

int main()
{

  // creating vector
  vector<int> first;                               // creating empty vector of int type
  vector<int> second(4, 100);                      // creating vector storing value four ints 100
  vector<int> third(second.begin(), second.end()); // creating vector itereting through second vector
  vector<int> fourth(third);                       // creating vector has a copy of third

  // printing vector through iterator
  for (vector<int>::iterator i = fourth.begin(); i != fourth.end(); i++) // begin point first and end
  {                                                                      // pointing last element of vector.
    cout << *i << " ";                                                   // for printing iteretors "*" sign is nesseserry
  }

  cout << endl;

  // push_back added new element at the end of the vector
  for (int i = 0; i <= 6; i++)
    fourth.push_back(i);

  cout << fourth.size() << endl;

  for (vector<int>::iterator i = fourth.begin(); i != fourth.end(); i++)
  {
    cout << *i << " ";
  }

  cout << endl;

  // pop_back remove element from the end of the vector
  for (int i = 0; i <= 6; i++)
    fourth.pop_back();

  cout << fourth.size() << endl;

  for (vector<int>::iterator i = fourth.begin(); i != fourth.end(); i++)
  {
    cout << *i << " ";
  }

  cout << endl;

  return 0;
}