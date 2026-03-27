# Listlib
C90 library with cyclic bidirectional list functions.

## Purpose
Functions in this repository are meant to help with data handling in C90. As options provided by default are very plain.

## Structure
Lists consists of connected structures, where every structure aside of writen data also contains information about neighouring structures.

### Visialization

    |--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--<--|
    |                                                                                                                                            |
    |     |==================================|           |==================================|           |==================================|     |
    |-->--|             |      |             |-->-->-->--|             |      |             |-->-->-->--|             |      |             |-->--|
          | prev struct | data | next struct |           | prev struct | data | next struct |           | prev struct | data | next struct |
    |--<--|             |      |             |--<--<--<--|             |      |             |--<--<--<--|             |      |             |--<--|
    |     |==================================|           |==================================|           |==================================|     |
    |                                                                                                                                            |
    |-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->--|

## Functions

### lista_add(
