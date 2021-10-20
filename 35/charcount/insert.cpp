#include "charcount.ih"

void CharCount::insert(size_t destIdx, char ch)
{
    Char *ptr = new Char[d_info.nCharObj + 1];  // create new (larger) array

    moveElements(ptr, 0, destIdx);  // move all elements before the new
                                    // element to the new array

    ptr[destIdx] = Char{ ch, 1 };  // insert the new element

    // move all elements after the new element into the new array
    moveElements(ptr + destIdx + 1, destIdx, d_info.nCharObj);

    delete[] d_info.ptr;  // delete the old array
    d_info.ptr = ptr;     // and make d_info.ptr point to the new array

    ++d_info.nCharObj;  // increase the number of Char objects in the array
}