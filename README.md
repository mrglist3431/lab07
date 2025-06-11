┌──(kali㉿kali)-[~]
└─$ ls
boost_1_69_0   kali-01.kismet.csv     projects                    WPAcrack-01.kismet.csv     WPAcrack-03.csv
boost-libs     kali-01.kismet.netxml  Public                      WPAcrack-01.kismet.netxml  WPAcrack-03.kismet.csv
CLionProjects  kali-01.log.csv        Templates                   WPAcrack-01.log.csv        WPAcrack-03.kismet.netxml
Desktop        lab03                  TP-lab03                    WPAcrack-02.cap            WPAcrack-03.log.csv
Documents      mrglist3431            ventoy-1.0.96               WPAcrack-02.csv            ААА
Downloads      Music                  ventoy-1.0.96-linux.tar.gz  WPAcrack-02.kismet.csv
hs             openvpn3               Videos                      WPAcrack-02.kismet.netxml
kali-01.cap    passwords.txt          WPAcrack-01.cap             WPAcrack-02.log.csv
kali-01.csv    Pictures               WPAcrack-01.csv             WPAcrack-03.cap
                                                                                                                        
┌──(kali㉿kali)-[~]
└─$ mrglist3431                   
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431]
└─$ ls
workspace
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431]
└─$ workspace
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ ls
'#1#input.txt'    input.txt   lab3     node       reports   tasks
'#1#travis.log'   lab02       master   projects   scripts   travis.log
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ projects
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ lab07
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ ls   
_builds         CPackConfig.cmake  formatter_ex_lib         include    solver_application  third-party
ChangeLog.md    DESCRIPTION        formatter_lib            input.txt  solver_lib          travis.log
cmake           examples           gistfile.txt             log.txt    sources
CMakeLists.txt  file.txt           hello_world_application  README.md  tests
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ ..
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ..
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ ..
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431]
└─$ ..
                                                                                                                        
┌──(kali㉿kali)-[~]
└─$ $Home/.hunter                                                                       
zsh: no such file or directory: /.hunter
                                                                                                                        
┌──(kali㉿kali)-[~]
└─$ mrglist3431
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431]
└─$ workspace
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ projects
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ lab07
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ _builds
                                                                                                                        
┌──(kali㉿kali)-[~/…/workspace/projects/lab07/_builds]
└─$ ls   
_3rdParty  CMakeCache.txt  CMakeFiles
                                                                                                                        
┌──(kali㉿kali)-[~/…/workspace/projects/lab07/_builds]
└─$ ..
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ wget https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake -O cmake/HunterGate.cmake
--2025-06-11 06:03:04--  https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake
Resolving raw.githubusercontent.com (raw.githubusercontent.com)... 185.199.108.133, 185.199.109.133, 185.199.110.133, ...
Connecting to raw.githubusercontent.com (raw.githubusercontent.com)|185.199.108.133|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 17231 (17K) [text/plain]
Saving to: ‘cmake/HunterGate.cmake’

cmake/HunterGate.cmake        100%[=================================================>]  16.83K  --.-KB/s    in 0.09s   

2025-06-11 06:03:07 (197 KB/s) - ‘cmake/HunterGate.cmake’ saved [17231/17231]

                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ ed -i '/cmakeminimumrequired(VERSION 3.4)/a\
\
include("cmake/HunterGate.cmake")\
HunterGate(\
    URL "https://github.com/cpp-pm/hunter/archive/v0.23.251.tar.gz"\
    SHA1 "5659b15dc0884d4b03dbd95710e6a1fa0fc3258d"\
)\
' CMakeLists.txt
Command 'ed' not found, but can be installed with:
sudo apt install ed
Do you want to install it? (N/y)y
sudo apt install ed
[sudo] password for kali: 
Sorry, try again.
[sudo] password for kali: 
sudo: 1 incorrect password attempt

                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ sed -i '/cmakeminimumrequired(VERSION 3.4)/a\
\
include("cmake/HunterGate.cmake")\
HunterGate(\
    URL "https://github.com/cpp-pm/hunter/archive/v0.23.251.tar.gz"\
    SHA1 "5659b15dc0884d4b03dbd95710e6a1fa0fc3258d"\
)\
' CMakeLists.txt
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ git rm -r -f third-party/gtest
fatal: pathspec 'third-party/gtest' did not match any files
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ ..
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rm -rf lab07
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ git clone https://github.com/$GITHUB_USERNAME/lab06 projects/lab07
Cloning into 'projects/lab07'...
Username for 'https://github.com': ^C
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ юю
юю: command not found
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ..
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git clone https://github.com/$GITHUB_USERNAME/lab06 projects/lab07
Cloning into 'projects/lab07'...
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
remote: Repository not found.
fatal: repository 'https://github.com//lab06/' not found
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git clone https://github.com/{$GITHUB_USERNAME}/lab06 projects/lab07
Cloning into 'projects/lab07'...
remote: Repository not found.
fatal: repository 'https://github.com/{}/lab06/' not found
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ export GITHUB_USERNAME=mrglist3431
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ if [ -f scripts/activate ]; then
  source scripts/activate
else
  echo "Warning: scripts/activate not found. Пропускаем активацию."
else> 
else> 
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ source scripts/activate                      
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git clone https://github.com/${GITHUB_USERNAME}/lab06 projects/lab07
Cloning into 'projects/lab07'...
remote: Enumerating objects: 259, done.
remote: Counting objects: 100% (259/259), done.
remote: Compressing objects: 100% (123/123), done.
remote: Total 259 (delta 112), reused 255 (delta 110), pack-reused 0 (from 0)
Receiving objects: 100% (259/259), 122.95 KiB | 59.00 KiB/s, done.
Resolving deltas: 100% (112/112), done.
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ cd projects/lab07
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ git remote remove origin || true
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab07
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ mkdir -p cmake
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ wget https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake -O cmake/HunterGate.cmake
--2025-06-11 06:26:43--  https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake
Resolving raw.githubusercontent.com (raw.githubusercontent.com)... 185.199.111.133, 185.199.108.133, 185.199.110.133, ...
Connecting to raw.githubusercontent.com (raw.githubusercontent.com)|185.199.111.133|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 17231 (17K) [text/plain]
Saving to: ‘cmake/HunterGate.cmake’

cmake/HunterGate.cmake        100%[=================================================>]  16.83K  --.-KB/s    in 0.09s   

2025-06-11 06:26:44 (198 KB/s) - ‘cmake/HunterGate.cmake’ saved [17231/17231]

                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ sed -i '/cmake_minimum_required(VERSION 3\.4)/a\
\
include("cmake/HunterGate.cmake")\
HunterGate(\
    URL "https://github.com/cpp-pm/hunter/archive/v0.23.251.tar.gz"\
    SHA1 "5659b15dc0884d4b03dbd95710e6a1fa0fc3258d"\
)\
' CMakeLists.txt
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ if [ -d third-party/gtest ]; then
  git rm -r -f third-party/gtest
fi
rm 'third-party/gtest'
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ set(PRINT_VERSION_STRING ...)
sed -i '/set(PRINT_VERSION_STRING "v${PRINT_VERSION}")/a\
\
hunter_add_package(GTest)\
find_package(GTest CONFIG REQUIRED)\
' CMakeLists.txt
zsh: unknown file attribute: _
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ GTest::main
sed -i 's/add_subdirectory(third-party\/gtest)//g' CMakeLists.txt
sed -i 's/gtest_main/GTest::main/g' CMakeLists.txt
GTest::main: command not found
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ sed -i 's/add_subdirectory(third-party\/gtest)//g' CMakeLists.txt
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ sed -i 's/gtest_main/GTest::main/g' CMakeLists.txt
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_set_config_location.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:13 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_private_data.cmake:12 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:35 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_initialize.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:36 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Error at /usr/share/cmake-3.30/Modules/CPack.cmake:688 (message):
  CPack license resource file:                                                                                          
  "/home/kali/mrglist3431/workspace/projects/lab07/LICENSE" could not be                                                
  found.                                                                                                                
Call Stack (most recent call first):                                                                                    
  /usr/share/cmake-3.30/Modules/CPack.cmake:693 (cpack_check_file_exists)                                               
  CPackConfig.cmake:24 (include)                                                                                        
  CMakeLists.txt:40 (include)                                                                                           
                                                                                                                        
                                                                                                                        
-- Configuring incomplete, errors occurred!
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ ..
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rm -rf lab07
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ..
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ export GITHUB_USERNAME=mrglist3431
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ alias gsed=sed
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ pushd .
~/mrglist3431/workspace ~/mrglist3431/workspace
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ source scripts/activate
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git clone https://github.com/${GITHUB_USERNAME}/lab06 projects/lab07
Cloning into 'projects/lab07'...
remote: Enumerating objects: 259, done.
remote: Counting objects: 100% (259/259), done.
remote: Compressing objects: 100% (123/123), done.
remote: Total 259 (delta 112), reused 255 (delta 110), pack-reused 0 (from 0)
Receiving objects: 100% (259/259), 122.95 KiB | 1.19 MiB/s, done.
Resolving deltas: 100% (112/112), done.
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ cd projects/lab07
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ git remote remove origin        
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab07
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ mkdir -p cmake
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ wget https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake -O cmake/HunterGate.cmake

--2025-06-11 06:29:55--  https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake
Resolving raw.githubusercontent.com (raw.githubusercontent.com)... 185.199.111.133, 185.199.108.133, 185.199.110.133, ...
Connecting to raw.githubusercontent.com (raw.githubusercontent.com)|185.199.111.133|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 17231 (17K) [text/plain]
Saving to: ‘cmake/HunterGate.cmake’

cmake/HunterGate.cmake        100%[=================================================>]  16.83K  --.-KB/s    in 0s      

2025-06-11 06:29:56 (61.9 MB/s) - ‘cmake/HunterGate.cmake’ saved [17231/17231]

                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i '/cmake_minimum_required(VERSION 3.4)/a\
\
include("cmake/HunterGate.cmake")\
HunterGate(\
    URL "https://github.com/cpp-pm/hunter/archive/v0.23.251.tar.gz"\
    SHA1 "5659b15dc0884d4b03dbd95710e6a1fa0fc3258d"\
)\
' CMakeLists.txt
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ git rm -rf third-party/gtest
rm 'third-party/gtest'
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i '/set(PRINT_VERSION_STRING "v\${PRINT_VERSION}")/a\
\
hunter_add_package(GTest)\
find_package(GTest CONFIG REQUIRED)\
' CMakeLists.txt
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i 's/add_subdirectory(third-party/gtest)//' CMakeLists.txt
sed: -e expression #1, char 39: unknown option to `s'
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i 's/add_subdirectory(third-party/gtest)//' CMakeLists.txt
sed: -e expression #1, char 39: unknown option to `s'
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i 's/add_subdirectory(third-party/gtest)/' CMakeLists.txt 
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i 's/gtest_main/GTest::main/' CMakeLists.txt
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Error at CMakeLists.txt:37:
  Parse error.  Expected "(", got right paren with text ")".                                                            
                                                                                                                        
                                                                                                                        
-- Configuring incomplete, errors occurred!
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ ls                                                    
_builds         CPackConfig.cmake  formatter_ex_lib         include    solver_application  third-party
ChangeLog.md    DESCRIPTION        formatter_lib            input.txt  solver_lib          travis.log
cmake           examples           gistfile.txt             log.txt    sources
CMakeLists.txt  file.txt           hello_world_application  README.md  tests
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt                                   
                                                                                                                        
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Error at CMakeLists.txt:39:
  Parse error.  Expected "(", got right paren with text ")".                                                             
                                                                                                                         
                                                                                                                         
-- Configuring incomplete, errors occurred!
                                                                                                                         
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                         
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Warning (dev) at CMakeLists.txt:5:
  Syntax Warning in cmake code at column 67                                                                              
                                                                                                                         
  Argument not separated from preceding token by whitespace.                                                             
This warning is for project developers.  Use -Wno-dev to suppress it.                                                    
                                                                                                                         
CMake Warning (dev) at CMakeLists.txt:6:
  Syntax Warning in cmake code at column 11                                                                              
                                                                                                                         
  Argument not separated from preceding token by whitespace.                                                             
This warning is for project developers.  Use -Wno-dev to suppress it.                                                    
                                                                                                                         
CMake Warning (dev) at CMakeLists.txt:6:
  Syntax Warning in cmake code at column 51                                                                              
                                                                                                                         
  Argument not separated from preceding token by whitespace.                                                             
This warning is for project developers.  Use -Wno-dev to suppress it.                                                    
                                                                                                                         
CMake Warning (dev) at CMakeLists.txt:16:
  Syntax Warning in cmake code at column 27                                                                              
                                                                                                                         
  Argument not separated from preceding token by whitespace.                                                             
This warning is for project developers.  Use -Wno-dev to suppress it.                                                    
                                                                                                                         
CMake Error at CMakeLists.txt:47:
  Parse error.  Function missing ending ")".  Instead found unterminated                                                 
  string with text ")                                                                                                    
                                                                                                                         
                                                                                                                         
                                                                                                                         
  hunter_add_package(GTest)                                                                                              
                                                                                                                         
  find_package(GTest CONFIG REQUIRED)                                                                                    
                                                                                                                         
                                                                                                                         
                                                                                                                         
  add_executable(my_executable main.cpp)                                                                                 
                                                                                                                         
  target_link_libraries(my_executable GTest::main)                                                                       
                                                                                                                         
                                                                                                                         
                                                                                                                         
  set(CMAKE_CXX_STANDARD 11)                                                                                             
                                                                                                                         
  set(CMAKE_CXX_STANDARD_REQUIRED ON)                                                                                    
                                                                                                                         
                                                                                                                         
                                                                                                                         
  add_library(print STATIC sources/print.cpp)                                                                            
                                                                                                                         
                                                                                                                         
                                                                                                                         
  include_directories(include)                                                                                           
                                                                                                                         
                                                                                                                         
                                                                                                                         
  add_executable(example1 examples/example1.cpp)                                                                         
                                                                                                                         
  add_executable(example2 examples/example2.cpp)                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
  target_link_libraries(example1 print)                                                                                  
                                                                                                                         
  target_link_libraries(example2 print)                                                                                  
                                                                                                                         
                                                                                                                         
                                                                                                                         
  if(BUILD_TESTS)                                                                                                        
                                                                                                                         
    enable_testing()                                                                                                     
    gtest)/gtest)                                                                                                        
    file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)                                                                  
    add_executable(check ${${PROJECT_NAME}_TEST_SOURCES})                                                                
    target_link_libraries(check ${PROJECT_NAME} GTest::main)                                                             
    add_test(NAME check COMMAND check)                                                                                   
                                                                                                                         
  endif()                                                                                                                
                                                                                                                         
                                                                                                                         
                                                                                                                         
  include(CPackConfig.cmake)                                                                                             
                                                                                                                         
  ".                                                                                                                     
                                                                                                                         
                                                                                                                         
-- Configuring incomplete, errors occurred!
                                                                                                                         
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Warning (dev) at CMakeLists.txt:5:
  Syntax Warning in cmake code at column 67

  Argument not separated from preceding token by whitespace.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) at CMakeLists.txt:6:
  Syntax Warning in cmake code at column 11
                                                                                                                    
  Argument not separated from preceding token by whitespace.                                                        
This warning is for project developers.  Use -Wno-dev to suppress it.                                               
                                                                                                                    
CMake Warning (dev) at CMakeLists.txt:6:
  Syntax Warning in cmake code at column 51                                                                         
                                                                                                                    
  Argument not separated from preceding token by whitespace.                                                        
This warning is for project developers.  Use -Wno-dev to suppress it.                                               
                                                                                                                    
CMake Warning (dev) at CMakeLists.txt:16:
  Syntax Warning in cmake code at column 27                                                                         
                                                                                                                    
  Argument not separated from preceding token by whitespace.                                                        
This warning is for project developers.  Use -Wno-dev to suppress it.                                               
                                                                                                                    
CMake Error at CMakeLists.txt:46:
  Parse error.  Function missing ending ")".  Instead found unterminated                                            
  string with text ")                                                                                               
                                                                                                                    
                                                                                                                    
                                                                                                                    
  hunter_add_package(GTest)                                                                                         
                                                                                                                    
  find_package(GTest CONFIG REQUIRED)                                                                               
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
  set(CMAKE_CXX_STANDARD 11)                                                                                        
                                                                                                                    
  set(CMAKE_CXX_STANDARD_REQUIRED ON)                                                                               
                                                                                                                    
                                                                                                                    
                                                                                                                    
  add_library(print STATIC sources/print.cpp)                                                                       
                                                                                                                    
                                                                                                                    
                                                                                                                    
  include_directories(include)                                                                                      
                                                                                                                    
                                                                                                                    
                                                                                                                    
  add_executable(example1 examples/example1.cpp)                                                                    
                                                                                                                    
  add_executable(example2 examples/example2.cpp)                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
  target_link_libraries(example1 print)                                                                             
                                                                                                                    
  target_link_libraries(example2 print)                                                                             
                                                                                                                    
                                                                                                                    
                                                                                                                    
  if(BUILD_TESTS)                                                                                                   
                                                                                                                    
    enable_testing()                                                                                                
    find_package(GTest REQUIRED)                                                                                    
    file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)                                                             
    add_executable(check ${${PROJECT_NAME}_TEST_SOURCES})                                                           
    target_link_libraries(check ${PROJECT_NAME} GTest::main)                                                        
    add_test(NAME check COMMAND check)                                                                              
                                                                                                                    
  endif()                                                                                                           
                                                                                                                    
                                                                                                                    
                                                                                                                    
  include(CPackConfig.cmake)                                                                                        
                                                                                                                    
  ".                                                                                                                
                                                                                                                    
                                                                                                                    
-- Configuring incomplete, errors occurred!
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_set_config_location.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:13 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_private_data.cmake:12 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:35 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_initialize.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:36 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- [hunter] Calculating Toolchain-SHA1
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- [hunter] Calculating Config-SHA1
-- [hunter] HUNTER_ROOT: /home/kali/.hunter
-- [hunter] [ Hunter-ID: 5659b15 | Toolchain-ID: 85f615d | Config-ID: 8a1641b ]
CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_set_config_location.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:13 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_set_config_location.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:13 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_create_cache_meta_directory.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_create_cache_meta_directory.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_create_cache_meta_directory.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_save_to_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:26 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_create_cache_meta_directory.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_save_to_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:26 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_save_to_cache.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:26 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_save_to_cache.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:26 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_save_to_cache.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:26 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


-- [hunter] GTEST_ROOT: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Install (ver.: 1.10.0)
-- [hunter] Building GTest
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/cache.cmake
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/args.cmake
CMake Deprecation Warning at CMakeLists.txt:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Warning (dev) at /usr/share/cmake-3.30/Modules/ExternalProject/shared_internal_commands.cmake:1284 (message):
  The DOWNLOAD_EXTRACT_TIMESTAMP option was not given and policy CMP0135 is
  not set.  The policy's OLD behavior will be used.  When using a URL
  download, the timestamps of extracted files should preferably be that of
  the time of extraction, otherwise code that depends on the extracted
  contents might not be rebuilt if the URL changes.  The OLD behavior
  preserves the timestamps from the archive instead, but this is usually not
  what you want.  Update your project to the NEW behavior or specify the
  DOWNLOAD_EXTRACT_TIMESTAMP option with a value of true to avoid this
  robustness issue.
Call Stack (most recent call first):
  /usr/share/cmake-3.30/Modules/ExternalProject.cmake:3035 (_ep_add_download_command)
  CMakeLists.txt:152 (ExternalProject_Add)
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) at /usr/share/cmake-3.30/Modules/ExternalProject/shared_internal_commands.cmake:1284 (message):
  The DOWNLOAD_EXTRACT_TIMESTAMP option was not given and policy CMP0135 is
  not set.  The policy's OLD behavior will be used.  When using a URL
  download, the timestamps of extracted files should preferably be that of
  the time of extraction, otherwise code that depends on the extracted
  contents might not be rebuilt if the URL changes.  The OLD behavior
  preserves the timestamps from the archive instead, but this is usually not
  what you want.  Update your project to the NEW behavior or specify the
  DOWNLOAD_EXTRACT_TIMESTAMP option with a value of true to avoid this
  robustness issue.
Call Stack (most recent call first):
  /usr/share/cmake-3.30/Modules/ExternalProject.cmake:3035 (_ep_add_download_command)
  CMakeLists.txt:152 (ExternalProject_Add)
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done (0.2s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Build
[  6%] Creating directories for 'GTest-Release'
[ 12%] Performing download step (download, verify and extract) for 'GTest-Release'
-- verifying file...
       file='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
-- File already exists and hash match (skip download):
  file='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
  SHA1='9c89be7df9c5e8cb0bc20b3c4b39bf7e82686770'
-- extracting...
     src='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
     dst='/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source'
-- extracting... [tar xfz]
-- extracting... [analysis]
-- extracting... [rename]
-- extracting... [clean up]
-- extracting... done
[ 18%] No update step for 'GTest-Release'
[ 25%] No patch step for 'GTest-Release'
[ 31%] Performing configure step for 'GTest-Release'
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/cache.cmake
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/args.cmake
CMake Deprecation Warning at CMakeLists.txt:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Deprecation Warning at googlemock/CMakeLists.txt:45 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at googletest/CMakeLists.txt:56 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Warning (dev) at googletest/cmake/internal_utils.cmake:243 (find_package):
  Policy CMP0148 is not set: The FindPythonInterp and FindPythonLibs modules
  are removed.  Run "cmake --help-policy CMP0148" for policy details.  Use
  the cmake_policy command to set the policy and suppress this warning.

Call Stack (most recent call first):
  googletest/CMakeLists.txt:91 (include)
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Found PythonInterp: /usr/bin/python (found version "3.12.7")
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (0.3s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Build/GTest-Release-prefix/src/GTest-Release-build
[ 37%] Performing build step for 'GTest-Release'
[ 12%] Building CXX object googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 25%] Linking CXX static library ../lib/libgtest.a
[ 25%] Built target gtest
[ 37%] Building CXX object googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 50%] Building CXX object googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 62%] Linking CXX static library ../lib/libgtest_main.a
[ 62%] Built target gtest_main
[ 75%] Linking CXX static library ../lib/libgmock.a
[ 75%] Built target gmock
[ 87%] Building CXX object googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../lib/libgmock_main.a
[100%] Built target gmock_main
[ 43%] Performing install step for 'GTest-Release'
[ 25%] Built target gtest
[ 50%] Built target gmock
[ 75%] Built target gmock_main
[100%] Built target gtest_main
Install the project...
-- Install configuration: "Release"
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-cardinalities.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-spec-builders.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-matchers.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-more-actions.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-matchers.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-actions.h.pump
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-actions.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-more-matchers.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-function-mockers.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-actions.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-matchers.h.pump
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom/gmock-matchers.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom/README.md
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom/gmock-generated-actions.h.pump
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom/gmock-generated-actions.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom/gmock-port.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/gmock-pp.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/gmock-internal-utils.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/gmock-port.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-function-mockers.h.pump
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-function-mocker.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-nice-strict.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/libgmock.a
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/libgmock_main.a
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/pkgconfig/gmock.pc
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/pkgconfig/gmock_main.pc
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/cmake/GTest/GTestTargets.cmake
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/cmake/GTest/GTestTargets-release.cmake
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/cmake/GTest/GTestConfigVersion.cmake
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/cmake/GTest/GTestConfig.cmake
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-message.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-printers.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-matchers.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest_pred_impl.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-test-part.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-death-test.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-internal.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-param-util.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-port-arch.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-type-util.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-filepath.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-port.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/custom
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/custom/gtest-printers.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/custom/README.md
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/custom/gtest-port.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/custom/gtest.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-string.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-type-util.h.pump
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-death-test-internal.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-typed-test.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-spi.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-param-test.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest.h
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest_prod.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/libgtest.a
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/libgtest_main.a
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/pkgconfig/gtest.pc
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/pkgconfig/gtest_main.pc
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/args.cmake
CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/scripts/try-copy-license.cmake:5 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


[ 50%] Completed 'GTest-Release'
[ 50%] Built target GTest-Release
[ 56%] Creating directories for 'GTest-Debug'
[ 62%] Performing download step (download, verify and extract) for 'GTest-Debug'
-- verifying file...
       file='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
-- File already exists and hash match (skip download):
  file='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
  SHA1='9c89be7df9c5e8cb0bc20b3c4b39bf7e82686770'
-- extracting...
     src='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
     dst='/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source'
-- extracting... [tar xfz]
-- extracting... [analysis]
-- extracting... [rename]
-- extracting... [clean up]
-- extracting... done
[ 68%] No update step for 'GTest-Debug'
[ 75%] No patch step for 'GTest-Debug'
[ 81%] Performing configure step for 'GTest-Debug'
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/cache.cmake
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/args.cmake
CMake Deprecation Warning at CMakeLists.txt:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Deprecation Warning at googlemock/CMakeLists.txt:45 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at googletest/CMakeLists.txt:56 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Warning (dev) at googletest/cmake/internal_utils.cmake:243 (find_package):
  Policy CMP0148 is not set: The FindPythonInterp and FindPythonLibs modules
  are removed.  Run "cmake --help-policy CMP0148" for policy details.  Use
  the cmake_policy command to set the policy and suppress this warning.

Call Stack (most recent call first):
  googletest/CMakeLists.txt:91 (include)
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Found PythonInterp: /usr/bin/python (found version "3.12.7")
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (0.3s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Build/GTest-Debug-prefix/src/GTest-Debug-build
[ 87%] Performing build step for 'GTest-Debug'
[ 12%] Building CXX object googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
In file included from /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source/googletest/src/gtest-all.cc:42:
/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source/googletest/src/gtest-death-test.cc: In function ‘bool testing::internal::StackGrowsDown()’:
/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source/googletest/src/gtest-death-test.cc:1301:24: error: ‘dummy’ may be used uninitialized [-Werror=maybe-uninitialized]
 1301 |   StackLowerThanAddress(&dummy, &result);
      |   ~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~
/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source/googletest/src/gtest-death-test.cc:1290:13: note: by argument 1 of type ‘const void*’ to ‘void testing::internal::StackLowerThanAddress(const void*, bool*)’ declared here
 1290 | static void StackLowerThanAddress(const void* ptr, bool* result) {
      |             ^~~~~~~~~~~~~~~~~~~~~
/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source/googletest/src/gtest-death-test.cc:1299:7: note: ‘dummy’ declared here
 1299 |   int dummy;
      |       ^~~~~
cc1plus: all warnings being treated as errors
gmake[5]: *** [googletest/CMakeFiles/gtest.dir/build.make:76: googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o] Error 1
gmake[4]: *** [CMakeFiles/Makefile2:172: googletest/CMakeFiles/gtest.dir/all] Error 2
gmake[3]: *** [Makefile:146: all] Error 2
gmake[2]: *** [CMakeFiles/GTest-Debug.dir/build.make:86: GTest-Debug-prefix/src/GTest-Debug-stamp/GTest-Debug-build] Error 2
gmake[1]: *** [CMakeFiles/Makefile2:111: CMakeFiles/GTest-Debug.dir/all] Error 2
gmake: *** [Makefile:91: all] Error 2

[hunter ** FATAL ERROR **] Build step failed (dir: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest
[hunter ** FATAL ERROR **] [Directory:/home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest]

------------------------------ ERROR -----------------------------
    https://hunter.readthedocs.io/en/latest/reference/errors/error.external.build.failed.html
------------------------------------------------------------------

CMake Error at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_error_page.cmake:12 (message):                                                                                                   
Call Stack (most recent call first):                                                                                
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_fatal_error.cmake:20 (hunter_error_page)                                                                                                      
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:623 (hunter_fatal_error)                                                                                                       
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:291 (hunter_download)                                                                                                            
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)                                                                                                                
  CMakeLists.txt:18 (hunter_add_package)                                                                            
                                                                                                                    
                                                                                                                    
-- Configuring incomplete, errors occurred!
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ 
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ rm -rf ~/.hunter
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- [hunter] Initializing Hunter workspace (5659b15dc0884d4b03dbd95710e6a1fa0fc3258d)
-- [hunter]   https://github.com/cpp-pm/hunter/archive/v0.23.251.tar.gz
-- [hunter]   -> /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15
CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_set_config_location.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:13 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:34 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_private_data.cmake:12 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:35 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_initialize.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/Hunter:36 (include)
  cmake/HunterGate.cmake:540 (include)
  CMakeLists.txt:4 (HunterGate)


-- [hunter] Calculating Toolchain-SHA1
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- [hunter] Calculating Config-SHA1
-- [hunter] HUNTER_ROOT: /home/kali/.hunter
-- [hunter] [ Hunter-ID: 5659b15 | Toolchain-ID: 85f615d | Config-ID: 8a1641b ]
CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_set_config_location.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:13 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_config_sha1.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:9 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_toolchain_sha1.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:10 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_set_config_location.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:13 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_calculate_self.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_finalize.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_cache_run.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_create_cache_meta_directory.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_create_cache_meta_directory.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_load_from_cache.cmake:6 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:22 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_create_cache_meta_directory.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_save_to_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:26 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_create_cache_meta_directory.cmake:5 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_save_to_cache.cmake:4 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:26 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_save_to_cache.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:26 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_save_to_cache.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:26 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_lock_directory.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_make_directory.cmake:7 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_save_to_cache.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:26 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:8 (include)
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)
  CMakeLists.txt:18 (hunter_add_package)


-- [hunter] GTEST_ROOT: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Install (ver.: 1.10.0)
-- [hunter] Building GTest
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/cache.cmake
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/args.cmake
CMake Deprecation Warning at CMakeLists.txt:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Warning (dev) at /usr/share/cmake-3.30/Modules/ExternalProject/shared_internal_commands.cmake:1284 (message):
  The DOWNLOAD_EXTRACT_TIMESTAMP option was not given and policy CMP0135 is
  not set.  The policy's OLD behavior will be used.  When using a URL
  download, the timestamps of extracted files should preferably be that of
  the time of extraction, otherwise code that depends on the extracted
  contents might not be rebuilt if the URL changes.  The OLD behavior
  preserves the timestamps from the archive instead, but this is usually not
  what you want.  Update your project to the NEW behavior or specify the
  DOWNLOAD_EXTRACT_TIMESTAMP option with a value of true to avoid this
  robustness issue.
Call Stack (most recent call first):
  /usr/share/cmake-3.30/Modules/ExternalProject.cmake:3035 (_ep_add_download_command)
  CMakeLists.txt:152 (ExternalProject_Add)
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) at /usr/share/cmake-3.30/Modules/ExternalProject/shared_internal_commands.cmake:1284 (message):
  The DOWNLOAD_EXTRACT_TIMESTAMP option was not given and policy CMP0135 is
  not set.  The policy's OLD behavior will be used.  When using a URL
  download, the timestamps of extracted files should preferably be that of
  the time of extraction, otherwise code that depends on the extracted
  contents might not be rebuilt if the URL changes.  The OLD behavior
  preserves the timestamps from the archive instead, but this is usually not
  what you want.  Update your project to the NEW behavior or specify the
  DOWNLOAD_EXTRACT_TIMESTAMP option with a value of true to avoid this
  robustness issue.
Call Stack (most recent call first):
  /usr/share/cmake-3.30/Modules/ExternalProject.cmake:3035 (_ep_add_download_command)
  CMakeLists.txt:152 (ExternalProject_Add)
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done (0.2s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Build
[  6%] Creating directories for 'GTest-Release'
[ 12%] Performing download step (download, verify and extract) for 'GTest-Release'
-- Downloading...
   dst='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
   timeout='none'
   inactivity timeout='none'
-- Using src='https://github.com/google/googletest/archive/release-1.10.0.tar.gz'
-- verifying file...
       file='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
-- Downloading... done
-- extracting...
     src='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
     dst='/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source'
-- extracting... [tar xfz]
-- extracting... [analysis]
-- extracting... [rename]
-- extracting... [clean up]
-- extracting... done
[ 18%] No update step for 'GTest-Release'
[ 25%] No patch step for 'GTest-Release'
[ 31%] Performing configure step for 'GTest-Release'
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/cache.cmake
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/args.cmake
CMake Deprecation Warning at CMakeLists.txt:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Deprecation Warning at googlemock/CMakeLists.txt:45 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at googletest/CMakeLists.txt:56 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Warning (dev) at googletest/cmake/internal_utils.cmake:243 (find_package):
  Policy CMP0148 is not set: The FindPythonInterp and FindPythonLibs modules
  are removed.  Run "cmake --help-policy CMP0148" for policy details.  Use
  the cmake_policy command to set the policy and suppress this warning.

Call Stack (most recent call first):
  googletest/CMakeLists.txt:91 (include)
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Found PythonInterp: /usr/bin/python (found version "3.12.7")
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (0.3s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Build/GTest-Release-prefix/src/GTest-Release-build
[ 37%] Performing build step for 'GTest-Release'
[ 12%] Building CXX object googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 25%] Linking CXX static library ../lib/libgtest.a
[ 25%] Built target gtest
[ 37%] Building CXX object googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 50%] Building CXX object googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 62%] Linking CXX static library ../lib/libgtest_main.a
[ 62%] Built target gtest_main
[ 75%] Linking CXX static library ../lib/libgmock.a
[ 75%] Built target gmock
[ 87%] Building CXX object googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../lib/libgmock_main.a
[100%] Built target gmock_main
[ 43%] Performing install step for 'GTest-Release'
[ 25%] Built target gtest
[ 50%] Built target gmock
[ 75%] Built target gmock_main
[100%] Built target gtest_main
Install the project...
-- Install configuration: "Release"
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-cardinalities.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-spec-builders.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-matchers.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-more-actions.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-matchers.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-actions.h.pump
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-actions.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-more-matchers.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-function-mockers.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-actions.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-matchers.h.pump
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom/gmock-matchers.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom/README.md
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom/gmock-generated-actions.h.pump
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom/gmock-generated-actions.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/custom/gmock-port.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/gmock-pp.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/gmock-internal-utils.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/internal/gmock-port.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-generated-function-mockers.h.pump
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-function-mocker.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gmock/gmock-nice-strict.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/libgmock.a
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/libgmock_main.a
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/pkgconfig/gmock.pc
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/pkgconfig/gmock_main.pc
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/cmake/GTest/GTestTargets.cmake
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/cmake/GTest/GTestTargets-release.cmake
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/cmake/GTest/GTestConfigVersion.cmake
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/cmake/GTest/GTestConfig.cmake
-- Up-to-date: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-message.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-printers.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-matchers.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest_pred_impl.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-test-part.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-death-test.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-internal.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-param-util.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-port-arch.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-type-util.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-filepath.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-port.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/custom
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/custom/gtest-printers.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/custom/README.md
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/custom/gtest-port.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/custom/gtest.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-string.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-type-util.h.pump
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/internal/gtest-death-test-internal.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-typed-test.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-spi.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest-param-test.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/include/gtest/gtest_prod.h
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/libgtest.a
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/libgtest_main.a
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/pkgconfig/gtest.pc
-- Installing: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Install/lib/pkgconfig/gtest_main.pc
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/args.cmake
CMake Deprecation Warning at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/scripts/try-copy-license.cmake:5 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


[ 50%] Completed 'GTest-Release'
[ 50%] Built target GTest-Release
[ 56%] Creating directories for 'GTest-Debug'
[ 62%] Performing download step (download, verify and extract) for 'GTest-Debug'
-- verifying file...
       file='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
-- File already exists and hash match (skip download):
  file='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
  SHA1='9c89be7df9c5e8cb0bc20b3c4b39bf7e82686770'
-- extracting...
     src='/home/kali/.hunter/_Base/Download/GTest/1.10.0/9c89be7/release-1.10.0.tar.gz'
     dst='/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source'
-- extracting... [tar xfz]
-- extracting... [analysis]
-- extracting... [rename]
-- extracting... [clean up]
-- extracting... done
[ 68%] No update step for 'GTest-Debug'
[ 75%] No patch step for 'GTest-Debug'
[ 81%] Performing configure step for 'GTest-Debug'
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/cache.cmake
loading initial cache file /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/args.cmake
CMake Deprecation Warning at CMakeLists.txt:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Deprecation Warning at googlemock/CMakeLists.txt:45 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at googletest/CMakeLists.txt:56 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Warning (dev) at googletest/cmake/internal_utils.cmake:243 (find_package):
  Policy CMP0148 is not set: The FindPythonInterp and FindPythonLibs modules
  are removed.  Run "cmake --help-policy CMP0148" for policy details.  Use
  the cmake_policy command to set the policy and suppress this warning.

Call Stack (most recent call first):
  googletest/CMakeLists.txt:91 (include)
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Found PythonInterp: /usr/bin/python (found version "3.12.7")
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (0.3s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Build/GTest-Debug-prefix/src/GTest-Debug-build
[ 87%] Performing build step for 'GTest-Debug'
[ 12%] Building CXX object googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
In file included from /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source/googletest/src/gtest-all.cc:42:
/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source/googletest/src/gtest-death-test.cc: In function ‘bool testing::internal::StackGrowsDown()’:
/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source/googletest/src/gtest-death-test.cc:1301:24: error: ‘dummy’ may be used uninitialized [-Werror=maybe-uninitialized]
 1301 |   StackLowerThanAddress(&dummy, &result);
      |   ~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~
/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source/googletest/src/gtest-death-test.cc:1290:13: note: by argument 1 of type ‘const void*’ to ‘void testing::internal::StackLowerThanAddress(const void*, bool*)’ declared here
 1290 | static void StackLowerThanAddress(const void* ptr, bool* result) {
      |             ^~~~~~~~~~~~~~~~~~~~~
/home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest/Source/googletest/src/gtest-death-test.cc:1299:7: note: ‘dummy’ declared here
 1299 |   int dummy;
      |       ^~~~~
cc1plus: all warnings being treated as errors
gmake[5]: *** [googletest/CMakeFiles/gtest.dir/build.make:76: googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o] Error 1
gmake[4]: *** [CMakeFiles/Makefile2:172: googletest/CMakeFiles/gtest.dir/all] Error 2
gmake[3]: *** [Makefile:146: all] Error 2
gmake[2]: *** [CMakeFiles/GTest-Debug.dir/build.make:86: GTest-Debug-prefix/src/GTest-Debug-stamp/GTest-Debug-build] Error 2
gmake[1]: *** [CMakeFiles/Makefile2:111: CMakeFiles/GTest-Debug.dir/all] Error 2
gmake: *** [Makefile:91: all] Error 2

[hunter ** FATAL ERROR **] Build step failed (dir: /home/kali/.hunter/_Base/5659b15/85f615d/8a1641b/Build/GTest
[hunter ** FATAL ERROR **] [Directory:/home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest]

------------------------------ ERROR -----------------------------
    https://hunter.readthedocs.io/en/latest/reference/errors/error.external.build.failed.html
------------------------------------------------------------------

CMake Error at /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_error_page.cmake:12 (message):                                                                                                   
Call Stack (most recent call first):                                                                                
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_fatal_error.cmake:20 (hunter_error_page)                                                                                                      
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_download.cmake:623 (hunter_fatal_error)                                                                                                       
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/projects/GTest/hunter.cmake:291 (hunter_download)                                                                                                            
  /home/kali/.hunter/_Base/Download/Hunter/0.23.251/5659b15/Unpacked/cmake/modules/hunter_add_package.cmake:62 (include)                                                                                                                
  CMakeLists.txt:18 (hunter_add_package)                                                                            
                                                                                                                    
                                                                                                                    
-- Configuring incomplete, errors occurred!
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ rm -rf ~/.hunter                    
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- [hunter] Initializing Hunter workspace (6d786d3454f01ac34ae1cc586e65a8f688a1c98f)
-- [hunter]   https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz
-- [hunter]   -> /home/kali/.hunter/_Base/Download/Hunter/0.24.165/6d786d3
CMake Error at Build/Hunter-prefix/src/Hunter-stamp/download-Hunter.cmake:163 (message):
  Each download failed!

    error: downloading 'https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz' failed
          status_code: 22
          status_string: "HTTP response code said error"
          log:
          --- LOG BEGIN ---
          Host github.com:443 was resolved.

  IPv6: (none)

  IPv4: 140.82.121.3

    Trying 140.82.121.3:443...

  ALPN: curl offers h2,http/1.1

  [5 bytes data]

  TLSv1.3 (OUT), TLS handshake, Client hello (1):

  [512 bytes data]

   CAfile: /etc/ssl/certs/ca-certificates.crt
   CApath: /etc/ssl/certs

  [5 bytes data]

  TLSv1.3 (IN), TLS handshake, Server hello (2):

  [122 bytes data]

  [5 bytes data]

  TLSv1.3 (IN), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Encrypted Extensions (8):

  [19 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Certificate (11):

  [3135 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, CERT verify (15):

  [78 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Finished (20):

  [36 bytes data]

  [5 bytes data]

  TLSv1.3 (OUT), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (OUT), TLS handshake, Finished (20):

  [36 bytes data]

  SSL connection using TLSv1.3 / TLS_AES_128_GCM_SHA256 / x25519 /
  id-ecPublicKey

  ALPN: server accepted h2

  Server certificate:

   subject: CN=github.com
   start date: Feb  5 00:00:00 2025 GMT
   expire date: Feb  5 23:59:59 2026 GMT
   subjectAltName: host "github.com" matched cert's "github.com"
   issuer: C=GB; ST=Greater Manchester; L=Salford; O=Sectigo Limited; CN=Sectigo ECC Domain Validation Secure Server CA
   SSL certificate verify ok.
    Certificate level 0: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA256
    Certificate level 1: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA384
    Certificate level 2: Public key type EC/secp384r1 (384/192 Bits/secBits), signed using ecdsa-with-SHA384

  Connected to github.com (140.82.121.3) port 443

  using HTTP/2

  [HTTP/2] [1] OPENED stream for
  https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz

  [HTTP/2] [1] [:method: GET]

  [HTTP/2] [1] [:scheme: https]

  [HTTP/2] [1] [:authority: github.com]

  [HTTP/2] [1] [:path: /cpp-pm/hunter/archive/v0.24.165.tar.gz]

  [HTTP/2] [1] [user-agent: curl/8.11.0]

  [HTTP/2] [1] [accept: */*]

  [5 bytes data]

  [1 bytes data]

  GET /cpp-pm/hunter/archive/v0.24.165.tar.gz HTTP/2

  Host: github.com

  User-Agent: curl/8.11.0

  Accept: */*

  

  Request completely sent off

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  HTTP/2 302 

  date: Wed, 11 Jun 2025 03:46:49 GMT

  content-type: text/html; charset=utf-8

  content-length: 0

  vary: X-PJAX, X-PJAX-Container, Turbo-Visit, Turbo-Frame,
  X-Requested-With,Accept-Encoding, Accept, X-Requested-With

  location: https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165

  cache-control: max-age=0, private

  strict-transport-security: max-age=31536000; includeSubdomains; preload

  x-frame-options: deny

  x-content-type-options: nosniff

  x-xss-protection: 0

  referrer-policy: no-referrer-when-downgrade

  [5 bytes data]

  [5 bytes data]

  [1 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  content-security-policy: default-src 'none'; base-uri 'self'; child-src
  github.githubassets.com github.com/assets-cdn/worker/ github.com/assets/
  gist.github.com/assets-cdn/worker/; connect-src 'self' uploads.github.com
  www.githubstatus.com collector.github.com raw.githubusercontent.com
  api.github.com github-cloud.s3.amazonaws.com
  github-production-repository-file-5c1aeb.s3.amazonaws.com
  github-production-upload-manifest-file-7fdce7.s3.amazonaws.com
  github-production-user-asset-6210df.s3.amazonaws.com
  *.rel.tunnels.api.visualstudio.com wss://*.rel.tunnels.api.visualstudio.com
  objects-origin.githubusercontent.com copilot-proxy.githubusercontent.com
  proxy.individual.githubcopilot.com proxy.business.githubcopilot.com
  proxy.enterprise.githubcopilot.com *.actions.githubusercontent.com
  wss://*.actions.githubusercontent.com
  productionresultssa0.blob.core.windows.net/
  productionresultssa1.blob.core.windows.net/
  productionresultssa2.blob.core.windows.net/
  productionresultssa3.blob.core.windows.net/
  productionresultssa4.blob.core.windows.net/
  productionresultssa5.blob.core.windows.net/
  productionresultssa6.blob.core.windows.net/
  productionresultssa7.blob.core.windows.net/
  productionresultssa8.blob.core.windows.net/
  productionresultssa9.blob.core.windows.net/
  productionresultssa10.blob.core.windows.net/
  productionresultssa11.blob.core.windows.net/
  productionresultssa12.blob.core.windows.net/
  productionresultssa13.blob.core.windows.net/
  productionresultssa14.blob.core.windows.net/
  productionresultssa15.blob.core.windows.net/
  productionresultssa16.blob.core.windows.net/
  productionresultssa17.blob.core.windows.net/
  productionresultssa18.blob.core.windows.net/
  productionresultssa19.blob.core.windows.net/
  github-production-repository-image-32fea6.s3.amazonaws.com
  github-production-release-asset-2e65be.s3.amazonaws.com insights.github.com
  wss://alive.github.com api.githubcopilot.com
  api.individual.githubcopilot.com api.business.githubcopilot.com
  api.enterprise.githubcopilot.com; font-src github.githubassets.com;
  form-action 'self' github.com gist.github.com
  copilot-workspace.githubnext.com objects-origin.githubusercontent.com;
  frame-ancestors 'none'; frame-src viewscreen.githubusercontent.com
  notebooks.githubusercontent.com; img-src 'self' data: blob:
  github.githubassets.com media.githubusercontent.com
  camo.githubusercontent.com identicons.github.com
  avatars.githubusercontent.com private-avatars.githubusercontent.com
  github-cloud.s3.amazonaws.com objects.githubusercontent.com
  release-assets.githubusercontent.com
  secured-user-images.githubusercontent.com/
  user-images.githubusercontent.com/
  private-user-images.githubusercontent.com opengraph.githubassets.com
  copilotprodattachments.blob.core.windows.net/github-production-copilot-attachments/
  github-production-user-asset-6210df.s3.amazonaws.com
  customer-stories-feed.github.com spotlights-feed.github.com
  objects-origin.githubusercontent.com *.githubusercontent.com; manifest-src
  'self'; media-src github.com user-images.githubusercontent.com/
  secured-user-images.githubusercontent.com/
  private-user-images.githubusercontent.com
  github-production-user-asset-6210df.s3.amazonaws.com gist.github.com;
  script-src github.githubassets.com; style-src 'unsafe-inline'
  github.githubassets.com; upgrade-insecure-requests; worker-src
  github.githubassets.com github.com/assets-cdn/worker/ github.com/assets/
  gist.github.com/assets-cdn/worker/

  server: github.com

  x-github-request-id: 8F32:270A2F:158476F:164FC45:6848FC29

  Ignoring the response-body

  setting size while ignoring

  

  Connection #0 to host github.com left intact

  Issue another request to this URL:
  'https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165'

  Host codeload.github.com:443 was resolved.

  IPv6: (none)

  IPv4: 140.82.121.10

    Trying 140.82.121.10:443...

  ALPN: curl offers h2,http/1.1

  [5 bytes data]

  TLSv1.3 (OUT), TLS handshake, Client hello (1):

  [512 bytes data]

   CAfile: /etc/ssl/certs/ca-certificates.crt
   CApath: /etc/ssl/certs

  [5 bytes data]

  TLSv1.3 (IN), TLS handshake, Server hello (2):

  [122 bytes data]

  [5 bytes data]

  TLSv1.3 (IN), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Encrypted Extensions (8):

  [19 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Certificate (11):

  [3134 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, CERT verify (15):

  [78 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Finished (20):

  [36 bytes data]

  [5 bytes data]

  TLSv1.3 (OUT), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (OUT), TLS handshake, Finished (20):

  [36 bytes data]

  SSL connection using TLSv1.3 / TLS_AES_128_GCM_SHA256 / x25519 /
  id-ecPublicKey

  ALPN: server accepted h2

  Server certificate:

   subject: CN=*.github.com
   start date: Feb  5 00:00:00 2025 GMT
   expire date: Feb  5 23:59:59 2026 GMT
   subjectAltName: host "codeload.github.com" matched cert's "*.github.com"
   issuer: C=GB; ST=Greater Manchester; L=Salford; O=Sectigo Limited; CN=Sectigo ECC Domain Validation Secure Server CA
   SSL certificate verify ok.
    Certificate level 0: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA256
    Certificate level 1: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA384
    Certificate level 2: Public key type EC/secp384r1 (384/192 Bits/secBits), signed using ecdsa-with-SHA384

  Connected to codeload.github.com (140.82.121.10) port 443

  using HTTP/2

  [HTTP/2] [1] OPENED stream for
  https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165

  [HTTP/2] [1] [:method: GET]

  [HTTP/2] [1] [:scheme: https]

  [HTTP/2] [1] [:authority: codeload.github.com]

  [HTTP/2] [1] [:path: /cpp-pm/hunter/tar.gz/v0.24.165]

  [HTTP/2] [1] [user-agent: curl/8.11.0]

  [HTTP/2] [1] [accept: */*]

  [5 bytes data]

  [1 bytes data]

  GET /cpp-pm/hunter/tar.gz/v0.24.165 HTTP/2

  Host: codeload.github.com

  User-Agent: curl/8.11.0

  Accept: */*

  

  Request completely sent off

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  HTTP/2 404 

  access-control-allow-origin: https://render.githubusercontent.com

  content-security-policy: default-src 'none'; style-src 'unsafe-inline';
  sandbox

  cross-origin-resource-policy: cross-origin

  strict-transport-security: max-age=31536000

  vary: Authorization,Accept-Encoding

  x-content-type-options: nosniff

  x-frame-options: deny

  x-xss-protection: 1; mode=block

  date: Wed, 11 Jun 2025 03:46:49 GMT

  content-length: 14

  content-type: text/plain; charset=utf-8

  x-github-request-id: DB50:42ECB:7D594:B77F9:6848FC29

  The requested URL returned error: 404

  

  [5 bytes data]

  [1 bytes data]

  Connection #1 to host codeload.github.com left intact



          --- LOG END ---
          
    


gmake[2]: *** [CMakeFiles/Hunter.dir/build.make:99: Hunter-prefix/src/Hunter-stamp/Hunter-download] Error 1
gmake[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/Hunter.dir/all] Error 2
gmake: *** [Makefile:91: all] Error 2

[hunter ** INTERNAL **] Build project failed
[hunter ** INTERNAL **] [Directory:/home/kali/mrglist3431/workspace/projects/lab07]

------------------------------ ERROR ------------------------------
    https://hunter.readthedocs.io/en/latest/reference/errors/error.internal.html
-------------------------------------------------------------------

CMake Error at cmake/HunterGate.cmake:88 (message):
Call Stack (most recent call first):                                                                                
  cmake/HunterGate.cmake:98 (hunter_gate_error_page)                                                                
  cmake/HunterGate.cmake:347 (hunter_gate_internal_error)                                                           
  cmake/HunterGate.cmake:511 (hunter_gate_download)                                                                 
  CMakeLists.txt:4 (HunterGate)                                                                                     
                                                                                                                    
                                                                                                                    
-- Configuring incomplete, errors occurred!
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ rm -rf ~/.hunter                    
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON --debug-trycompile
debug trycompile on
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- [hunter] Initializing Hunter workspace (6d786d3454f01ac34ae1cc586e65a8f688a1c98f)
-- [hunter]   https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz
-- [hunter]   -> /home/kali/.hunter/_Base/Download/Hunter/0.24.165/6d786d3
CMake Error at Build/Hunter-prefix/src/Hunter-stamp/download-Hunter.cmake:163 (message):
  Each download failed!

    error: downloading 'https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz' failed
          status_code: 22
          status_string: "HTTP response code said error"
          log:
          --- LOG BEGIN ---
          Host github.com:443 was resolved.

  IPv6: (none)

  IPv4: 140.82.121.4

    Trying 140.82.121.4:443...

  ALPN: curl offers h2,http/1.1

  [5 bytes data]

  TLSv1.3 (OUT), TLS handshake, Client hello (1):

  [512 bytes data]

   CAfile: /etc/ssl/certs/ca-certificates.crt
   CApath: /etc/ssl/certs

  [5 bytes data]

  TLSv1.3 (IN), TLS handshake, Server hello (2):

  [122 bytes data]

  [5 bytes data]

  TLSv1.3 (IN), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Encrypted Extensions (8):

  [19 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Certificate (11):

  [3135 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, CERT verify (15):

  [79 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Finished (20):

  [36 bytes data]

  [5 bytes data]

  TLSv1.3 (OUT), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (OUT), TLS handshake, Finished (20):

  [36 bytes data]

  SSL connection using TLSv1.3 / TLS_AES_128_GCM_SHA256 / x25519 /
  id-ecPublicKey

  ALPN: server accepted h2

  Server certificate:

   subject: CN=github.com
   start date: Feb  5 00:00:00 2025 GMT
   expire date: Feb  5 23:59:59 2026 GMT
   subjectAltName: host "github.com" matched cert's "github.com"
   issuer: C=GB; ST=Greater Manchester; L=Salford; O=Sectigo Limited; CN=Sectigo ECC Domain Validation Secure Server CA
   SSL certificate verify ok.
    Certificate level 0: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA256
    Certificate level 1: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA384
    Certificate level 2: Public key type EC/secp384r1 (384/192 Bits/secBits), signed using ecdsa-with-SHA384

  Connected to github.com (140.82.121.4) port 443

  using HTTP/2

  [HTTP/2] [1] OPENED stream for
  https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz

  [HTTP/2] [1] [:method: GET]

  [HTTP/2] [1] [:scheme: https]

  [HTTP/2] [1] [:authority: github.com]

  [HTTP/2] [1] [:path: /cpp-pm/hunter/archive/v0.24.165.tar.gz]

  [HTTP/2] [1] [user-agent: curl/8.11.0]

  [HTTP/2] [1] [accept: */*]

  [5 bytes data]

  [1 bytes data]

  GET /cpp-pm/hunter/archive/v0.24.165.tar.gz HTTP/2

  Host: github.com

  User-Agent: curl/8.11.0

  Accept: */*

  

  Request completely sent off

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  HTTP/2 302 

  date: Wed, 11 Jun 2025 03:46:49 GMT

  content-type: text/html; charset=utf-8

  content-length: 0

  vary: X-PJAX, X-PJAX-Container, Turbo-Visit, Turbo-Frame,
  X-Requested-With,Accept-Encoding, Accept, X-Requested-With

  location: https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165

  cache-control: max-age=0, private

  strict-transport-security: max-age=31536000; includeSubdomains; preload

  x-frame-options: deny

  x-content-type-options: nosniff

  x-xss-protection: 0

  referrer-policy: no-referrer-when-downgrade

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [5 bytes data]

  [1 bytes data]

  [1 bytes data]

  content-security-policy: default-src 'none'; base-uri 'self'; child-src
  github.githubassets.com github.com/assets-cdn/worker/ github.com/assets/
  gist.github.com/assets-cdn/worker/; connect-src 'self' uploads.github.com
  www.githubstatus.com collector.github.com raw.githubusercontent.com
  api.github.com github-cloud.s3.amazonaws.com
  github-production-repository-file-5c1aeb.s3.amazonaws.com
  github-production-upload-manifest-file-7fdce7.s3.amazonaws.com
  github-production-user-asset-6210df.s3.amazonaws.com
  *.rel.tunnels.api.visualstudio.com wss://*.rel.tunnels.api.visualstudio.com
  objects-origin.githubusercontent.com copilot-proxy.githubusercontent.com
  proxy.individual.githubcopilot.com proxy.business.githubcopilot.com
  proxy.enterprise.githubcopilot.com *.actions.githubusercontent.com
  wss://*.actions.githubusercontent.com
  productionresultssa0.blob.core.windows.net/
  productionresultssa1.blob.core.windows.net/
  productionresultssa2.blob.core.windows.net/
  productionresultssa3.blob.core.windows.net/
  productionresultssa4.blob.core.windows.net/
  productionresultssa5.blob.core.windows.net/
  productionresultssa6.blob.core.windows.net/
  productionresultssa7.blob.core.windows.net/
  productionresultssa8.blob.core.windows.net/
  productionresultssa9.blob.core.windows.net/
  productionresultssa10.blob.core.windows.net/
  productionresultssa11.blob.core.windows.net/
  productionresultssa12.blob.core.windows.net/
  productionresultssa13.blob.core.windows.net/
  productionresultssa14.blob.core.windows.net/
  productionresultssa15.blob.core.windows.net/
  productionresultssa16.blob.core.windows.net/
  productionresultssa17.blob.core.windows.net/
  productionresultssa18.blob.core.windows.net/
  productionresultssa19.blob.core.windows.net/
  github-production-repository-image-32fea6.s3.amazonaws.com
  github-production-release-asset-2e65be.s3.amazonaws.com insights.github.com
  wss://alive.github.com api.githubcopilot.com
  api.individual.githubcopilot.com api.business.githubcopilot.com
  api.enterprise.githubcopilot.com; font-src github.githubassets.com;
  form-action 'self' github.com gist.github.com
  copilot-workspace.githubnext.com objects-origin.githubusercontent.com;
  frame-ancestors 'none'; frame-src viewscreen.githubusercontent.com
  notebooks.githubusercontent.com; img-src 'self' data: blob:
  github.githubassets.com media.githubusercontent.com
  camo.githubusercontent.com identicons.github.com
  avatars.githubusercontent.com private-avatars.githubusercontent.com
  github-cloud.s3.amazonaws.com objects.githubusercontent.com
  release-assets.githubusercontent.com
  secured-user-images.githubusercontent.com/
  user-images.githubusercontent.com/
  private-user-images.githubusercontent.com opengraph.githubassets.com
  copilotprodattachments.blob.core.windows.net/github-production-copilot-attachments/
  github-production-user-asset-6210df.s3.amazonaws.com
  customer-stories-feed.github.com spotlights-feed.github.com
  objects-origin.githubusercontent.com *.githubusercontent.com; manifest-src
  'self'; media-src github.com user-images.githubusercontent.com/
  secured-user-images.githubusercontent.com/
  private-user-images.githubusercontent.com
  github-production-user-asset-6210df.s3.amazonaws.com gist.github.com;
  script-src github.githubassets.com; style-src 'unsafe-inline'
  github.githubassets.com; upgrade-insecure-requests; worker-src
  github.githubassets.com github.com/assets-cdn/worker/ github.com/assets/
  gist.github.com/assets-cdn/worker/

  server: github.com

  x-github-request-id: C8BC:270A2F:159BD3D:16681E8:6848FC9D

  Ignoring the response-body

  setting size while ignoring

  

  Connection #0 to host github.com left intact

  Issue another request to this URL:
  'https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165'

  Host codeload.github.com:443 was resolved.

  IPv6: (none)

  IPv4: 140.82.121.9

    Trying 140.82.121.9:443...

  ALPN: curl offers h2,http/1.1

  [5 bytes data]

  TLSv1.3 (OUT), TLS handshake, Client hello (1):

  [512 bytes data]

   CAfile: /etc/ssl/certs/ca-certificates.crt
   CApath: /etc/ssl/certs

  [5 bytes data]

  TLSv1.3 (IN), TLS handshake, Server hello (2):

  [122 bytes data]

  [5 bytes data]

  TLSv1.3 (IN), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Encrypted Extensions (8):

  [19 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Certificate (11):

  [3134 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, CERT verify (15):

  [80 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Finished (20):

  [36 bytes data]

  [5 bytes data]

  TLSv1.3 (OUT), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (OUT), TLS handshake, Finished (20):

  [36 bytes data]

  SSL connection using TLSv1.3 / TLS_AES_128_GCM_SHA256 / x25519 /
  id-ecPublicKey

  ALPN: server accepted h2

  Server certificate:

   subject: CN=*.github.com
   start date: Feb  5 00:00:00 2025 GMT
   expire date: Feb  5 23:59:59 2026 GMT
   subjectAltName: host "codeload.github.com" matched cert's "*.github.com"
   issuer: C=GB; ST=Greater Manchester; L=Salford; O=Sectigo Limited; CN=Sectigo ECC Domain Validation Secure Server CA
   SSL certificate verify ok.
    Certificate level 0: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA256
    Certificate level 1: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA384
    Certificate level 2: Public key type EC/secp384r1 (384/192 Bits/secBits), signed using ecdsa-with-SHA384

  Connected to codeload.github.com (140.82.121.9) port 443

  using HTTP/2

  [HTTP/2] [1] OPENED stream for
  https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165

  [HTTP/2] [1] [:method: GET]

  [HTTP/2] [1] [:scheme: https]

  [HTTP/2] [1] [:authority: codeload.github.com]

  [HTTP/2] [1] [:path: /cpp-pm/hunter/tar.gz/v0.24.165]

  [HTTP/2] [1] [user-agent: curl/8.11.0]

  [HTTP/2] [1] [accept: */*]

  [5 bytes data]

  [1 bytes data]

  GET /cpp-pm/hunter/tar.gz/v0.24.165 HTTP/2

  Host: codeload.github.com

  User-Agent: curl/8.11.0

  Accept: */*

  

  Request completely sent off

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  HTTP/2 404 

  access-control-allow-origin: https://render.githubusercontent.com

  content-security-policy: default-src 'none'; style-src 'unsafe-inline';
  sandbox

  cross-origin-resource-policy: cross-origin

  strict-transport-security: max-age=31536000

  vary: Authorization,Accept-Encoding

  x-content-type-options: nosniff

  x-frame-options: deny

  x-xss-protection: 1; mode=block

  date: Wed, 11 Jun 2025 03:48:45 GMT

  content-length: 14

  content-type: text/plain; charset=utf-8

  x-github-request-id: 92A0:1961F1:88C89:C3358:6848FC9D

  The requested URL returned error: 404

  

  [5 bytes data]

  [1 bytes data]

  Connection #1 to host codeload.github.com left intact



          --- LOG END ---
          
    


gmake[2]: *** [CMakeFiles/Hunter.dir/build.make:99: Hunter-prefix/src/Hunter-stamp/Hunter-download] Error 1
gmake[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/Hunter.dir/all] Error 2
gmake: *** [Makefile:91: all] Error 2

[hunter ** INTERNAL **] Build project failed
[hunter ** INTERNAL **] [Directory:/home/kali/mrglist3431/workspace/projects/lab07]

------------------------------ ERROR ------------------------------
    https://hunter.readthedocs.io/en/latest/reference/errors/error.internal.html
-------------------------------------------------------------------

CMake Error at cmake/HunterGate.cmake:88 (message):
Call Stack (most recent call first):                                                                                
  cmake/HunterGate.cmake:98 (hunter_gate_error_page)                                                                
  cmake/HunterGate.cmake:347 (hunter_gate_internal_error)                                                           
  cmake/HunterGate.cmake:511 (hunter_gate_download)                                                                 
  CMakeLists.txt:4 (HunterGate)                                                                                     
                                                                                                                    
                                                                                                                    
-- Configuring incomplete, errors occurred!
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ git clone https://github.com/google/googletest lab07/gtest          
Cloning into 'lab07/gtest'...
remote: Enumerating objects: 28151, done.
remote: Counting objects: 100% (22/22), done.
remote: Compressing objects: 100% (18/18), done.
remote: Total 28151 (delta 3), reused 7 (delta 2), pack-reused 28129 (from 1)
Receiving objects: 100% (28151/28151), 13.18 MiB | 603.00 KiB/s, done.
Resolving deltas: 100% (20915/20915), done.
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ rm -rf ~/.hunter                                          
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON --debug-trycompile   
debug trycompile on
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- [hunter] Initializing Hunter workspace (6d786d3454f01ac34ae1cc586e65a8f688a1c98f)
-- [hunter]   https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz
-- [hunter]   -> /home/kali/.hunter/_Base/Download/Hunter/0.24.165/6d786d3
CMake Error at Build/Hunter-prefix/src/Hunter-stamp/download-Hunter.cmake:163 (message):
  Each download failed!

    error: downloading 'https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz' failed
          status_code: 22
          status_string: "HTTP response code said error"
          log:
          --- LOG BEGIN ---
          Host github.com:443 was resolved.

  IPv6: (none)

  IPv4: 140.82.121.4

    Trying 140.82.121.4:443...

  ALPN: curl offers h2,http/1.1

  [5 bytes data]

  TLSv1.3 (OUT), TLS handshake, Client hello (1):

  [512 bytes data]

   CAfile: /etc/ssl/certs/ca-certificates.crt
   CApath: /etc/ssl/certs

  [5 bytes data]

  TLSv1.3 (IN), TLS handshake, Server hello (2):

  [122 bytes data]

  [5 bytes data]

  TLSv1.3 (IN), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Encrypted Extensions (8):

  [19 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Certificate (11):

  [3135 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, CERT verify (15):

  [79 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Finished (20):

  [36 bytes data]

  [5 bytes data]

  TLSv1.3 (OUT), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (OUT), TLS handshake, Finished (20):

  [36 bytes data]

  SSL connection using TLSv1.3 / TLS_AES_128_GCM_SHA256 / x25519 /
  id-ecPublicKey

  ALPN: server accepted h2

  Server certificate:

   subject: CN=github.com
   start date: Feb  5 00:00:00 2025 GMT
   expire date: Feb  5 23:59:59 2026 GMT
   subjectAltName: host "github.com" matched cert's "github.com"
   issuer: C=GB; ST=Greater Manchester; L=Salford; O=Sectigo Limited; CN=Sectigo ECC Domain Validation Secure Server CA
   SSL certificate verify ok.
    Certificate level 0: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA256
    Certificate level 1: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA384
    Certificate level 2: Public key type EC/secp384r1 (384/192 Bits/secBits), signed using ecdsa-with-SHA384

  Connected to github.com (140.82.121.4) port 443

  using HTTP/2

  [HTTP/2] [1] OPENED stream for
  https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz

  [HTTP/2] [1] [:method: GET]

  [HTTP/2] [1] [:scheme: https]

  [HTTP/2] [1] [:authority: github.com]

  [HTTP/2] [1] [:path: /cpp-pm/hunter/archive/v0.24.165.tar.gz]

  [HTTP/2] [1] [user-agent: curl/8.11.0]

  [HTTP/2] [1] [accept: */*]

  [5 bytes data]

  [1 bytes data]

  GET /cpp-pm/hunter/archive/v0.24.165.tar.gz HTTP/2

  Host: github.com

  User-Agent: curl/8.11.0

  Accept: */*

  

  Request completely sent off

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  HTTP/2 302 

  date: Wed, 11 Jun 2025 03:51:21 GMT

  content-type: text/html; charset=utf-8

  content-length: 0

  vary: X-PJAX, X-PJAX-Container, Turbo-Visit, Turbo-Frame,
  X-Requested-With,Accept-Encoding, Accept, X-Requested-With

  location: https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165

  cache-control: max-age=0, private

  strict-transport-security: max-age=31536000; includeSubdomains; preload

  x-frame-options: deny

  x-content-type-options: nosniff

  x-xss-protection: 0

  referrer-policy: no-referrer-when-downgrade

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  content-security-policy: default-src 'none'; base-uri 'self'; child-src
  github.githubassets.com github.com/assets-cdn/worker/ github.com/assets/
  gist.github.com/assets-cdn/worker/; connect-src 'self' uploads.github.com
  www.githubstatus.com collector.github.com raw.githubusercontent.com
  api.github.com github-cloud.s3.amazonaws.com
  github-production-repository-file-5c1aeb.s3.amazonaws.com
  github-production-upload-manifest-file-7fdce7.s3.amazonaws.com
  github-production-user-asset-6210df.s3.amazonaws.com
  *.rel.tunnels.api.visualstudio.com wss://*.rel.tunnels.api.visualstudio.com
  objects-origin.githubusercontent.com copilot-proxy.githubusercontent.com
  proxy.individual.githubcopilot.com proxy.business.githubcopilot.com
  proxy.enterprise.githubcopilot.com *.actions.githubusercontent.com
  wss://*.actions.githubusercontent.com
  productionresultssa0.blob.core.windows.net/
  productionresultssa1.blob.core.windows.net/
  productionresultssa2.blob.core.windows.net/
  productionresultssa3.blob.core.windows.net/
  productionresultssa4.blob.core.windows.net/
  productionresultssa5.blob.core.windows.net/
  productionresultssa6.blob.core.windows.net/
  productionresultssa7.blob.core.windows.net/
  productionresultssa8.blob.core.windows.net/
  productionresultssa9.blob.core.windows.net/
  productionresultssa10.blob.core.windows.net/
  productionresultssa11.blob.core.windows.net/
  productionresultssa12.blob.core.windows.net/
  productionresultssa13.blob.core.windows.net/
  productionresultssa14.blob.core.windows.net/
  productionresultssa15.blob.core.windows.net/
  productionresultssa16.blob.core.windows.net/
  productionresultssa17.blob.core.windows.net/
  productionresultssa18.blob.core.windows.net/
  productionresultssa19.blob.core.windows.net/
  github-production-repository-image-32fea6.s3.amazonaws.com
  github-production-release-asset-2e65be.s3.amazonaws.com insights.github.com
  wss://alive.github.com api.githubcopilot.com
  api.individual.githubcopilot.com api.business.githubcopilot.com
  api.enterprise.githubcopilot.com; font-src github.githubassets.com;
  form-action 'self' github.com gist.github.com
  copilot-workspace.githubnext.com objects-origin.githubusercontent.com;
  frame-ancestors 'none'; frame-src viewscreen.githubusercontent.com
  notebooks.githubusercontent.com; img-src 'self' data: blob:
  github.githubassets.com media.githubusercontent.com
  camo.githubusercontent.com identicons.github.com
  avatars.githubusercontent.com private-avatars.githubusercontent.com
  github-cloud.s3.amazonaws.com objects.githubusercontent.com
  release-assets.githubusercontent.com
  secured-user-images.githubusercontent.com/
  user-images.githubusercontent.com/
  private-user-images.githubusercontent.com opengraph.githubassets.com
  copilotprodattachments.blob.core.windows.net/github-production-copilot-attachments/
  github-production-user-asset-6210df.s3.amazonaws.com
  customer-stories-feed.github.com spotlights-feed.github.com
  objects-origin.githubusercontent.com *.githubusercontent.com; manifest-src
  'self'; media-src github.com user-images.githubusercontent.com/
  secured-user-images.githubusercontent.com/
  private-user-images.githubusercontent.com
  github-production-user-asset-6210df.s3.amazonaws.com gist.github.com;
  script-src github.githubassets.com; style-src 'unsafe-inline'
  github.githubassets.com; upgrade-insecure-requests; worker-src
  github.githubassets.com github.com/assets-cdn/worker/ github.com/assets/
  gist.github.com/assets-cdn/worker/

  server: github.com

  x-github-request-id: B32C:278332:1639AF2:170742C:6848FD38

  Ignoring the response-body

  setting size while ignoring

  

  [5 bytes data]

  [1 bytes data]

  Connection #0 to host github.com left intact

  Issue another request to this URL:
  'https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165'

  Host codeload.github.com:443 was resolved.

  IPv6: (none)

  IPv4: 140.82.121.9

    Trying 140.82.121.9:443...

  ALPN: curl offers h2,http/1.1

  [5 bytes data]

  TLSv1.3 (OUT), TLS handshake, Client hello (1):

  [512 bytes data]

   CAfile: /etc/ssl/certs/ca-certificates.crt
   CApath: /etc/ssl/certs

  [5 bytes data]

  TLSv1.3 (IN), TLS handshake, Server hello (2):

  [122 bytes data]

  [5 bytes data]

  TLSv1.3 (IN), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Encrypted Extensions (8):

  [19 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Certificate (11):

  [3134 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, CERT verify (15):

  [79 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Finished (20):

  [36 bytes data]

  [5 bytes data]

  TLSv1.3 (OUT), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (OUT), TLS handshake, Finished (20):

  [36 bytes data]

  SSL connection using TLSv1.3 / TLS_AES_128_GCM_SHA256 / x25519 /
  id-ecPublicKey

  ALPN: server accepted h2

  Server certificate:

   subject: CN=*.github.com
   start date: Feb  5 00:00:00 2025 GMT
   expire date: Feb  5 23:59:59 2026 GMT
   subjectAltName: host "codeload.github.com" matched cert's "*.github.com"
   issuer: C=GB; ST=Greater Manchester; L=Salford; O=Sectigo Limited; CN=Sectigo ECC Domain Validation Secure Server CA
   SSL certificate verify ok.
    Certificate level 0: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA256
    Certificate level 1: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA384
    Certificate level 2: Public key type EC/secp384r1 (384/192 Bits/secBits), signed using ecdsa-with-SHA384

  Connected to codeload.github.com (140.82.121.9) port 443

  using HTTP/2

  [HTTP/2] [1] OPENED stream for
  https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165

  [HTTP/2] [1] [:method: GET]

  [HTTP/2] [1] [:scheme: https]

  [HTTP/2] [1] [:authority: codeload.github.com]

  [HTTP/2] [1] [:path: /cpp-pm/hunter/tar.gz/v0.24.165]

  [HTTP/2] [1] [user-agent: curl/8.11.0]

  [HTTP/2] [1] [accept: */*]

  [5 bytes data]

  [1 bytes data]

  GET /cpp-pm/hunter/tar.gz/v0.24.165 HTTP/2

  Host: codeload.github.com

  User-Agent: curl/8.11.0

  Accept: */*

  

  Request completely sent off

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  HTTP/2 404 

  access-control-allow-origin: https://render.githubusercontent.com

  content-security-policy: default-src 'none'; style-src 'unsafe-inline';
  sandbox

  cross-origin-resource-policy: cross-origin

  strict-transport-security: max-age=31536000

  vary: Authorization,Accept-Encoding

  x-content-type-options: nosniff

  x-frame-options: deny

  x-xss-protection: 1; mode=block

  date: Wed, 11 Jun 2025 03:51:21 GMT

  content-length: 14

  content-type: text/plain; charset=utf-8

  x-github-request-id: B742:3D3488:9405B:CED39:6848FD39

  The requested URL returned error: 404

  

  [5 bytes data]

  [1 bytes data]

  Connection #1 to host codeload.github.com left intact



          --- LOG END ---
          
    


gmake[2]: *** [CMakeFiles/Hunter.dir/build.make:99: Hunter-prefix/src/Hunter-stamp/Hunter-download] Error 1
gmake[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/Hunter.dir/all] Error 2
gmake: *** [Makefile:91: all] Error 2

[hunter ** INTERNAL **] Build project failed
[hunter ** INTERNAL **] [Directory:/home/kali/mrglist3431/workspace/projects/lab07]

------------------------------ ERROR ------------------------------
    https://hunter.readthedocs.io/en/latest/reference/errors/error.internal.html
-------------------------------------------------------------------

CMake Error at cmake/HunterGate.cmake:88 (message):
Call Stack (most recent call first):                                                                                
  cmake/HunterGate.cmake:98 (hunter_gate_error_page)                                                                
  cmake/HunterGate.cmake:347 (hunter_gate_internal_error)                                                           
  cmake/HunterGate.cmake:511 (hunter_gate_download)                                                                 
  CMakeLists.txt:4 (HunterGate)                                                                                     
                                                                                                                    
                                                                                                                    
-- Configuring incomplete, errors occurred!
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ ..
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rm -rf lab07    
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ..
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git clone https://github.com/${GITHUB_USERNAME}/lab06 projects/lab07
Cloning into 'projects/lab07'...
remote: Enumerating objects: 259, done.
remote: Counting objects: 100% (259/259), done.
remote: Compressing objects: 100% (123/123), done.
remote: Total 259 (delta 112), reused 255 (delta 110), pack-reused 0 (from 0)
Receiving objects: 100% (259/259), 122.95 KiB | 1.11 MiB/s, done.
Resolving deltas: 100% (112/112), done.
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ ^[[200~git remote remove origin~
zsh: bad pattern: ^[[200~git
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git remote remove origin
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab07

                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ mkdir -p cmake
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ wget https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake -O cmake/HunterGate.cmake
--2025-06-11 06:55:25--  https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake
Resolving raw.githubusercontent.com (raw.githubusercontent.com)... 185.199.108.133, 185.199.111.133, 185.199.109.133, ...
Connecting to raw.githubusercontent.com (raw.githubusercontent.com)|185.199.108.133|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 17231 (17K) [text/plain]
Saving to: ‘cmake/HunterGate.cmake’

cmake/HunterGate.cmake       100%[==============================================>]  16.83K  --.-KB/s    in 0.1s    

2025-06-11 06:55:26 (162 KB/s) - ‘cmake/HunterGate.cmake’ saved [17231/17231]

                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ gsed -i '/cmake_minimum_required(VERSION 3.4)/a\
include("cmake/HunterGate.cmake")\
HunterGate(\
    URL "https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz"\
    SHA1 "6d786d3454f01ac34ae1cc586e65a8f688a1c98f"\
)' CMakeLists.txt

sed: can't read CMakeLists.txt: No such file or directory
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ gsed -i '/cmake_minimum_required(VERSION 3.4)/a\
include("cmake/HunterGate.cmake")\
HunterGate(\
    URL "https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz"\
    SHA1 "6d786d3454f01ac34ae1cc586e65a8f688a1c98f"\
)' CMakeLists.txt

sed: can't read CMakeLists.txt: No such file or directory
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ projects
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ lab07
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ git remote remove origin
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab07
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ mkdir -p cmake
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ wget https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake -O cmake/HunterGate.cmake
--2025-06-11 06:57:28--  https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake
Resolving raw.githubusercontent.com (raw.githubusercontent.com)... 185.199.110.133, 185.199.109.133, 185.199.108.133, ...
Connecting to raw.githubusercontent.com (raw.githubusercontent.com)|185.199.110.133|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 17231 (17K) [text/plain]
Saving to: ‘cmake/HunterGate.cmake’

cmake/HunterGate.cmake       100%[==============================================>]  16.83K  --.-KB/s    in 0.05s   

2025-06-11 06:57:29 (339 KB/s) - ‘cmake/HunterGate.cmake’ saved [17231/17231]

                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i '/cmake_minimum_required(VERSION 3.4)/a\
include("cmake/HunterGate.cmake")\
HunterGate(\
    URL "https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz"\
    SHA1 "6d786d3454f01ac34ae1cc586e65a8f688a1c98f"\
)' CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ git rm -rf third-party/gtest
rm 'third-party/gtest'
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i '/set(PRINT_VERSION_STRING "v\${PRINT_VERSION}")/a\
hunter_add_package(GTest)\
find_package(GTest CONFIG REQUIRED)\
' CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i 's/add_subdirectory(third-party/gtest)//' CMakeLists.txt
sed: -e expression #1, char 39: unknown option to `s'
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i 's/add_subdirectory(third-party/gtest)/' CMakeLists.txt 
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i 's/gtest_main/GTest::main/' CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON                   
CMake Error at CMakeLists.txt:34:
  Parse error.  Expected "(", got right paren with text ")".                                                        
                                                                                                                    
                                                                                                                    
-- Configuring incomplete, errors occurred!
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt                 
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- [hunter] Initializing Hunter workspace (6d786d3454f01ac34ae1cc586e65a8f688a1c98f)
-- [hunter]   https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz
-- [hunter]   -> /home/kali/.hunter/_Base/Download/Hunter/0.24.165/6d786d3
CMake Error at Build/Hunter-prefix/src/Hunter-stamp/download-Hunter.cmake:163 (message):
  Each download failed!

    error: downloading 'https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz' failed
          status_code: 22
          status_string: "HTTP response code said error"
          log:
          --- LOG BEGIN ---
          Host github.com:443 was resolved.

  IPv6: (none)

  IPv4: 140.82.121.4

    Trying 140.82.121.4:443...

  ALPN: curl offers h2,http/1.1

  [5 bytes data]

  TLSv1.3 (OUT), TLS handshake, Client hello (1):

  [512 bytes data]

   CAfile: /etc/ssl/certs/ca-certificates.crt
   CApath: /etc/ssl/certs

  [5 bytes data]

  TLSv1.3 (IN), TLS handshake, Server hello (2):

  [122 bytes data]

  [5 bytes data]

  TLSv1.3 (IN), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Encrypted Extensions (8):

  [19 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Certificate (11):

  [3135 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, CERT verify (15):

  [80 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Finished (20):

  [36 bytes data]

  [5 bytes data]

  TLSv1.3 (OUT), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (OUT), TLS handshake, Finished (20):

  [36 bytes data]

  SSL connection using TLSv1.3 / TLS_AES_128_GCM_SHA256 / x25519 /
  id-ecPublicKey

  ALPN: server accepted h2

  Server certificate:

   subject: CN=github.com
   start date: Feb  5 00:00:00 2025 GMT
   expire date: Feb  5 23:59:59 2026 GMT
   subjectAltName: host "github.com" matched cert's "github.com"
   issuer: C=GB; ST=Greater Manchester; L=Salford; O=Sectigo Limited; CN=Sectigo ECC Domain Validation Secure Server CA
   SSL certificate verify ok.
    Certificate level 0: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA256
    Certificate level 1: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA384
    Certificate level 2: Public key type EC/secp384r1 (384/192 Bits/secBits), signed using ecdsa-with-SHA384

  Connected to github.com (140.82.121.4) port 443

  using HTTP/2

  [HTTP/2] [1] OPENED stream for
  https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz

  [HTTP/2] [1] [:method: GET]

  [HTTP/2] [1] [:scheme: https]

  [HTTP/2] [1] [:authority: github.com]

  [HTTP/2] [1] [:path: /cpp-pm/hunter/archive/v0.24.165.tar.gz]

  [HTTP/2] [1] [user-agent: curl/8.11.0]

  [HTTP/2] [1] [accept: */*]

  [5 bytes data]

  [1 bytes data]

  GET /cpp-pm/hunter/archive/v0.24.165.tar.gz HTTP/2

  Host: github.com

  User-Agent: curl/8.11.0

  Accept: */*

  

  Request completely sent off

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  HTTP/2 302 

  date: Wed, 11 Jun 2025 04:00:26 GMT

  content-type: text/html; charset=utf-8

  content-length: 0

  vary: X-PJAX, X-PJAX-Container, Turbo-Visit, Turbo-Frame,
  X-Requested-With,Accept-Encoding, Accept, X-Requested-With

  location: https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165

  cache-control: max-age=0, private

  strict-transport-security: max-age=31536000; includeSubdomains; preload

  x-frame-options: deny

  x-content-type-options: nosniff

  x-xss-protection: 0

  referrer-policy: no-referrer-when-downgrade

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  content-security-policy: default-src 'none'; base-uri 'self'; child-src
  github.githubassets.com github.com/assets-cdn/worker/ github.com/assets/
  gist.github.com/assets-cdn/worker/; connect-src 'self' uploads.github.com
  www.githubstatus.com collector.github.com raw.githubusercontent.com
  api.github.com github-cloud.s3.amazonaws.com
  github-production-repository-file-5c1aeb.s3.amazonaws.com
  github-production-upload-manifest-file-7fdce7.s3.amazonaws.com
  github-production-user-asset-6210df.s3.amazonaws.com
  *.rel.tunnels.api.visualstudio.com wss://*.rel.tunnels.api.visualstudio.com
  objects-origin.githubusercontent.com copilot-proxy.githubusercontent.com
  proxy.individual.githubcopilot.com proxy.business.githubcopilot.com
  proxy.enterprise.githubcopilot.com *.actions.githubusercontent.com
  wss://*.actions.githubusercontent.com
  productionresultssa0.blob.core.windows.net/
  productionresultssa1.blob.core.windows.net/
  productionresultssa2.blob.core.windows.net/
  productionresultssa3.blob.core.windows.net/
  productionresultssa4.blob.core.windows.net/
  productionresultssa5.blob.core.windows.net/
  productionresultssa6.blob.core.windows.net/
  productionresultssa7.blob.core.windows.net/
  productionresultssa8.blob.core.windows.net/
  productionresultssa9.blob.core.windows.net/
  productionresultssa10.blob.core.windows.net/
  productionresultssa11.blob.core.windows.net/
  productionresultssa12.blob.core.windows.net/
  productionresultssa13.blob.core.windows.net/
  productionresultssa14.blob.core.windows.net/
  productionresultssa15.blob.core.windows.net/
  productionresultssa16.blob.core.windows.net/
  productionresultssa17.blob.core.windows.net/
  productionresultssa18.blob.core.windows.net/
  productionresultssa19.blob.core.windows.net/
  github-production-repository-image-32fea6.s3.amazonaws.com
  github-production-release-asset-2e65be.s3.amazonaws.com insights.github.com
  wss://alive.github.com api.githubcopilot.com
  api.individual.githubcopilot.com api.business.githubcopilot.com
  api.enterprise.githubcopilot.com; font-src github.githubassets.com;
  form-action 'self' github.com gist.github.com
  copilot-workspace.githubnext.com objects-origin.githubusercontent.com;
  frame-ancestors 'none'; frame-src viewscreen.githubusercontent.com
  notebooks.githubusercontent.com; img-src 'self' data: blob:
  github.githubassets.com media.githubusercontent.com
  camo.githubusercontent.com identicons.github.com
  avatars.githubusercontent.com private-avatars.githubusercontent.com
  github-cloud.s3.amazonaws.com objects.githubusercontent.com
  release-assets.githubusercontent.com
  secured-user-images.githubusercontent.com/
  user-images.githubusercontent.com/
  private-user-images.githubusercontent.com opengraph.githubassets.com
  copilotprodattachments.blob.core.windows.net/github-production-copilot-attachments/
  github-production-user-asset-6210df.s3.amazonaws.com
  customer-stories-feed.github.com spotlights-feed.github.com
  objects-origin.githubusercontent.com *.githubusercontent.com; manifest-src
  'self'; media-src github.com user-images.githubusercontent.com/
  secured-user-images.githubusercontent.com/
  private-user-images.githubusercontent.com
  github-production-user-asset-6210df.s3.amazonaws.com gist.github.com;
  script-src github.githubassets.com; style-src 'unsafe-inline'
  github.githubassets.com; upgrade-insecure-requests; worker-src
  github.githubassets.com github.com/assets-cdn/worker/ github.com/assets/
  gist.github.com/assets-cdn/worker/

  server: github.com

  x-github-request-id: CFE8:42F92:1649AFA:171BE36:6848FF5A

  Ignoring the response-body

  setting size while ignoring

  

  [5 bytes data]

  [1 bytes data]

  Connection #0 to host github.com left intact

  Issue another request to this URL:
  'https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165'

  Host codeload.github.com:443 was resolved.

  IPv6: (none)

  IPv4: 140.82.121.10

    Trying 140.82.121.10:443...

  ALPN: curl offers h2,http/1.1

  [5 bytes data]

  TLSv1.3 (OUT), TLS handshake, Client hello (1):

  [512 bytes data]

   CAfile: /etc/ssl/certs/ca-certificates.crt
   CApath: /etc/ssl/certs

  [5 bytes data]

  TLSv1.3 (IN), TLS handshake, Server hello (2):

  [122 bytes data]

  [5 bytes data]

  TLSv1.3 (IN), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Encrypted Extensions (8):

  [19 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Certificate (11):

  [3134 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, CERT verify (15):

  [78 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Finished (20):

  [36 bytes data]

  [5 bytes data]

  TLSv1.3 (OUT), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (OUT), TLS handshake, Finished (20):

  [36 bytes data]

  SSL connection using TLSv1.3 / TLS_AES_128_GCM_SHA256 / x25519 /
  id-ecPublicKey

  ALPN: server accepted h2

  Server certificate:

   subject: CN=*.github.com
   start date: Feb  5 00:00:00 2025 GMT
   expire date: Feb  5 23:59:59 2026 GMT
   subjectAltName: host "codeload.github.com" matched cert's "*.github.com"
   issuer: C=GB; ST=Greater Manchester; L=Salford; O=Sectigo Limited; CN=Sectigo ECC Domain Validation Secure Server CA
   SSL certificate verify ok.
    Certificate level 0: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA256
    Certificate level 1: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA384
    Certificate level 2: Public key type EC/secp384r1 (384/192 Bits/secBits), signed using ecdsa-with-SHA384

  Connected to codeload.github.com (140.82.121.10) port 443

  using HTTP/2

  [HTTP/2] [1] OPENED stream for
  https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165

  [HTTP/2] [1] [:method: GET]

  [HTTP/2] [1] [:scheme: https]

  [HTTP/2] [1] [:authority: codeload.github.com]

  [HTTP/2] [1] [:path: /cpp-pm/hunter/tar.gz/v0.24.165]

  [HTTP/2] [1] [user-agent: curl/8.11.0]

  [HTTP/2] [1] [accept: */*]

  [5 bytes data]

  [1 bytes data]

  GET /cpp-pm/hunter/tar.gz/v0.24.165 HTTP/2

  Host: codeload.github.com

  User-Agent: curl/8.11.0

  Accept: */*

  

  Request completely sent off

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  HTTP/2 404 

  access-control-allow-origin: https://render.githubusercontent.com

  content-security-policy: default-src 'none'; style-src 'unsafe-inline';
  sandbox

  cross-origin-resource-policy: cross-origin

  strict-transport-security: max-age=31536000

  vary: Authorization,Accept-Encoding

  x-content-type-options: nosniff

  x-frame-options: deny

  x-xss-protection: 1; mode=block

  date: Wed, 11 Jun 2025 04:00:27 GMT

  content-length: 14

  content-type: text/plain; charset=utf-8

  x-github-request-id: 8258:25366A:8F4C2:CB689:6848FF5B

  The requested URL returned error: 404

  

  [5 bytes data]

  [1 bytes data]

  Connection #1 to host codeload.github.com left intact



          --- LOG END ---
          
    


gmake[2]: *** [CMakeFiles/Hunter.dir/build.make:99: Hunter-prefix/src/Hunter-stamp/Hunter-download] Error 1
gmake[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/Hunter.dir/all] Error 2
gmake: *** [Makefile:91: all] Error 2

[hunter ** INTERNAL **] Build project failed
[hunter ** INTERNAL **] [Directory:/home/kali/mrglist3431/workspace/projects/lab07]

------------------------------ ERROR ------------------------------
    https://hunter.readthedocs.io/en/latest/reference/errors/error.internal.html
-------------------------------------------------------------------

CMake Error at cmake/HunterGate.cmake:88 (message):
Call Stack (most recent call first):                                                                                
  cmake/HunterGate.cmake:98 (hunter_gate_error_page)                                                                
  cmake/HunterGate.cmake:347 (hunter_gate_internal_error)                                                           
  cmake/HunterGate.cmake:511 (hunter_gate_download)                                                                 
  CMakeLists.txt:4 (HunterGate)                                                                                     
                                                                                                                    
                                                                                                                    
-- Configuring incomplete, errors occurred!
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ gsed -i 's|URL "https://github.com/cpp-pm/hunter/archive/v0.24.165.tar.gz"|URL "https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165"|g' CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- [hunter] Initializing Hunter workspace (6d786d3454f01ac34ae1cc586e65a8f688a1c98f)
-- [hunter]   https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165
-- [hunter]   -> /home/kali/.hunter/_Base/Download/Hunter/0.24.165/6d786d3
CMake Error at Build/Hunter-prefix/src/Hunter-stamp/download-Hunter.cmake:163 (message):
  Each download failed!

    error: downloading 'https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165' failed
          status_code: 22
          status_string: "HTTP response code said error"
          log:
          --- LOG BEGIN ---
          Host codeload.github.com:443 was resolved.

  IPv6: (none)

  IPv4: 140.82.121.9

    Trying 140.82.121.9:443...

  ALPN: curl offers h2,http/1.1

  [5 bytes data]

  TLSv1.3 (OUT), TLS handshake, Client hello (1):

  [512 bytes data]

   CAfile: /etc/ssl/certs/ca-certificates.crt
   CApath: /etc/ssl/certs

  [5 bytes data]

  TLSv1.3 (IN), TLS handshake, Server hello (2):

  [122 bytes data]

  [5 bytes data]

  TLSv1.3 (IN), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Encrypted Extensions (8):

  [19 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Certificate (11):

  [3134 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, CERT verify (15):

  [80 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Finished (20):

  [36 bytes data]

  [5 bytes data]

  TLSv1.3 (OUT), TLS change cipher, Change cipher spec (1):

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (OUT), TLS handshake, Finished (20):

  [36 bytes data]

  SSL connection using TLSv1.3 / TLS_AES_128_GCM_SHA256 / x25519 /
  id-ecPublicKey

  ALPN: server accepted h2

  Server certificate:

   subject: CN=*.github.com
   start date: Feb  5 00:00:00 2025 GMT
   expire date: Feb  5 23:59:59 2026 GMT
   subjectAltName: host "codeload.github.com" matched cert's "*.github.com"
   issuer: C=GB; ST=Greater Manchester; L=Salford; O=Sectigo Limited; CN=Sectigo ECC Domain Validation Secure Server CA
   SSL certificate verify ok.
    Certificate level 0: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA256
    Certificate level 1: Public key type EC/prime256v1 (256/128 Bits/secBits), signed using ecdsa-with-SHA384
    Certificate level 2: Public key type EC/secp384r1 (384/192 Bits/secBits), signed using ecdsa-with-SHA384

  Connected to codeload.github.com (140.82.121.9) port 443

  using HTTP/2

  [HTTP/2] [1] OPENED stream for
  https://codeload.github.com/cpp-pm/hunter/tar.gz/v0.24.165

  [HTTP/2] [1] [:method: GET]

  [HTTP/2] [1] [:scheme: https]

  [HTTP/2] [1] [:authority: codeload.github.com]

  [HTTP/2] [1] [:path: /cpp-pm/hunter/tar.gz/v0.24.165]

  [HTTP/2] [1] [user-agent: curl/8.11.0]

  [HTTP/2] [1] [accept: */*]

  [5 bytes data]

  [1 bytes data]

  GET /cpp-pm/hunter/tar.gz/v0.24.165 HTTP/2

  Host: codeload.github.com

  User-Agent: curl/8.11.0

  Accept: */*

  

  Request completely sent off

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  TLSv1.3 (IN), TLS handshake, Newsession Ticket (4):

  [57 bytes data]

  [5 bytes data]

  [1 bytes data]

  [5 bytes data]

  [1 bytes data]

  HTTP/2 404 

  access-control-allow-origin: https://render.githubusercontent.com

  content-security-policy: default-src 'none'; style-src 'unsafe-inline';
  sandbox

  cross-origin-resource-policy: cross-origin

  strict-transport-security: max-age=31536000

  vary: Authorization,Accept-Encoding

  x-content-type-options: nosniff

  x-frame-options: deny

  x-xss-protection: 1; mode=block

  date: Wed, 11 Jun 2025 04:01:52 GMT

  content-length: 14

  content-type: text/plain; charset=utf-8

  x-github-request-id: C3BC:3C62C:9A391:D689D:6848FFAF

  The requested URL returned error: 404

  

  [5 bytes data]

  [1 bytes data]

  Connection #0 to host codeload.github.com left intact



          --- LOG END ---
          
    


gmake[2]: *** [CMakeFiles/Hunter.dir/build.make:99: Hunter-prefix/src/Hunter-stamp/Hunter-download] Error 1
gmake[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/Hunter.dir/all] Error 2
gmake: *** [Makefile:91: all] Error 2

[hunter ** INTERNAL **] Build project failed
[hunter ** INTERNAL **] [Directory:/home/kali/mrglist3431/workspace/projects/lab07]

------------------------------ ERROR ------------------------------
    https://hunter.readthedocs.io/en/latest/reference/errors/error.internal.html
-------------------------------------------------------------------

CMake Error at cmake/HunterGate.cmake:88 (message):
Call Stack (most recent call first):                                                                                
  cmake/HunterGate.cmake:98 (hunter_gate_error_page)                                                                
  cmake/HunterGate.cmake:347 (hunter_gate_internal_error)                                                           
  cmake/HunterGate.cmake:511 (hunter_gate_download)                                                                 
  CMakeLists.txt:4 (HunterGate)                                                                                     
                                                                                                                    
                                                                                                                    
-- Configuring incomplete, errors occurred!
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab07]
└─$ ..
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rm -rf lab07
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ git clone https://github.com/${GITHUB_USERNAME}/lab06 projects/lab07
Cloning into 'projects/lab07'...
remote: Enumerating objects: 259, done.
remote: Counting objects: 100% (259/259), done.
remote: Compressing objects: 100% (123/123), done.
remote: Total 259 (delta 112), reused 255 (delta 110), pack-reused 0 (from 0)
Receiving objects: 100% (259/259), 122.95 KiB | 58.00 KiB/s, done.
Resolving deltas: 100% (112/112), done.
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ cd projects/lab07
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git remote remove origin
\                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ \git remote remove origin
error: No such remote: 'origin'
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git remote remove origin
error: No such remote: 'origin'
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab07
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ mkdir -p cmake
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ wget --no-check-certificate https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake -O cmake/HunterGate.cmake
--2025-06-11 07:08:20--  https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake
Resolving raw.githubusercontent.com (raw.githubusercontent.com)... 185.199.110.133, 185.199.108.133, 185.199.111.133, ...
Connecting to raw.githubusercontent.com (raw.githubusercontent.com)|185.199.110.133|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 17231 (17K) [text/plain]
Saving to: ‘cmake/HunterGate.cmake’

cmake/HunterGate.cmake       100%[==============================================>]  16.83K  --.-KB/s    in 0.1s    

2025-06-11 07:08:20 (163 KB/s) - ‘cmake/HunterGate.cmake’ saved [17231/17231]

                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ gsed -i '/cmake_minimum_required(VERSION 3.4)/a \
include("cmake/HunterGate.cmake") \
HunterGate( \
    URL "https://github.com/cpp-pm/hunter/archive/v0.25.290.tar.gz" \
    SHA1 "a1e0c5d17d6d38e53e42151b5c0b6d7c3e3f3a3b" \
)' CMakeLists.txt

                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git rm -rf third-party/gtest
rm 'third-party/gtest'
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ gsed -i '/set(PRINT_VERSION_STRING "v${PRINT_VERSION}")/a \
hunter_add_package(GTest) \
find_package(GTest CONFIG REQUIRED)' CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ gsed -i 's|add_subdirectory(third-party/gtest)||' CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ gsed -i 's|gtest_main|GTest::main|' CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git clone --depth 1 https://github.com/cpp-pm/hunter $HOME/projects/hunter
fatal: destination path '/home/kali/projects/hunter' already exists and is not an empty directory.
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ export HUNTER_ROOT=$HOME/projects/hunter
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ rm -rf _builds
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- [hunter] Calculating Toolchain-SHA1
-- [hunter] Calculating Config-SHA1
-- [hunter] HUNTER_ROOT: /home/kali/projects/hunter
-- [hunter] [ Hunter-ID: xxxxxxx | Toolchain-ID: 85f615d | Config-ID: 1fcf4ef ]
-- [hunter] GTEST_ROOT: /home/kali/projects/hunter/_Base/xxxxxxx/85f615d/1fcf4ef/Install (ver.: 1.15.2)
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
CMake Error at /usr/share/cmake-3.30/Modules/CPack.cmake:688 (message):
  CPack license resource file:                                                                                      
  "/home/kali/mrglist3431/workspace/projects/projects/lab07/LICENSE" could                                          
  not be found.                                                                                                     
Call Stack (most recent call first):                                                                                
  /usr/share/cmake-3.30/Modules/CPack.cmake:693 (cpack_check_file_exists)                                           
  CPackConfig.cmake:24 (include)                                                                                    
  CMakeLists.txt:40 (include)                                                                                       
                                                                                                                    
                                                                                                                    
-- Configuring incomplete, errors occurred!
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cmake --build _builds
gmake: Makefile: No such file or directory
gmake: *** No rule to make target 'Makefile'.  Stop.
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ touch LICENSE
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ gsed -i 's|/projects/lab07"|/lab07"|' CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ rm -rf _builds
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- [hunter] Calculating Toolchain-SHA1
-- [hunter] Calculating Config-SHA1
-- [hunter] HUNTER_ROOT: /home/kali/projects/hunter
-- [hunter] [ Hunter-ID: xxxxxxx | Toolchain-ID: 85f615d | Config-ID: 1fcf4ef ]
-- [hunter] GTEST_ROOT: /home/kali/projects/hunter/_Base/xxxxxxx/85f615d/1fcf4ef/Install (ver.: 1.15.2)
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (1.3s)
CMake Error at CMakeLists.txt:36 (target_link_libraries):
  Target "check" links to:                                                                                          
                                                                                                                    
    GTest::main                                                                                                     
                                                                                                                    
  but the target was not found.  Possible reasons include:                                                          
                                                                                                                    
    * There is a typo in the target name.                                                                           
    * A find_package call is missing for an IMPORTED target.                                                        
    * An ALIAS target is missing.                                                                                   
                                                                                                                    
                                                                                                                    
                                                                                                                    
-- Generating done (0.0s)
CMake Generate step failed.  Build files cannot be regenerated correctly.
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ gsed -i 's|include(CPackConfig.cmake)|# include(CPackConfig.cmake)|' CMakeLists.txt

                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ rm -rf _builds
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON                                               
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- [hunter] Calculating Toolchain-SHA1
-- [hunter] Calculating Config-SHA1
-- [hunter] HUNTER_ROOT: /home/kali/projects/hunter
-- [hunter] [ Hunter-ID: xxxxxxx | Toolchain-ID: 85f615d | Config-ID: 1fcf4ef ]
-- [hunter] GTEST_ROOT: /home/kali/projects/hunter/_Base/xxxxxxx/85f615d/1fcf4ef/Install (ver.: 1.15.2)
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (1.3s)
CMake Error at CMakeLists.txt:36 (target_link_libraries):
  Target "check" links to:                                                                                          
                                                                                                                    
    GTest::main                                                                                                     
                                                                                                                    
  but the target was not found.  Possible reasons include:                                                          
                                                                                                                    
    * There is a typo in the target name.                                                                           
    * A find_package call is missing for an IMPORTED target.                                                        
    * An ALIAS target is missing.                                                                                   
                                                                                                                    
                                                                                                                    
                                                                                                                    
-- Generating done (0.0s)
CMake Generate step failed.  Build files cannot be regenerated correctly.
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ nano CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ rm -rf _builds
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
-- The CXX compiler identification is GNU 14.2.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- [hunter] Calculating Toolchain-SHA1
-- [hunter] Calculating Config-SHA1
-- [hunter] HUNTER_ROOT: /home/kali/projects/hunter
-- [hunter] [ Hunter-ID: xxxxxxx | Toolchain-ID: 85f615d | Config-ID: 1fcf4ef ]
-- [hunter] GTEST_ROOT: /home/kali/projects/hunter/_Base/xxxxxxx/85f615d/1fcf4ef/Install (ver.: 1.15.2)
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (1.1s)
CMake Error at CMakeLists.txt:40 (add_executable):
  Cannot find source file:                                                                                          
                                                                                                                    
    demo/main.cpp                                                                                                   
                                                                                                                    
  Tried extensions .c .C .c++ .cc .cpp .cxx .cu .mpp .m .M .mm .ixx .cppm                                           
  .ccm .cxxm .c++m .h .hh .h++ .hm .hpp .hxx .in .txx .f .F .for .f77 .f90                                          
  .f95 .f03 .hip .ispc                                                                                              
                                                                                                                    
                                                                                                                    
CMake Error at CMakeLists.txt:40 (add_executable):
  No SOURCES given to target: demo                                                                                  
                                                                                                                    
                                                                                                                    
CMake Generate step failed.  Build files cannot be regenerated correctly.
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ ls   
_builds         CPackConfig.cmake  formatter_ex_lib         include    README.md           tests
ChangeLog.md    DESCRIPTION        formatter_lib            input.txt  solver_application  third-party
cmake           examples           gistfile.txt             LICENSE    solver_lib          travis.log
CMakeLists.txt  file.txt           hello_world_application  log.txt    sources
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ mkdir demo                  
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cat > demo/main.cpp <<'EOF'
#include <print.hpp>
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char* argv[]) {
  const char* log_path = std::getenv("LOG_PATH");
  if (log_path == nullptr) {
    std::cerr << "undefined environment variable: LOG_PATH" << std::endl;
    return 1;
  }
  std::string text;
  while (std::cin >> text) {
    std::ofstream out{log_path, std::ios_base::app};
    print(text, out);
    out << std::endl;
  }
}
EOF
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ gsed -i 's|add_executable(demo ${CMAKE_CURRENT_SOURCE_DIR}/demo/main.cpp)|add_executable(demo demo/main.cpp)|' CMakeLists.txt
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ rm -rf _builds
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cmake -H. -B_builds -DBUILD_TESTS=ON
-- The CXX compiler identification is GNU 14.2.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- [hunter] Calculating Toolchain-SHA1
-- [hunter] Calculating Config-SHA1
-- [hunter] HUNTER_ROOT: /home/kali/projects/hunter
-- [hunter] [ Hunter-ID: xxxxxxx | Toolchain-ID: 85f615d | Config-ID: 1fcf4ef ]
-- [hunter] GTEST_ROOT: /home/kali/projects/hunter/_Base/xxxxxxx/85f615d/1fcf4ef/Install (ver.: 1.15.2)
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (1.1s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/projects/projects/lab07/_builds
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cmake --build _builds
[ 10%] Building CXX object CMakeFiles/print.dir/sources/print.cpp.o
[ 20%] Linking CXX static library libprint.a
[ 20%] Built target print
[ 30%] Building CXX object CMakeFiles/example1.dir/examples/example1.cpp.o
[ 40%] Linking CXX executable example1
[ 40%] Built target example1
[ 50%] Building CXX object CMakeFiles/example2.dir/examples/example2.cpp.o
[ 60%] Linking CXX executable example2
[ 60%] Built target example2
[ 70%] Building CXX object CMakeFiles/demo.dir/demo/main.cpp.o
[ 80%] Linking CXX executable demo
[ 80%] Built target demo
[ 90%] Building CXX object CMakeFiles/check.dir/tests/test1.cpp.o
[100%] Linking CXX executable check
[100%] Built target check
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cmake --build _builds --target test
Running tests...
Test project /home/kali/mrglist3431/workspace/projects/projects/lab07/_builds
    Start 1: check
1/1 Test #1: check ............................   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.01 sec
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ ls -la $HOME/.hunter
total 12
drwxrwxr-x  3 kali kali 4096 Jun 11 06:51 .
drwx------ 35 kali kali 4096 Jun 11 06:51 ..
drwxrwxr-x  3 kali kali 4096 Jun 11 06:51 _Base
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git clone https://github.com/cpp-pm/hunter $HOME/projects/hunter
fatal: destination path '/home/kali/projects/hunter' already exists and is not an empty directory.
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cd _builds
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ ctest --verbose
UpdateCTestConfiguration  from :/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/DartConfiguration.tcl
UpdateCTestConfiguration  from :/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/DartConfiguration.tcl
Test project /home/kali/mrglist3431/workspace/projects/projects/lab07/_builds
Constructing a list of tests
Done constructing a list of tests
Updating test list for fixtures
Added 0 tests to meet fixture requirements
Checking test dependency graph...
Checking test dependency graph end
test 1
    Start 1: check

1: Test command: /home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/check
1: Working Directory: /home/kali/mrglist3431/workspace/projects/projects/lab07/_builds
1: Test timeout computed to be: 10000000
1: Running main() from /home/kali/projects/hunter/_Base/xxxxxxx/85f615d/1fcf4ef/Build/GTest/Source/googletest/src/gtest_main.cc
1: [==========] Running 1 test from 1 test suite.
1: [----------] Global test environment set-up.
1: [----------] 1 test from Print
1: [ RUN      ] Print.InFileStream
1: [       OK ] Print.InFileStream (0 ms)
1: [----------] 1 test from Print (0 ms total)
1: 
1: [----------] Global test environment tear-down
1: [==========] 1 test from 1 test suite ran. (0 ms total)
1: [  PASSED  ] 1 test.
1/1 Test #1: check ............................   Passed    0.01 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.01 sec
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ export LOG_PATH=output.log
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ echo "Hello World" | ./demo/demo
zsh: not a directory: ./demo/demo
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ ..
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ export LOG_PATH=output.log
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ echo "Hello World" | ./demo/demo
zsh: no such file or directory: ./demo/demo
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ echo "Hello World" | demo/demo 
zsh: no such file or directory: demo/demo
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cd _builds
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ export LOG_PATH=output.log
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ echo "Hello World" | ./demo/demo
zsh: not a directory: ./demo/demo
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ юю
юю: command not found
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ ..
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ echo "Hello World" | ./_builds/demo/demo
zsh: not a directory: ./_builds/demo/demo
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ ls -la _builds/demo/demo
ls: cannot access '_builds/demo/demo': Not a directory
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cmake --build _builds              
[ 20%] Built target print
[ 40%] Built target example1
[ 60%] Built target example2
[ 80%] Built target demo
[100%] Built target check
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cd _builds
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ make demo 
[ 50%] Built target print
[100%] Built target demo
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ ./demo/demo <<< "Test input"
zsh: not a directory: ./demo/demo
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ ./demo <<< "Test input" 
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ cat output.log
Test
input
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ echo "Hunter works!" | /demo      
dquote> cat output.log
dquote> 
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ cat output.log
Test
input
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ ^[[200~cd ..~
zsh: bad pattern: ^[[200~cd
                                                                                                                    
┌──(kali㉿kali)-[~/…/projects/projects/lab07/_builds]
└─$ cd ..
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git add .                               
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git commit -m "Complete lab07 with working demo"
[main d79b24b] Complete lab07 with working demo
 6 files changed, 617 insertions(+), 20 deletions(-)
 create mode 100644 LICENSE
 create mode 100644 cmake/HunterGate.cmake
 create mode 100644 demo/main.cpp
 delete mode 160000 third-party/gtest
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git push origin main
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
To https://github.com/mrglist3431/lab07
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'https://github.com/mrglist3431/lab07'
hint: Updates were rejected because the remote contains work that you do not                                        
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git pull origin main                            
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Unpacking objects: 100% (3/3), 850 bytes | 850.00 KiB/s, done.
From https://github.com/mrglist3431/lab07
 * branch            main       -> FETCH_HEAD
 * [new branch]      main       -> origin/main
fatal: refusing to merge unrelated histories
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git pull origin main --allow-unrelated-histories
From https://github.com/mrglist3431/lab07
 * branch            main       -> FETCH_HEAD
Auto-merging README.md
CONFLICT (add/add): Merge conflict in README.md
Automatic merge failed; fix conflicts and then commit the result.
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git push -f origin main
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
Enumerating objects: 266, done.
Counting objects: 100% (266/266), done.
Delta compression using up to 16 threads
Compressing objects: 100% (126/126), done.
Writing objects: 100% (266/266), 129.48 KiB | 129.48 MiB/s, done.
Total 266 (delta 113), reused 258 (delta 112), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (113/113), done.
remote: error: GH013: Repository rule violations found for refs/heads/main.
remote: 
remote: - GITHUB PUSH PROTECTION
remote:   —————————————————————————————————————————
remote:     Resolve the following violations before pushing again
remote: 
remote:     - Push cannot contain secrets
remote: 
remote:     
remote:      (?) Learn how to resolve a blocked push
remote:      https://docs.github.com/code-security/secret-scanning/working-with-secret-scanning-and-push-protection/working-with-push-protection-from-the-command-line#resolving-a-blocked-push
remote:     
remote:     
remote:       —— GitHub Personal Access Token ——————————————————————
remote:        locations:
remote:          - commit: 7586a7a6f02fecc872962dce46e6dfbf088ef936
remote:            path: README.md:1014
remote:          - commit: 7586a7a6f02fecc872962dce46e6dfbf088ef936
remote:            path: README.md:1017
remote:     
remote:        (?) To push, remove secret from commit(s) or follow this URL to allow the secret.
remote:        https://github.com/mrglist3431/lab07/security/secret-scanning/unblock-secret/2yLaAp1DCin6f22Dn9x8uROYxUc
remote:     
remote: 
remote: 
To https://github.com/mrglist3431/lab07
 ! [remote rejected] main -> main (push declined due to repository rule violations)
error: failed to push some refs to 'https://github.com/mrglist3431/lab07'
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git push -f origin main
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
Enumerating objects: 266, done.
Counting objects: 100% (266/266), done.
Delta compression using up to 16 threads
Compressing objects: 100% (126/126), done.
Writing objects: 100% (266/266), 129.48 KiB | 129.48 MiB/s, done.
Total 266 (delta 113), reused 258 (delta 112), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (113/113), done.
To https://github.com/mrglist3431/lab07
 + 326588b...d79b24b main -> main (forced update)
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ echo "Hunter works perfectly" | ./_builds/demo
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cat input.txt | ./_builds/demo

                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ cat output.log
Hunter
works
perfectly
!
TRAVIS
input
file
!
Created
with
TRAVIS
version
compiled
at
Jan
14
2023
12:32:45
!
Source
code
version:
Jul
29
2022
!
Input
file
written
at
Tue
Jun
10
10:16:11
2025.
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git submodule update --init --recursive
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ tools/polly/bin/polly.py --test

zsh: no such file or directory: tools/polly/bin/polly.py
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ mkdir tools
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ git submodule add https://github.com/ruslo/polly tools/polly
Cloning into '/home/kali/mrglist3431/workspace/projects/projects/lab07/tools/polly'...
remote: Enumerating objects: 6578, done.
remote: Counting objects: 100% (32/32), done.
remote: Compressing objects: 100% (15/15), done.
remote: Total 6578 (delta 21), reused 20 (delta 17), pack-reused 6546 (from 1)
Receiving objects: 100% (6578/6578), 1.68 MiB | 1.44 MiB/s, done.
Resolving deltas: 100% (4551/4551), done.
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ tools/polly/bin/polly.py --test
Python version: 3.12
Build dir: /home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/default
Execute command: [
  `which`
  `cmake`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07]> "which" "cmake"

/usr/bin/cmake
Execute command: [
  `cmake`
  `--version`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07]> "cmake" "--version"

cmake version 3.30.5

CMake suite maintained and supported by Kitware (kitware.com/cmake).
Execute command: [
  `cmake`
  `-H.`
  `-B/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/default`
  `-DCMAKE_TOOLCHAIN_FILE=/home/kali/mrglist3431/workspace/projects/projects/lab07/tools/polly/default.cmake`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07]> "cmake" "-H." "-B/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/default" "-DCMAKE_TOOLCHAIN_FILE=/home/kali/mrglist3431/workspace/projects/projects/lab07/tools/polly/default.cmake"

-- [polly] Used toolchain: Default
-- The CXX compiler identification is GNU 14.2.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- [hunter] Calculating Toolchain-SHA1
-- [hunter] Calculating Config-SHA1
-- [hunter] HUNTER_ROOT: /home/kali/projects/hunter
-- [hunter] [ Hunter-ID: xxxxxxx | Toolchain-ID: 85f615d | Config-ID: 1fcf4ef ]
-- [hunter] GTEST_ROOT: /home/kali/projects/hunter/_Base/xxxxxxx/85f615d/1fcf4ef/Install (ver.: 1.15.2)
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (1.2s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/default
Execute command: [
  `cmake`
  `--build`
  `/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/default`
  `--`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07]> "cmake" "--build" "/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/default" "--"

[ 12%] Building CXX object CMakeFiles/print.dir/sources/print.cpp.o
[ 25%] Linking CXX static library libprint.a
[ 25%] Built target print
[ 37%] Building CXX object CMakeFiles/example1.dir/examples/example1.cpp.o
[ 50%] Linking CXX executable example1
[ 50%] Built target example1
[ 62%] Building CXX object CMakeFiles/example2.dir/examples/example2.cpp.o
[ 75%] Linking CXX executable example2
[ 75%] Built target example2
[ 87%] Building CXX object CMakeFiles/demo.dir/demo/main.cpp.o
[100%] Linking CXX executable demo
[100%] Built target demo
Run tests
Execute command: [
  `ctest`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/default]> "ctest"

*********************************
No test configuration file found!
*********************************
Usage

  ctest [options]

-
Log saved: /home/kali/mrglist3431/workspace/projects/projects/lab07/_logs/polly/default/log.txt
-
Generate: 0:00:02.199760s
Build: 0:00:02.559828s
Test: 0:00:00.014874s
-
Total: 0:00:04.774710s
-
SUCCESS
                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ tools/polly/bin/polly.py --install
Python version: 3.12
Build dir: /home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/default
Execute command: [
  `which`
  `cmake`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07]> "which" "cmake"

/usr/bin/cmake
Execute command: [
  `cmake`
  `--version`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07]> "cmake" "--version"

cmake version 3.30.5

CMake suite maintained and supported by Kitware (kitware.com/cmake).

== WARNING ==

Looks like cmake arguments changed. You have two options to fix it:
  * Remove build directory completely by adding '--clear' (works 100%)
  * Run configure again by adding '--reconfig' (you must understand how CMake cache variables works/updated)

- "cmake" "-H." "-B/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/default" "-DCMAKE_TOOLCHAIN_FILE=/home/kali/mrglist3431/workspace/projects/projects/lab07/tools/polly/default.cmake"
+ "cmake" "-H." "-B/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/default" "-DCMAKE_TOOLCHAIN_FILE=/home/kali/mrglist3431/workspace/projects/projects/lab07/tools/polly/default.cmake" "-DCMAKE_INSTALL_PREFIX=/home/kali/mrglist3431/workspace/projects/projects/lab07/_install/default"
?                                                                                                                                                                                                       +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

                                                                                                                    
┌──(kali㉿kali)-[~/…/workspace/projects/projects/lab07]
└─$ tools/polly/bin/polly.py --toolchain clang-cxx14
Python version: 3.12
Build dir: /home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/clang-cxx14
Execute command: [
  `which`
  `cmake`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07]> "which" "cmake"

/usr/bin/cmake
Execute command: [
  `cmake`
  `--version`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07]> "cmake" "--version"

cmake version 3.30.5

CMake suite maintained and supported by Kitware (kitware.com/cmake).
Execute command: [
  `cmake`
  `-H.`
  `-B/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/clang-cxx14`
  `-GUnix Makefiles`
  `-DCMAKE_TOOLCHAIN_FILE=/home/kali/mrglist3431/workspace/projects/projects/lab07/tools/polly/clang-cxx14.cmake`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07]> "cmake" "-H." "-B/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/clang-cxx14" "-GUnix Makefiles" "-DCMAKE_TOOLCHAIN_FILE=/home/kali/mrglist3431/workspace/projects/projects/lab07/tools/polly/clang-cxx14.cmake"

-- [polly] Used toolchain: clang / c++14 support
-- The CXX compiler identification is Clang 19.1.7
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/clang++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- [hunter] Calculating Toolchain-SHA1
-- [hunter] Calculating Config-SHA1
-- [hunter] HUNTER_ROOT: /home/kali/projects/hunter
-- [hunter] [ Hunter-ID: xxxxxxx | Toolchain-ID: 04ca268 | Config-ID: 1fcf4ef ]
-- [hunter] GTEST_ROOT: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Install (ver.: 1.15.2)
-- [hunter] Building GTest
loading initial cache file /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/cache.cmake
loading initial cache file /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/args.cmake
-- [polly] Used toolchain: clang / c++14 support
-- The C compiler identification is Clang 19.1.7
-- The CXX compiler identification is Clang 19.1.7
-- Check for working C compiler: /usr/bin/clang
-- Check for working C compiler: /usr/bin/clang - works
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/clang++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (0.5s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Build
[  6%] Creating directories for 'GTest-Release'
[ 12%] Performing download step (download, verify and extract) for 'GTest-Release'
-- verifying file...
       file='/home/kali/projects/hunter/_Base/Download/GTest/1.15.2/568d58e/v1.15.2.tar.gz'
-- File already exists and hash match (skip download):
  file='/home/kali/projects/hunter/_Base/Download/GTest/1.15.2/568d58e/v1.15.2.tar.gz'
  SHA1='568d58e26bd4e838449ca7ab8ebc152b3cbd210d'
-- extracting...
     src='/home/kali/projects/hunter/_Base/Download/GTest/1.15.2/568d58e/v1.15.2.tar.gz'
     dst='/home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Source'
-- extracting... [tar xfz]
-- extracting... [analysis]
-- extracting... [rename]
-- extracting... [clean up]
-- extracting... done
[ 18%] No update step for 'GTest-Release'
[ 25%] No patch step for 'GTest-Release'
[ 31%] Performing configure step for 'GTest-Release'
loading initial cache file /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/cache.cmake
loading initial cache file /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/args.cmake
-- [polly] Used toolchain: clang / c++14 support
-- The C compiler identification is Clang 19.1.7
-- The CXX compiler identification is Clang 19.1.7
-- Check for working C compiler: /usr/bin/clang
-- Check for working C compiler: /usr/bin/clang - works
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/clang++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (0.6s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Build/GTest-Release-prefix/src/GTest-Release-build
[ 37%] Performing build step for 'GTest-Release'
[ 12%] Building CXX object googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 25%] Linking CXX static library ../lib/libgtest.a
[ 25%] Built target gtest
[ 37%] Building CXX object googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 50%] Building CXX object googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 62%] Linking CXX static library ../lib/libgtest_main.a
[ 62%] Built target gtest_main
[ 75%] Linking CXX static library ../lib/libgmock.a
[ 75%] Built target gmock
[ 87%] Building CXX object googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../lib/libgmock_main.a
[100%] Built target gmock_main
[ 43%] Performing install step for 'GTest-Release'
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-cardinalities.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-spec-builders.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-matchers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-more-actions.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-actions.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-more-matchers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/custom
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/custom/gmock-matchers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/custom/README.md
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/custom/gmock-generated-actions.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/custom/gmock-port.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/gmock-pp.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/gmock-internal-utils.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/gmock-port.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-function-mocker.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-nice-strict.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/libgmock.a
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/libgmock_main.a
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/pkgconfig/gmock.pc
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/pkgconfig/gmock_main.pc
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/cmake/GTest/GTestTargets.cmake
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/cmake/GTest/GTestTargets-release.cmake
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/cmake/GTest/GTestConfigVersion.cmake
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/cmake/GTest/GTestConfig.cmake
-- Up-to-date: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-message.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-printers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-matchers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest_pred_impl.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-test-part.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-assertion-result.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-death-test.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-internal.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-param-util.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-port-arch.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-type-util.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-filepath.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-port.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/custom
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/custom/gtest-printers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/custom/README.md
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/custom/gtest-port.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/custom/gtest.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-string.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-death-test-internal.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-typed-test.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-spi.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-param-test.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest_prod.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/libgtest.a
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/libgtest_main.a
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/pkgconfig/gtest.pc
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/pkgconfig/gtest_main.pc
loading initial cache file /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/args.cmake
[ 50%] Completed 'GTest-Release'
[ 50%] Built target GTest-Release
[ 56%] Creating directories for 'GTest-Debug'
[ 62%] Performing download step (download, verify and extract) for 'GTest-Debug'
-- verifying file...
       file='/home/kali/projects/hunter/_Base/Download/GTest/1.15.2/568d58e/v1.15.2.tar.gz'
-- File already exists and hash match (skip download):
  file='/home/kali/projects/hunter/_Base/Download/GTest/1.15.2/568d58e/v1.15.2.tar.gz'
  SHA1='568d58e26bd4e838449ca7ab8ebc152b3cbd210d'
-- extracting...
     src='/home/kali/projects/hunter/_Base/Download/GTest/1.15.2/568d58e/v1.15.2.tar.gz'
     dst='/home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Source'
-- extracting... [tar xfz]
-- extracting... [analysis]
-- extracting... [rename]
-- extracting... [clean up]
-- extracting... done
[ 68%] No update step for 'GTest-Debug'
[ 75%] No patch step for 'GTest-Debug'
[ 81%] Performing configure step for 'GTest-Debug'
loading initial cache file /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/cache.cmake
loading initial cache file /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/args.cmake
-- [polly] Used toolchain: clang / c++14 support
-- The C compiler identification is Clang 19.1.7
-- The CXX compiler identification is Clang 19.1.7
-- Check for working C compiler: /usr/bin/clang
-- Check for working C compiler: /usr/bin/clang - works
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/clang++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (0.5s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Build/GTest-Debug-prefix/src/GTest-Debug-build
[ 87%] Performing build step for 'GTest-Debug'
[ 12%] Building CXX object googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 25%] Linking CXX static library ../lib/libgtestd.a
[ 25%] Built target gtest
[ 37%] Building CXX object googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 50%] Building CXX object googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 62%] Linking CXX static library ../lib/libgtest_maind.a
[ 62%] Built target gtest_main
[ 75%] Linking CXX static library ../lib/libgmockd.a
[ 75%] Built target gmock
[ 87%] Building CXX object googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../lib/libgmock_maind.a
[100%] Built target gmock_main
[ 93%] Performing install step for 'GTest-Debug'
-- Up-to-date: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include
-- Up-to-date: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-cardinalities.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-spec-builders.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-matchers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-more-actions.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-actions.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-more-matchers.h
-- Up-to-date: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal
-- Up-to-date: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/custom
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/custom/gmock-matchers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/custom/README.md
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/custom/gmock-generated-actions.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/custom/gmock-port.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/gmock-pp.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/gmock-internal-utils.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/internal/gmock-port.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-function-mocker.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gmock/gmock-nice-strict.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/libgmockd.a
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/libgmock_maind.a
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/pkgconfig/gmock.pc
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/pkgconfig/gmock_main.pc
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/cmake/GTest/GTestTargets.cmake
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/cmake/GTest/GTestTargets-debug.cmake
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/cmake/GTest/GTestConfigVersion.cmake
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/cmake/GTest/GTestConfig.cmake
-- Up-to-date: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include
-- Up-to-date: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-message.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-printers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-matchers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest_pred_impl.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-test-part.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-assertion-result.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-death-test.h
-- Up-to-date: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-internal.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-param-util.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-port-arch.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-type-util.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-filepath.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-port.h
-- Up-to-date: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/custom
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/custom/gtest-printers.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/custom/README.md
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/custom/gtest-port.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/custom/gtest.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-string.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/internal/gtest-death-test-internal.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-typed-test.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-spi.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest-param-test.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/include/gtest/gtest_prod.h
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/libgtestd.a
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/libgtest_maind.a
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/pkgconfig/gtest.pc
-- Installing: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/Install/lib/pkgconfig/gtest_main.pc
loading initial cache file /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest/args.cmake
[100%] Completed 'GTest-Debug'
[100%] Built target GTest-Debug
-- [hunter] Build step successful (dir: /home/kali/projects/hunter/_Base/xxxxxxx/04ca268/1fcf4ef/Build/GTest)
-- [hunter] Cache saved: /home/kali/projects/hunter/_Base/Cache/raw/98a72d70d07e64aaee065a4cba2256f96152cbc2.tar.bz2
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (21.7s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/clang-cxx14
Execute command: [
  `cmake`
  `--build`
  `/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/clang-cxx14`
  `--`
]

[/home/kali/mrglist3431/workspace/projects/projects/lab07]> "cmake" "--build" "/home/kali/mrglist3431/workspace/projects/projects/lab07/_builds/clang-cxx14" "--"

[ 12%] Building CXX object CMakeFiles/print.dir/sources/print.cpp.o
[ 25%] Linking CXX static library libprint.a
[ 25%] Built target print
[ 37%] Building CXX object CMakeFiles/example1.dir/examples/example1.cpp.o
[ 50%] Linking CXX executable example1
[ 50%] Built target example1
[ 62%] Building CXX object CMakeFiles/example2.dir/examples/example2.cpp.o
[ 75%] Linking CXX executable example2
[ 75%] Built target example2
[ 87%] Building CXX object CMakeFiles/demo.dir/demo/main.cpp.o
[100%] Linking CXX executable demo
[100%] Built target demo
-
Log saved: /home/kali/mrglist3431/workspace/projects/projects/lab07/_logs/polly/clang-cxx14/log.txt
-
Generate: 0:00:22.757862s
Build: 0:00:02.895186s
-
Total: 0:00:25.653301s
-
SUCCESS
