# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/cowan/clion-2017.1.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/cowan/clion-2017.1.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cowan/CLionProjects/SFMLPong

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cowan/CLionProjects/SFMLPong/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SFMLPong.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SFMLPong.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SFMLPong.dir/flags.make

CMakeFiles/SFMLPong.dir/main.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SFMLPong.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/main.cpp.o -c /home/cowan/CLionProjects/SFMLPong/main.cpp

CMakeFiles/SFMLPong.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/main.cpp > CMakeFiles/SFMLPong.dir/main.cpp.i

CMakeFiles/SFMLPong.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/main.cpp -o CMakeFiles/SFMLPong.dir/main.cpp.s

CMakeFiles/SFMLPong.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/main.cpp.o.requires

CMakeFiles/SFMLPong.dir/main.cpp.o.provides: CMakeFiles/SFMLPong.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/main.cpp.o.provides

CMakeFiles/SFMLPong.dir/main.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/main.cpp.o


CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o: ../addBallPowerup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o -c /home/cowan/CLionProjects/SFMLPong/addBallPowerup.cpp

CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/addBallPowerup.cpp > CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.i

CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/addBallPowerup.cpp -o CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.s

CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o.requires

CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o.provides: CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o.provides

CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o


CMakeFiles/SFMLPong.dir/ball.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/ball.cpp.o: ../ball.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SFMLPong.dir/ball.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/ball.cpp.o -c /home/cowan/CLionProjects/SFMLPong/ball.cpp

CMakeFiles/SFMLPong.dir/ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/ball.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/ball.cpp > CMakeFiles/SFMLPong.dir/ball.cpp.i

CMakeFiles/SFMLPong.dir/ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/ball.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/ball.cpp -o CMakeFiles/SFMLPong.dir/ball.cpp.s

CMakeFiles/SFMLPong.dir/ball.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/ball.cpp.o.requires

CMakeFiles/SFMLPong.dir/ball.cpp.o.provides: CMakeFiles/SFMLPong.dir/ball.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/ball.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/ball.cpp.o.provides

CMakeFiles/SFMLPong.dir/ball.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/ball.cpp.o


CMakeFiles/SFMLPong.dir/game.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/game.cpp.o: ../game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SFMLPong.dir/game.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/game.cpp.o -c /home/cowan/CLionProjects/SFMLPong/game.cpp

CMakeFiles/SFMLPong.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/game.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/game.cpp > CMakeFiles/SFMLPong.dir/game.cpp.i

CMakeFiles/SFMLPong.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/game.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/game.cpp -o CMakeFiles/SFMLPong.dir/game.cpp.s

CMakeFiles/SFMLPong.dir/game.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/game.cpp.o.requires

CMakeFiles/SFMLPong.dir/game.cpp.o.provides: CMakeFiles/SFMLPong.dir/game.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/game.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/game.cpp.o.provides

CMakeFiles/SFMLPong.dir/game.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/game.cpp.o


CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o: ../longPaddlePowerup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o -c /home/cowan/CLionProjects/SFMLPong/longPaddlePowerup.cpp

CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/longPaddlePowerup.cpp > CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.i

CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/longPaddlePowerup.cpp -o CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.s

CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o.requires

CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o.provides: CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o.provides

CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o


CMakeFiles/SFMLPong.dir/paddle.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/paddle.cpp.o: ../paddle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SFMLPong.dir/paddle.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/paddle.cpp.o -c /home/cowan/CLionProjects/SFMLPong/paddle.cpp

CMakeFiles/SFMLPong.dir/paddle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/paddle.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/paddle.cpp > CMakeFiles/SFMLPong.dir/paddle.cpp.i

CMakeFiles/SFMLPong.dir/paddle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/paddle.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/paddle.cpp -o CMakeFiles/SFMLPong.dir/paddle.cpp.s

CMakeFiles/SFMLPong.dir/paddle.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/paddle.cpp.o.requires

CMakeFiles/SFMLPong.dir/paddle.cpp.o.provides: CMakeFiles/SFMLPong.dir/paddle.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/paddle.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/paddle.cpp.o.provides

CMakeFiles/SFMLPong.dir/paddle.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/paddle.cpp.o


CMakeFiles/SFMLPong.dir/powerup.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/powerup.cpp.o: ../powerup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SFMLPong.dir/powerup.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/powerup.cpp.o -c /home/cowan/CLionProjects/SFMLPong/powerup.cpp

CMakeFiles/SFMLPong.dir/powerup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/powerup.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/powerup.cpp > CMakeFiles/SFMLPong.dir/powerup.cpp.i

CMakeFiles/SFMLPong.dir/powerup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/powerup.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/powerup.cpp -o CMakeFiles/SFMLPong.dir/powerup.cpp.s

CMakeFiles/SFMLPong.dir/powerup.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/powerup.cpp.o.requires

CMakeFiles/SFMLPong.dir/powerup.cpp.o.provides: CMakeFiles/SFMLPong.dir/powerup.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/powerup.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/powerup.cpp.o.provides

CMakeFiles/SFMLPong.dir/powerup.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/powerup.cpp.o


CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o: ../ChangeBallSpeedPowerup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o -c /home/cowan/CLionProjects/SFMLPong/ChangeBallSpeedPowerup.cpp

CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/ChangeBallSpeedPowerup.cpp > CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.i

CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/ChangeBallSpeedPowerup.cpp -o CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.s

CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o.requires

CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o.provides: CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o.provides

CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o


CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o: ../PowerupManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o -c /home/cowan/CLionProjects/SFMLPong/PowerupManager.cpp

CMakeFiles/SFMLPong.dir/PowerupManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/PowerupManager.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/PowerupManager.cpp > CMakeFiles/SFMLPong.dir/PowerupManager.cpp.i

CMakeFiles/SFMLPong.dir/PowerupManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/PowerupManager.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/PowerupManager.cpp -o CMakeFiles/SFMLPong.dir/PowerupManager.cpp.s

CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o.requires

CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o.provides: CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o.provides

CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o


CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o: ../ScoreManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o -c /home/cowan/CLionProjects/SFMLPong/ScoreManager.cpp

CMakeFiles/SFMLPong.dir/ScoreManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/ScoreManager.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/ScoreManager.cpp > CMakeFiles/SFMLPong.dir/ScoreManager.cpp.i

CMakeFiles/SFMLPong.dir/ScoreManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/ScoreManager.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/ScoreManager.cpp -o CMakeFiles/SFMLPong.dir/ScoreManager.cpp.s

CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o.requires

CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o.provides: CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o.provides

CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o


CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o: ../KeyboardState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o -c /home/cowan/CLionProjects/SFMLPong/KeyboardState.cpp

CMakeFiles/SFMLPong.dir/KeyboardState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/KeyboardState.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/KeyboardState.cpp > CMakeFiles/SFMLPong.dir/KeyboardState.cpp.i

CMakeFiles/SFMLPong.dir/KeyboardState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/KeyboardState.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/KeyboardState.cpp -o CMakeFiles/SFMLPong.dir/KeyboardState.cpp.s

CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o.requires

CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o.provides: CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o.provides

CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o


CMakeFiles/SFMLPong.dir/InputHandler.cpp.o: CMakeFiles/SFMLPong.dir/flags.make
CMakeFiles/SFMLPong.dir/InputHandler.cpp.o: ../InputHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/SFMLPong.dir/InputHandler.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLPong.dir/InputHandler.cpp.o -c /home/cowan/CLionProjects/SFMLPong/InputHandler.cpp

CMakeFiles/SFMLPong.dir/InputHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLPong.dir/InputHandler.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cowan/CLionProjects/SFMLPong/InputHandler.cpp > CMakeFiles/SFMLPong.dir/InputHandler.cpp.i

CMakeFiles/SFMLPong.dir/InputHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLPong.dir/InputHandler.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cowan/CLionProjects/SFMLPong/InputHandler.cpp -o CMakeFiles/SFMLPong.dir/InputHandler.cpp.s

CMakeFiles/SFMLPong.dir/InputHandler.cpp.o.requires:

.PHONY : CMakeFiles/SFMLPong.dir/InputHandler.cpp.o.requires

CMakeFiles/SFMLPong.dir/InputHandler.cpp.o.provides: CMakeFiles/SFMLPong.dir/InputHandler.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLPong.dir/build.make CMakeFiles/SFMLPong.dir/InputHandler.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLPong.dir/InputHandler.cpp.o.provides

CMakeFiles/SFMLPong.dir/InputHandler.cpp.o.provides.build: CMakeFiles/SFMLPong.dir/InputHandler.cpp.o


# Object files for target SFMLPong
SFMLPong_OBJECTS = \
"CMakeFiles/SFMLPong.dir/main.cpp.o" \
"CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o" \
"CMakeFiles/SFMLPong.dir/ball.cpp.o" \
"CMakeFiles/SFMLPong.dir/game.cpp.o" \
"CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o" \
"CMakeFiles/SFMLPong.dir/paddle.cpp.o" \
"CMakeFiles/SFMLPong.dir/powerup.cpp.o" \
"CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o" \
"CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o" \
"CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o" \
"CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o" \
"CMakeFiles/SFMLPong.dir/InputHandler.cpp.o"

# External object files for target SFMLPong
SFMLPong_EXTERNAL_OBJECTS =

SFMLPong: CMakeFiles/SFMLPong.dir/main.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/ball.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/game.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/paddle.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/powerup.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/InputHandler.cpp.o
SFMLPong: CMakeFiles/SFMLPong.dir/build.make
SFMLPong: /usr/lib/x86_64-linux-gnu/libsfml-system.so
SFMLPong: /usr/lib/x86_64-linux-gnu/libsfml-window.so
SFMLPong: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
SFMLPong: /usr/lib/x86_64-linux-gnu/libsfml-network.so
SFMLPong: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
SFMLPong: CMakeFiles/SFMLPong.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable SFMLPong"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SFMLPong.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SFMLPong.dir/build: SFMLPong

.PHONY : CMakeFiles/SFMLPong.dir/build

CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/main.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/addBallPowerup.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/ball.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/game.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/longPaddlePowerup.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/paddle.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/powerup.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/ChangeBallSpeedPowerup.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/PowerupManager.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/ScoreManager.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/KeyboardState.cpp.o.requires
CMakeFiles/SFMLPong.dir/requires: CMakeFiles/SFMLPong.dir/InputHandler.cpp.o.requires

.PHONY : CMakeFiles/SFMLPong.dir/requires

CMakeFiles/SFMLPong.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SFMLPong.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SFMLPong.dir/clean

CMakeFiles/SFMLPong.dir/depend:
	cd /home/cowan/CLionProjects/SFMLPong/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cowan/CLionProjects/SFMLPong /home/cowan/CLionProjects/SFMLPong /home/cowan/CLionProjects/SFMLPong/cmake-build-debug /home/cowan/CLionProjects/SFMLPong/cmake-build-debug /home/cowan/CLionProjects/SFMLPong/cmake-build-debug/CMakeFiles/SFMLPong.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SFMLPong.dir/depend

