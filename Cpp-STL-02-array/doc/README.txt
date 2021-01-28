array container in STL provides us the implementation of static array


Member functions
Iterators

begin
    Return iterator to beginning (public member function )

end
    Return iterator to end (public member function )

rbegin
    Return reverse iterator to reverse beginning (public member function )

rend
    Return reverse iterator to reverse end (public member function )

cbegin
    Return const_iterator to beginning (public member function )

cend
    Return const_iterator to end (public member function )

crbegin
    Return const_reverse_iterator to reverse beginning (public member function )

crend
    Return const_reverse_iterator to reverse end (public member function )


Capacity

size
    Return size (public member function )

max_size
    Return maximum size (public member function )

empty
    Test whether array is empty (public member function )


Element access

operator[]
    Access element (public member function )

at
    Access element (public member function )

front
    Access first element (public member function )

back
    Access last element (public member function )

data
    Get pointer to data (public member function )


Modifiers

fill
    Fill array with value (public member function )

swap
    Swap content (public member function )


Non-member function overloads

get (array)
    Get element (tuple interface) (function template )

relational operators (array)
    Relational operators for array (function template )


Non-member class specializations

tuple_element<array>
    Tuple element type for array (class template specialization )

tuple_size<array>
    Tuple size traits for array (class template specialization )

