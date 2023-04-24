message(${CMAKE_SOURCE_DIR})
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
project (TestLibrary)



add_library (TestLibrary SHARED "src/TestLibrary.cpp" "include/TestLibrary.h")
target_include_directories(TestLibrary PUBLIC include)

find_package(poco REQUIRED)
target_link_libraries(TestLibrary PRIVATE Poco::Poco)                    

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET TestLibrary PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
