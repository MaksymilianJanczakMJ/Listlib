# Listlib
C90 library with cyclic bidirectional list functions. Based on theory presented by Colonel Rafał Kasprzyk at Military University of Technology.

## Purpose
Functions in this repository are meant to help with data handling in C90. As options provided by default are very plain.

## Structure
Lists consists of connected structures, where every structure aside of writen data also contains information about neighouring structures.

### Visualization

    |--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--|
    |                                                                                                                                            |
    |     |===============HEAD===============|           |==================================|           |===============TAIL===============|     |
    |-->--|             |      |             |-->-->-->--|             |      |             |-->-->-->--|             |      |             |-->--|
          | prev struct | data | next struct |           | prev struct | data | next struct |           | prev struct | data | next struct |
    |--<--|             |      |             |--<--<--<--|             |      |             |--<--<--<--|             |      |             |--<--|
    |     |==================================|           |==================================|           |==================================|     |
    |                                                                                                                                            |
    |-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->--|

## Functions

### list_add()
Adds an element to empty list or to list that already have elements, by connecting a new element to the tail.

### list_pop()
Subtracts an element from list, by removing the tail.

### list_insert()
Inserts an element between two already existing elements, given the position that the new element should occupy.

### list_remove()
Removes already existing element at given position from the list.

### list_close()
Deletes all the data in the list.

### list_print()
Prints list data in the terminal.
