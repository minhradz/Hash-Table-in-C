#include <stdlib.h>
#include <string.h>

#include "hash_table.h"

static ht_items * ht_new_item(const char * k, const char * v)
{
    ht_items * i = malloc(sizeof(ht_items));
    
    i -> key = strdup(k);
    i -> value = strdup(v);

    return i;
}

ht_hash_table * ht_new()
{
    ht_hash_table * ht = malloc(sizeof(ht_hash_table));
    
    ht -> size = 53;
    ht -> count = 0;
    ht -> items = calloc( (size_t) ht -> size, sizeof(ht_items *) );

    return ht;
}
