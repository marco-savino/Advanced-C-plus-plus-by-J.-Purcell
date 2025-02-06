/*
    To use inside a map you need a cosntructor without parameters.
    map.insert() copies the values to insert, so by providing a Copy Constructor it can be used by insert()
    C++ provides a default copy operator.

    Person (const Person &other)
    {
        name = other.name;
        age = other.age;    
    }

    . . . 

    map.insert(std::make_pair(13, Person("Bob", 45)));
*/