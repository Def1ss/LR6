# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/defis/Documents/453505/ОАиП/LR6/Task_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/defis/Documents/453505/ОАиП/LR6/Task_2/build

# Include any dependencies generated for this target.
include CMakeFiles/ThreadSanitizedExecutable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ThreadSanitizedExecutable.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ThreadSanitizedExecutable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ThreadSanitizedExecutable.dir/flags.make

CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.o: CMakeFiles/ThreadSanitizedExecutable.dir/flags.make
CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.o: /home/defis/Documents/453505/ОАиП/LR6/Task_2/Task_2.cpp
CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.o: CMakeFiles/ThreadSanitizedExecutable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/defis/Documents/453505/ОАиП/LR6/Task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.o -MF CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.o.d -o CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.o -c /home/defis/Documents/453505/ОАиП/LR6/Task_2/Task_2.cpp

CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/defis/Documents/453505/ОАиП/LR6/Task_2/Task_2.cpp > CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.i

CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/defis/Documents/453505/ОАиП/LR6/Task_2/Task_2.cpp -o CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.s

# Object files for target ThreadSanitizedExecutable
ThreadSanitizedExecutable_OBJECTS = \
"CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.o"

# External object files for target ThreadSanitizedExecutable
ThreadSanitizedExecutable_EXTERNAL_OBJECTS =

ThreadSanitizedExecutable: CMakeFiles/ThreadSanitizedExecutable.dir/Task_2.cpp.o
ThreadSanitizedExecutable: CMakeFiles/ThreadSanitizedExecutable.dir/build.make
ThreadSanitizedExecutable: CMakeFiles/ThreadSanitizedExecutable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/defis/Documents/453505/ОАиП/LR6/Task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ThreadSanitizedExecutable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ThreadSanitizedExecutable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ThreadSanitizedExecutable.dir/build: ThreadSanitizedExecutable
.PHONY : CMakeFiles/ThreadSanitizedExecutable.dir/build

CMakeFiles/ThreadSanitizedExecutable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ThreadSanitizedExecutable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ThreadSanitizedExecutable.dir/clean

CMakeFiles/ThreadSanitizedExecutable.dir/depend:
	cd /home/defis/Documents/453505/ОАиП/LR6/Task_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/defis/Documents/453505/ОАиП/LR6/Task_2 /home/defis/Documents/453505/ОАиП/LR6/Task_2 /home/defis/Documents/453505/ОАиП/LR6/Task_2/build /home/defis/Documents/453505/ОАиП/LR6/Task_2/build /home/defis/Documents/453505/ОАиП/LR6/Task_2/build/CMakeFiles/ThreadSanitizedExecutable.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ThreadSanitizedExecutable.dir/depend

