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
Adds elements to empty list or to list that already have elements, by connecting a new element to tail.

### list_pop()
