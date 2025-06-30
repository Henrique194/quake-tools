add_library(common STATIC
    bspfile.cpp
    bspfile.h
    cmdlib.cpp
    cmdlib.h
    lbmlib.cpp
    lbmlib.h
    mathlib.cpp
    mathlib.h
    polylib.cpp
    polylib.h
    scriplib.cpp
    scriplib.h
    threads.cpp
    threads.h
    trilib.cpp
    trilib.h
    wadlib.cpp
    wadlib.h
)

target_include_directories(common PUBLIC "./")
target_link_libraries(common PRIVATE ${SDL2_LIBRARIES})
