# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/alex/programs/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/alex/programs/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/p0_cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/p0_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/p0_cpp.dir/flags.make

CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.o: CMakeFiles/p0_cpp.dir/flags.make
CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.o: ../binarySearchTree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.o -c /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/binarySearchTree.cpp

CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/binarySearchTree.cpp > CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.i

CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/binarySearchTree.cpp -o CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.s

CMakeFiles/p0_cpp.dir/P0.cpp.o: CMakeFiles/p0_cpp.dir/flags.make
CMakeFiles/p0_cpp.dir/P0.cpp.o: ../P0.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/p0_cpp.dir/P0.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p0_cpp.dir/P0.cpp.o -c /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/P0.cpp

CMakeFiles/p0_cpp.dir/P0.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p0_cpp.dir/P0.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/P0.cpp > CMakeFiles/p0_cpp.dir/P0.cpp.i

CMakeFiles/p0_cpp.dir/P0.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p0_cpp.dir/P0.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/P0.cpp -o CMakeFiles/p0_cpp.dir/P0.cpp.s

# Object files for target p0_cpp
p0_cpp_OBJECTS = \
"CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.o" \
"CMakeFiles/p0_cpp.dir/P0.cpp.o"

# External object files for target p0_cpp
p0_cpp_EXTERNAL_OBJECTS =

p0_cpp: CMakeFiles/p0_cpp.dir/binarySearchTree.cpp.o
p0_cpp: CMakeFiles/p0_cpp.dir/P0.cpp.o
p0_cpp: CMakeFiles/p0_cpp.dir/build.make
p0_cpp: CMakeFiles/p0_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable p0_cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/p0_cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/p0_cpp.dir/build: p0_cpp

.PHONY : CMakeFiles/p0_cpp.dir/build

CMakeFiles/p0_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/p0_cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/p0_cpp.dir/clean

CMakeFiles/p0_cpp.dir/depend:
	cd /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/cmake-build-debug /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/cmake-build-debug /home/alex/Code/school/cs4280/cs4280_P0/p0-cpp/cmake-build-debug/CMakeFiles/p0_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/p0_cpp.dir/depend
