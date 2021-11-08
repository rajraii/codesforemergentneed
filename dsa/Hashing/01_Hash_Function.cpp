// should always map a large key to same small key
// Should generate values from 0-m-1
// Should be fast O(1) for int and O(len) for string
//  should uniformly distribute large keys into Hash Table

// h(large_key) = large_key % m 
// str[0]*x^0 + str[1]*x^1 + str[2]*x^2
// Universal Hashing
