# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/kasia/Pobrane/clion-2019.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/kasia/Pobrane/clion-2019.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kasia/CLionProjects/PROJEKT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kasia/CLionProjects/PROJEKT/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PROJEKT.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PROJEKT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PROJEKT.dir/flags.make

CMakeFiles/PROJEKT.dir/main.cpp.o: CMakeFiles/PROJEKT.dir/flags.make
CMakeFiles/PROJEKT.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PROJEKT.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PROJEKT.dir/main.cpp.o -c /home/kasia/CLionProjects/PROJEKT/main.cpp

CMakeFiles/PROJEKT.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PROJEKT.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/main.cpp > CMakeFiles/PROJEKT.dir/main.cpp.i

CMakeFiles/PROJEKT.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PROJEKT.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/main.cpp -o CMakeFiles/PROJEKT.dir/main.cpp.s

# Object files for target PROJEKT
PROJEKT_OBJECTS = \
"CMakeFiles/PROJEKT.dir/main.cpp.o"

# External object files for target PROJEKT
PROJEKT_EXTERNAL_OBJECTS =

PROJEKT: CMakeFiles/PROJEKT.dir/main.cpp.o
PROJEKT: CMakeFiles/PROJEKT.dir/build.make
PROJEKT: CMakeFiles/PROJEKT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PROJEKT"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PROJEKT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PROJEKT.dir/build: PROJEKT

.PHONY : CMakeFiles/PROJEKT.dir/build

CMakeFiles/PROJEKT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PROJEKT.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PROJEKT.dir/clean

CMakeFiles/PROJEKT.dir/depend:
	cd /home/kasia/CLionProjects/PROJEKT/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kasia/CLionProjects/PROJEKT /home/kasia/CLionProjects/PROJEKT /home/kasia/CLionProjects/PROJEKT/cmake-build-debug /home/kasia/CLionProjects/PROJEKT/cmake-build-debug /home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles/PROJEKT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PROJEKT.dir/depend

