# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.5/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/abhinavnair/Desktop/address_book

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/abhinavnair/Desktop/address_book/build

# Include any dependencies generated for this target.
include CMakeFiles/address_book.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/address_book.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/address_book.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/address_book.dir/flags.make

CMakeFiles/address_book.dir/src/main.cpp.o: CMakeFiles/address_book.dir/flags.make
CMakeFiles/address_book.dir/src/main.cpp.o: /Users/abhinavnair/Desktop/address_book/src/main.cpp
CMakeFiles/address_book.dir/src/main.cpp.o: CMakeFiles/address_book.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/abhinavnair/Desktop/address_book/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/address_book.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/address_book.dir/src/main.cpp.o -MF CMakeFiles/address_book.dir/src/main.cpp.o.d -o CMakeFiles/address_book.dir/src/main.cpp.o -c /Users/abhinavnair/Desktop/address_book/src/main.cpp

CMakeFiles/address_book.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/address_book.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/abhinavnair/Desktop/address_book/src/main.cpp > CMakeFiles/address_book.dir/src/main.cpp.i

CMakeFiles/address_book.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/address_book.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/abhinavnair/Desktop/address_book/src/main.cpp -o CMakeFiles/address_book.dir/src/main.cpp.s

# Object files for target address_book
address_book_OBJECTS = \
"CMakeFiles/address_book.dir/src/main.cpp.o"

# External object files for target address_book
address_book_EXTERNAL_OBJECTS =

address_book: CMakeFiles/address_book.dir/src/main.cpp.o
address_book: CMakeFiles/address_book.dir/build.make
address_book: CMakeFiles/address_book.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/abhinavnair/Desktop/address_book/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable address_book"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/address_book.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/address_book.dir/build: address_book
.PHONY : CMakeFiles/address_book.dir/build

CMakeFiles/address_book.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/address_book.dir/cmake_clean.cmake
.PHONY : CMakeFiles/address_book.dir/clean

CMakeFiles/address_book.dir/depend:
	cd /Users/abhinavnair/Desktop/address_book/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/abhinavnair/Desktop/address_book /Users/abhinavnair/Desktop/address_book /Users/abhinavnair/Desktop/address_book/build /Users/abhinavnair/Desktop/address_book/build /Users/abhinavnair/Desktop/address_book/build/CMakeFiles/address_book.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/address_book.dir/depend

