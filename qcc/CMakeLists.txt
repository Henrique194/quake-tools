set(SOURCE_FILES
    pr_comp.cpp
    pr_comp.h
    pr_lex.cpp
    qcc.cpp
    qcc.h
)
set(LIBS ${SDL2_LIBRARIES} common)

if(WIN32)
    add_executable("qcc" WIN32 ${SOURCE_FILES})
else()
    add_executable("qcc" ${SOURCE_FILES})
endif()

target_include_directories("qcc" PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries("qcc" ${LIBS})

if(MSVC)
    set_target_properties("qcc" PROPERTIES LINK_FLAGS "/MANIFEST:NO")
endif()
