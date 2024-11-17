# cpp
How the C++ works?

#include <iostream>: pre-processor statment, which mean processing before COMPLING.
#include : means : pre-processor directive,

*Header file: ex: #include <iostream>
*Translation unit: 
    - Take the Header File and the source code (your code) and tranlate it and make it ready for the COMPLIOR.
    - translation done through OBJECT FILE.
    - the OBJECT FILE is the file can computer understand.
        - ex: source.obj: this generated in the debug folder automatically in window os.
        NOW:    OBJECT FILE --> Waiting the LINKER --> Give App.exe
Summary:
1. Pre-processor.
2. Translation units.
3. Compiler will translate everything and add it to the OBJECT FILE.
4. LINKER: Link all objects togethr and give OBJECT.