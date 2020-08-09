/**
 * shared_ptr
 * provides shared ownership of heap objects
 * shared_ptr<T>
 * points to an object of type T on the heap
 * it is not unique there can be many shared_ptr pointing to the same object on the heap
 * Established shared ownership relationship
 * CAN be assigned and copied
 * CAN be moved
 * Dosent support managing array by default
 * When the use count is zero the managed object on th eheap is destroyed
 * 
 * **/