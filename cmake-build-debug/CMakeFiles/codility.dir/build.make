# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\CLion\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\CLion\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Banje\CLionProjects\codility

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Banje\CLionProjects\codility\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/codility.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/codility.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/codility.dir/flags.make

CMakeFiles/codility.dir/main.c.obj: CMakeFiles/codility.dir/flags.make
CMakeFiles/codility.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Banje\CLionProjects\codility\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/codility.dir/main.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\codility.dir\main.c.obj   -c C:\Users\Banje\CLionProjects\codility\main.c

CMakeFiles/codility.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/codility.dir/main.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Banje\CLionProjects\codility\main.c > CMakeFiles\codility.dir\main.c.i

CMakeFiles/codility.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/codility.dir/main.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Banje\CLionProjects\codility\main.c -o CMakeFiles\codility.dir\main.c.s

# Object files for target codility
codility_OBJECTS = \
"CMakeFiles/codility.dir/main.c.obj"

# External object files for target codility
codility_EXTERNAL_OBJECTS =

codility.exe: CMakeFiles/codility.dir/main.c.obj
codility.exe: CMakeFiles/codility.dir/build.make
codility.exe: CMakeFiles/codility.dir/linklibs.rsp
codility.exe: CMakeFiles/codility.dir/objects1.rsp
codility.exe: CMakeFiles/codility.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Banje\CLionProjects\codility\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable codility.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\codility.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/codility.dir/build: codility.exe

.PHONY : CMakeFiles/codility.dir/build

CMakeFiles/codility.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\codility.dir\cmake_clean.cmake
.PHONY : CMakeFiles/codility.dir/clean

CMakeFiles/codility.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Banje\CLionProjects\codility C:\Users\Banje\CLionProjects\codility C:\Users\Banje\CLionProjects\codility\cmake-build-debug C:\Users\Banje\CLionProjects\codility\cmake-build-debug C:\Users\Banje\CLionProjects\codility\cmake-build-debug\CMakeFiles\codility.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/codility.dir/depend

