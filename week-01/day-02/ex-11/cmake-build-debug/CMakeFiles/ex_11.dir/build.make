# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ex_11.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex_11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex_11.dir/flags.make

CMakeFiles/ex_11.dir/main.cpp.obj: CMakeFiles/ex_11.dir/flags.make
CMakeFiles/ex_11.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex_11.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ex_11.dir\main.cpp.obj -c "C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11\main.cpp"

CMakeFiles/ex_11.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex_11.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11\main.cpp" > CMakeFiles\ex_11.dir\main.cpp.i

CMakeFiles/ex_11.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex_11.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11\main.cpp" -o CMakeFiles\ex_11.dir\main.cpp.s

# Object files for target ex_11
ex_11_OBJECTS = \
"CMakeFiles/ex_11.dir/main.cpp.obj"

# External object files for target ex_11
ex_11_EXTERNAL_OBJECTS =

ex_11.exe: CMakeFiles/ex_11.dir/main.cpp.obj
ex_11.exe: CMakeFiles/ex_11.dir/build.make
ex_11.exe: CMakeFiles/ex_11.dir/linklibs.rsp
ex_11.exe: CMakeFiles/ex_11.dir/objects1.rsp
ex_11.exe: CMakeFiles/ex_11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex_11.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex_11.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex_11.dir/build: ex_11.exe

.PHONY : CMakeFiles/ex_11.dir/build

CMakeFiles/ex_11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex_11.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex_11.dir/clean

CMakeFiles/ex_11.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11" "C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11" "C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11\cmake-build-debug" "C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11\cmake-build-debug" "C:\Green Fox Academy\nmarton818\week-01\day-02\ex-11\cmake-build-debug\CMakeFiles\ex_11.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ex_11.dir/depend

