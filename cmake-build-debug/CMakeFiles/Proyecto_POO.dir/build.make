# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/85/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/85/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/utec/Documentos/Proyecto_POO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/utec/Documentos/Proyecto_POO/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Proyecto_POO.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Proyecto_POO.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proyecto_POO.dir/flags.make

CMakeFiles/Proyecto_POO.dir/main.cpp.o: CMakeFiles/Proyecto_POO.dir/flags.make
CMakeFiles/Proyecto_POO.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/utec/Documentos/Proyecto_POO/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Proyecto_POO.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto_POO.dir/main.cpp.o -c /home/utec/Documentos/Proyecto_POO/main.cpp

CMakeFiles/Proyecto_POO.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto_POO.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/utec/Documentos/Proyecto_POO/main.cpp > CMakeFiles/Proyecto_POO.dir/main.cpp.i

CMakeFiles/Proyecto_POO.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto_POO.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/utec/Documentos/Proyecto_POO/main.cpp -o CMakeFiles/Proyecto_POO.dir/main.cpp.s

CMakeFiles/Proyecto_POO.dir/funciones.cpp.o: CMakeFiles/Proyecto_POO.dir/flags.make
CMakeFiles/Proyecto_POO.dir/funciones.cpp.o: ../funciones.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/utec/Documentos/Proyecto_POO/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Proyecto_POO.dir/funciones.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto_POO.dir/funciones.cpp.o -c /home/utec/Documentos/Proyecto_POO/funciones.cpp

CMakeFiles/Proyecto_POO.dir/funciones.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto_POO.dir/funciones.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/utec/Documentos/Proyecto_POO/funciones.cpp > CMakeFiles/Proyecto_POO.dir/funciones.cpp.i

CMakeFiles/Proyecto_POO.dir/funciones.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto_POO.dir/funciones.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/utec/Documentos/Proyecto_POO/funciones.cpp -o CMakeFiles/Proyecto_POO.dir/funciones.cpp.s

# Object files for target Proyecto_POO
Proyecto_POO_OBJECTS = \
"CMakeFiles/Proyecto_POO.dir/main.cpp.o" \
"CMakeFiles/Proyecto_POO.dir/funciones.cpp.o"

# External object files for target Proyecto_POO
Proyecto_POO_EXTERNAL_OBJECTS =

Proyecto_POO: CMakeFiles/Proyecto_POO.dir/main.cpp.o
Proyecto_POO: CMakeFiles/Proyecto_POO.dir/funciones.cpp.o
Proyecto_POO: CMakeFiles/Proyecto_POO.dir/build.make
Proyecto_POO: CMakeFiles/Proyecto_POO.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/utec/Documentos/Proyecto_POO/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Proyecto_POO"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Proyecto_POO.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proyecto_POO.dir/build: Proyecto_POO

.PHONY : CMakeFiles/Proyecto_POO.dir/build

CMakeFiles/Proyecto_POO.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Proyecto_POO.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Proyecto_POO.dir/clean

CMakeFiles/Proyecto_POO.dir/depend:
	cd /home/utec/Documentos/Proyecto_POO/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/utec/Documentos/Proyecto_POO /home/utec/Documentos/Proyecto_POO /home/utec/Documentos/Proyecto_POO/cmake-build-debug /home/utec/Documentos/Proyecto_POO/cmake-build-debug /home/utec/Documentos/Proyecto_POO/cmake-build-debug/CMakeFiles/Proyecto_POO.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proyecto_POO.dir/depend
