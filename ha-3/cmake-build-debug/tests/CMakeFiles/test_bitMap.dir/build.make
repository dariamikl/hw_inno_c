# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /home/alien/Загрузки/CLion-2018.1.3/clion-2018.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/alien/Загрузки/CLion-2018.1.3/clion-2018.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_bitMap.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_bitMap.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_bitMap.dir/flags.make

tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o: tests/CMakeFiles/test_bitMap.dir/flags.make
tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o: ../tests/test_bitMap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o"
	cd /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_bitMap.dir/test_bitMap.c.o   -c /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/tests/test_bitMap.c

tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_bitMap.dir/test_bitMap.c.i"
	cd /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/tests/test_bitMap.c > CMakeFiles/test_bitMap.dir/test_bitMap.c.i

tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_bitMap.dir/test_bitMap.c.s"
	cd /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/tests/test_bitMap.c -o CMakeFiles/test_bitMap.dir/test_bitMap.c.s

tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o.requires:

.PHONY : tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o.requires

tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o.provides: tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o.requires
	$(MAKE) -f tests/CMakeFiles/test_bitMap.dir/build.make tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o.provides.build
.PHONY : tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o.provides

tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o.provides.build: tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o


tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o: tests/CMakeFiles/test_bitMap.dir/flags.make
tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o: ../src/bitMap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o"
	cd /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o   -c /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/src/bitMap.c

tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_bitMap.dir/__/src/bitMap.c.i"
	cd /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/src/bitMap.c > CMakeFiles/test_bitMap.dir/__/src/bitMap.c.i

tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_bitMap.dir/__/src/bitMap.c.s"
	cd /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/src/bitMap.c -o CMakeFiles/test_bitMap.dir/__/src/bitMap.c.s

tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o.requires:

.PHONY : tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o.requires

tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o.provides: tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o.requires
	$(MAKE) -f tests/CMakeFiles/test_bitMap.dir/build.make tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o.provides.build
.PHONY : tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o.provides

tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o.provides.build: tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o


# Object files for target test_bitMap
test_bitMap_OBJECTS = \
"CMakeFiles/test_bitMap.dir/test_bitMap.c.o" \
"CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o"

# External object files for target test_bitMap
test_bitMap_EXTERNAL_OBJECTS =

tests/test_bitMap: tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o
tests/test_bitMap: tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o
tests/test_bitMap: tests/CMakeFiles/test_bitMap.dir/build.make
tests/test_bitMap: tests/CMakeFiles/test_bitMap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable test_bitMap"
	cd /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_bitMap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_bitMap.dir/build: tests/test_bitMap

.PHONY : tests/CMakeFiles/test_bitMap.dir/build

tests/CMakeFiles/test_bitMap.dir/requires: tests/CMakeFiles/test_bitMap.dir/test_bitMap.c.o.requires
tests/CMakeFiles/test_bitMap.dir/requires: tests/CMakeFiles/test_bitMap.dir/__/src/bitMap.c.o.requires

.PHONY : tests/CMakeFiles/test_bitMap.dir/requires

tests/CMakeFiles/test_bitMap.dir/clean:
	cd /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_bitMap.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_bitMap.dir/clean

tests/CMakeFiles/test_bitMap.dir/depend:
	cd /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3 /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/tests /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/tests /home/alien/Загрузки/inno_ansic_spring-dev/assignments/ha-3/cmake-build-debug/tests/CMakeFiles/test_bitMap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test_bitMap.dir/depend
