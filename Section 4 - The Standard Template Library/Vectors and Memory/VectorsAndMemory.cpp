/*
    One useful thing about iterators is that you can declare them as const: in this way you are sure to not
    change the vector content. Ohterwise, just use [i] to iterate.

    Vector capacity is the size of the allocated slots vector has prepared to be allocated.
    Capacity is predicted based on the current vector size.
    If the size reduces, the capacity remains the same.

    It's useful to use reserve() if you know you'll add lots of elements
*/

