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
include CMakeFiles/SFMLApp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SFMLApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SFMLApp.dir/flags.make

CMakeFiles/SFMLApp.dir/main.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SFMLApp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/main.cpp.o -c /home/kasia/CLionProjects/PROJEKT/main.cpp

CMakeFiles/SFMLApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/main.cpp > CMakeFiles/SFMLApp.dir/main.cpp.i

CMakeFiles/SFMLApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/main.cpp -o CMakeFiles/SFMLApp.dir/main.cpp.s

CMakeFiles/SFMLApp.dir/static_blocks.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/static_blocks.cpp.o: ../static_blocks.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SFMLApp.dir/static_blocks.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/static_blocks.cpp.o -c /home/kasia/CLionProjects/PROJEKT/static_blocks.cpp

CMakeFiles/SFMLApp.dir/static_blocks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/static_blocks.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/static_blocks.cpp > CMakeFiles/SFMLApp.dir/static_blocks.cpp.i

CMakeFiles/SFMLApp.dir/static_blocks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/static_blocks.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/static_blocks.cpp -o CMakeFiles/SFMLApp.dir/static_blocks.cpp.s

CMakeFiles/SFMLApp.dir/map.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/map.cpp.o: ../map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SFMLApp.dir/map.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/map.cpp.o -c /home/kasia/CLionProjects/PROJEKT/map.cpp

CMakeFiles/SFMLApp.dir/map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/map.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/map.cpp > CMakeFiles/SFMLApp.dir/map.cpp.i

CMakeFiles/SFMLApp.dir/map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/map.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/map.cpp -o CMakeFiles/SFMLApp.dir/map.cpp.s

CMakeFiles/SFMLApp.dir/Player.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SFMLApp.dir/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Player.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Player.cpp

CMakeFiles/SFMLApp.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Player.cpp > CMakeFiles/SFMLApp.dir/Player.cpp.i

CMakeFiles/SFMLApp.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Player.cpp -o CMakeFiles/SFMLApp.dir/Player.cpp.s

CMakeFiles/SFMLApp.dir/Sprite.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Sprite.cpp.o: ../Sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SFMLApp.dir/Sprite.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Sprite.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Sprite.cpp

CMakeFiles/SFMLApp.dir/Sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Sprite.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Sprite.cpp > CMakeFiles/SFMLApp.dir/Sprite.cpp.i

CMakeFiles/SFMLApp.dir/Sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Sprite.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Sprite.cpp -o CMakeFiles/SFMLApp.dir/Sprite.cpp.s

CMakeFiles/SFMLApp.dir/Ghost.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Ghost.cpp.o: ../Ghost.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SFMLApp.dir/Ghost.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Ghost.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Ghost.cpp

CMakeFiles/SFMLApp.dir/Ghost.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Ghost.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Ghost.cpp > CMakeFiles/SFMLApp.dir/Ghost.cpp.i

CMakeFiles/SFMLApp.dir/Ghost.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Ghost.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Ghost.cpp -o CMakeFiles/SFMLApp.dir/Ghost.cpp.s

CMakeFiles/SFMLApp.dir/Start.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Start.cpp.o: ../Start.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SFMLApp.dir/Start.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Start.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Start.cpp

CMakeFiles/SFMLApp.dir/Start.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Start.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Start.cpp > CMakeFiles/SFMLApp.dir/Start.cpp.i

CMakeFiles/SFMLApp.dir/Start.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Start.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Start.cpp -o CMakeFiles/SFMLApp.dir/Start.cpp.s

CMakeFiles/SFMLApp.dir/Void.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Void.cpp.o: ../Void.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SFMLApp.dir/Void.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Void.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Void.cpp

CMakeFiles/SFMLApp.dir/Void.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Void.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Void.cpp > CMakeFiles/SFMLApp.dir/Void.cpp.i

CMakeFiles/SFMLApp.dir/Void.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Void.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Void.cpp -o CMakeFiles/SFMLApp.dir/Void.cpp.s

CMakeFiles/SFMLApp.dir/wall.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/wall.cpp.o: ../wall.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/SFMLApp.dir/wall.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/wall.cpp.o -c /home/kasia/CLionProjects/PROJEKT/wall.cpp

CMakeFiles/SFMLApp.dir/wall.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/wall.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/wall.cpp > CMakeFiles/SFMLApp.dir/wall.cpp.i

CMakeFiles/SFMLApp.dir/wall.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/wall.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/wall.cpp -o CMakeFiles/SFMLApp.dir/wall.cpp.s

CMakeFiles/SFMLApp.dir/Way.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Way.cpp.o: ../Way.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/SFMLApp.dir/Way.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Way.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Way.cpp

CMakeFiles/SFMLApp.dir/Way.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Way.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Way.cpp > CMakeFiles/SFMLApp.dir/Way.cpp.i

CMakeFiles/SFMLApp.dir/Way.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Way.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Way.cpp -o CMakeFiles/SFMLApp.dir/Way.cpp.s

CMakeFiles/SFMLApp.dir/Corners.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Corners.cpp.o: ../Corners.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/SFMLApp.dir/Corners.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Corners.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Corners.cpp

CMakeFiles/SFMLApp.dir/Corners.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Corners.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Corners.cpp > CMakeFiles/SFMLApp.dir/Corners.cpp.i

CMakeFiles/SFMLApp.dir/Corners.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Corners.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Corners.cpp -o CMakeFiles/SFMLApp.dir/Corners.cpp.s

CMakeFiles/SFMLApp.dir/wallSpikes.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/wallSpikes.cpp.o: ../wallSpikes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/SFMLApp.dir/wallSpikes.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/wallSpikes.cpp.o -c /home/kasia/CLionProjects/PROJEKT/wallSpikes.cpp

CMakeFiles/SFMLApp.dir/wallSpikes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/wallSpikes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/wallSpikes.cpp > CMakeFiles/SFMLApp.dir/wallSpikes.cpp.i

CMakeFiles/SFMLApp.dir/wallSpikes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/wallSpikes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/wallSpikes.cpp -o CMakeFiles/SFMLApp.dir/wallSpikes.cpp.s

CMakeFiles/SFMLApp.dir/move_block.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/move_block.cpp.o: ../move_block.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/SFMLApp.dir/move_block.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/move_block.cpp.o -c /home/kasia/CLionProjects/PROJEKT/move_block.cpp

CMakeFiles/SFMLApp.dir/move_block.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/move_block.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/move_block.cpp > CMakeFiles/SFMLApp.dir/move_block.cpp.i

CMakeFiles/SFMLApp.dir/move_block.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/move_block.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/move_block.cpp -o CMakeFiles/SFMLApp.dir/move_block.cpp.s

CMakeFiles/SFMLApp.dir/MovingGhost.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/MovingGhost.cpp.o: ../MovingGhost.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/SFMLApp.dir/MovingGhost.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/MovingGhost.cpp.o -c /home/kasia/CLionProjects/PROJEKT/MovingGhost.cpp

CMakeFiles/SFMLApp.dir/MovingGhost.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/MovingGhost.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/MovingGhost.cpp > CMakeFiles/SFMLApp.dir/MovingGhost.cpp.i

CMakeFiles/SFMLApp.dir/MovingGhost.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/MovingGhost.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/MovingGhost.cpp -o CMakeFiles/SFMLApp.dir/MovingGhost.cpp.s

CMakeFiles/SFMLApp.dir/Meta.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Meta.cpp.o: ../Meta.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/SFMLApp.dir/Meta.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Meta.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Meta.cpp

CMakeFiles/SFMLApp.dir/Meta.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Meta.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Meta.cpp > CMakeFiles/SFMLApp.dir/Meta.cpp.i

CMakeFiles/SFMLApp.dir/Meta.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Meta.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Meta.cpp -o CMakeFiles/SFMLApp.dir/Meta.cpp.s

CMakeFiles/SFMLApp.dir/Menu.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Menu.cpp.o: ../Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/SFMLApp.dir/Menu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Menu.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Menu.cpp

CMakeFiles/SFMLApp.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Menu.cpp > CMakeFiles/SFMLApp.dir/Menu.cpp.i

CMakeFiles/SFMLApp.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Menu.cpp -o CMakeFiles/SFMLApp.dir/Menu.cpp.s

CMakeFiles/SFMLApp.dir/Blocks.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Blocks.cpp.o: ../Blocks.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/SFMLApp.dir/Blocks.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Blocks.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Blocks.cpp

CMakeFiles/SFMLApp.dir/Blocks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Blocks.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Blocks.cpp > CMakeFiles/SFMLApp.dir/Blocks.cpp.i

CMakeFiles/SFMLApp.dir/Blocks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Blocks.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Blocks.cpp -o CMakeFiles/SFMLApp.dir/Blocks.cpp.s

CMakeFiles/SFMLApp.dir/keys.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/keys.cpp.o: ../keys.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/SFMLApp.dir/keys.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/keys.cpp.o -c /home/kasia/CLionProjects/PROJEKT/keys.cpp

CMakeFiles/SFMLApp.dir/keys.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/keys.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/keys.cpp > CMakeFiles/SFMLApp.dir/keys.cpp.i

CMakeFiles/SFMLApp.dir/keys.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/keys.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/keys.cpp -o CMakeFiles/SFMLApp.dir/keys.cpp.s

CMakeFiles/SFMLApp.dir/Play.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Play.cpp.o: ../Play.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/SFMLApp.dir/Play.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Play.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Play.cpp

CMakeFiles/SFMLApp.dir/Play.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Play.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Play.cpp > CMakeFiles/SFMLApp.dir/Play.cpp.i

CMakeFiles/SFMLApp.dir/Play.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Play.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Play.cpp -o CMakeFiles/SFMLApp.dir/Play.cpp.s

CMakeFiles/SFMLApp.dir/Switch.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Switch.cpp.o: ../Switch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/SFMLApp.dir/Switch.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Switch.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Switch.cpp

CMakeFiles/SFMLApp.dir/Switch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Switch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Switch.cpp > CMakeFiles/SFMLApp.dir/Switch.cpp.i

CMakeFiles/SFMLApp.dir/Switch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Switch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Switch.cpp -o CMakeFiles/SFMLApp.dir/Switch.cpp.s

CMakeFiles/SFMLApp.dir/Load.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Load.cpp.o: ../Load.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building CXX object CMakeFiles/SFMLApp.dir/Load.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Load.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Load.cpp

CMakeFiles/SFMLApp.dir/Load.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Load.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Load.cpp > CMakeFiles/SFMLApp.dir/Load.cpp.i

CMakeFiles/SFMLApp.dir/Load.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Load.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Load.cpp -o CMakeFiles/SFMLApp.dir/Load.cpp.s

CMakeFiles/SFMLApp.dir/Maps.cpp.o: CMakeFiles/SFMLApp.dir/flags.make
CMakeFiles/SFMLApp.dir/Maps.cpp.o: ../Maps.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building CXX object CMakeFiles/SFMLApp.dir/Maps.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLApp.dir/Maps.cpp.o -c /home/kasia/CLionProjects/PROJEKT/Maps.cpp

CMakeFiles/SFMLApp.dir/Maps.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLApp.dir/Maps.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kasia/CLionProjects/PROJEKT/Maps.cpp > CMakeFiles/SFMLApp.dir/Maps.cpp.i

CMakeFiles/SFMLApp.dir/Maps.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLApp.dir/Maps.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kasia/CLionProjects/PROJEKT/Maps.cpp -o CMakeFiles/SFMLApp.dir/Maps.cpp.s

# Object files for target SFMLApp
SFMLApp_OBJECTS = \
"CMakeFiles/SFMLApp.dir/main.cpp.o" \
"CMakeFiles/SFMLApp.dir/static_blocks.cpp.o" \
"CMakeFiles/SFMLApp.dir/map.cpp.o" \
"CMakeFiles/SFMLApp.dir/Player.cpp.o" \
"CMakeFiles/SFMLApp.dir/Sprite.cpp.o" \
"CMakeFiles/SFMLApp.dir/Ghost.cpp.o" \
"CMakeFiles/SFMLApp.dir/Start.cpp.o" \
"CMakeFiles/SFMLApp.dir/Void.cpp.o" \
"CMakeFiles/SFMLApp.dir/wall.cpp.o" \
"CMakeFiles/SFMLApp.dir/Way.cpp.o" \
"CMakeFiles/SFMLApp.dir/Corners.cpp.o" \
"CMakeFiles/SFMLApp.dir/wallSpikes.cpp.o" \
"CMakeFiles/SFMLApp.dir/move_block.cpp.o" \
"CMakeFiles/SFMLApp.dir/MovingGhost.cpp.o" \
"CMakeFiles/SFMLApp.dir/Meta.cpp.o" \
"CMakeFiles/SFMLApp.dir/Menu.cpp.o" \
"CMakeFiles/SFMLApp.dir/Blocks.cpp.o" \
"CMakeFiles/SFMLApp.dir/keys.cpp.o" \
"CMakeFiles/SFMLApp.dir/Play.cpp.o" \
"CMakeFiles/SFMLApp.dir/Switch.cpp.o" \
"CMakeFiles/SFMLApp.dir/Load.cpp.o" \
"CMakeFiles/SFMLApp.dir/Maps.cpp.o"

# External object files for target SFMLApp
SFMLApp_EXTERNAL_OBJECTS =

SFMLApp: CMakeFiles/SFMLApp.dir/main.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/static_blocks.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/map.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Player.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Sprite.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Ghost.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Start.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Void.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/wall.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Way.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Corners.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/wallSpikes.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/move_block.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/MovingGhost.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Meta.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Menu.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Blocks.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/keys.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Play.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Switch.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Load.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/Maps.cpp.o
SFMLApp: CMakeFiles/SFMLApp.dir/build.make
SFMLApp: CMakeFiles/SFMLApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Linking CXX executable SFMLApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SFMLApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SFMLApp.dir/build: SFMLApp

.PHONY : CMakeFiles/SFMLApp.dir/build

CMakeFiles/SFMLApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SFMLApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SFMLApp.dir/clean

CMakeFiles/SFMLApp.dir/depend:
	cd /home/kasia/CLionProjects/PROJEKT/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kasia/CLionProjects/PROJEKT /home/kasia/CLionProjects/PROJEKT /home/kasia/CLionProjects/PROJEKT/cmake-build-debug /home/kasia/CLionProjects/PROJEKT/cmake-build-debug /home/kasia/CLionProjects/PROJEKT/cmake-build-debug/CMakeFiles/SFMLApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SFMLApp.dir/depend

