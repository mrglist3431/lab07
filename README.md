┌──(kali㉿kali)-[~]
└─$ export GITHUB_USERNAME=mrglist3431       
                                                                                                                   
┌──(kali㉿kali)-[~]
└─$  export GITHUB_EMAIL=ifedotov236@gmail.com  
                                                                                                                   
┌──(kali㉿kali)-[~]
└─$ alias edit=<nano|vi|vim|subl>
zsh: parse error near `\n'
                                                                                                                   
┌──(kali㉿kali)-[~]
└─$ alias edit=<nano|vi|vim|subl>
zsh: parse error near `\n'
                                                                                                                   
┌──(kali㉿kali)-[~]
└─$ open https://cmake.org/Wiki/CMake:CPackPackageGenerators
                                                                                                                   
┌──(kali㉿kali)-[~]
└─$ alias gsed=sed # for *-nix system
                                                                                                                   
┌──(kali㉿kali)-[~]
└─$ cd ${GITHUB_USERNAME}/workspace
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ pushd .
~/mrglist3431/workspace ~/mrglist3431/workspace
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ source scripts/activate
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git clone https://github.com/${GITHUB_USERNAME}/lab05 projects/lab06
Cloning into 'projects/lab06'...
remote: Enumerating objects: 250, done.
remote: Counting objects: 100% (250/250), done.
remote: Compressing objects: 100% (118/118), done.
remote: Total 250 (delta 107), reused 243 (delta 106), pack-reused 0 (from 0)
Receiving objects: 100% (250/250), 118.18 KiB | 140.00 KiB/s, done.
Resolving deltas: 100% (107/107), done.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ cd projects/lab06
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git remote remove origin
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab06
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gsed -i '/project(print)/a\
set(PRINT_VERSION_STRING "v\${PRINT_VERSION}")
' CMakeLists.txt
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gsed -i '/project(print)/a\
set(PRINT_VERSION\
  \${PRINT_VERSION_MAJOR}.\${PRINT_VERSION_MINOR}.\${PRINT_VERSION_PATCH}.\${PRINT_VERSION_TWEAK})
' CMakeLists.txt
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gsed -i '/project(print)/a\
set(PRINT_VERSION_TWEAK 0)
' CMakeLists.txt
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gsed -i '/project(print)/a\
set(PRINT_VERSION_PATCH 0)
' CMakeLists.txt
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gsed -i '/project(print)/a\
set(PRINT_VERSION_MINOR 1)
' CMakeLists.txt
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gsed -i '/project(print)/a\
set(PRINT_VERSION_MAJOR 0)
' CMakeLists.txt
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$  git diff
diff --git a/CMakeLists.txt b/CMakeLists.txt
index ee61cab..fdac133 100644
--- a/CMakeLists.txt
+++ b/CMakeLists.txt
@@ -1,5 +1,12 @@
 cmake_minimum_required(VERSION 3.4)
 project(print)
+set(PRINT_VERSION_MAJOR 0)
+set(PRINT_VERSION_MINOR 1)
+set(PRINT_VERSION_PATCH 0)
+set(PRINT_VERSION_TWEAK 0)
+set(PRINT_VERSION
+  ${PRINT_VERSION_MAJOR}.${PRINT_VERSION_MINOR}.${PRINT_VERSION_PATCH}.${PRINT_VERSION_TWEAK})
+set(PRINT_VERSION_STRING "v${PRINT_VERSION}")
 
 set(CMAKE_CXX_STANDARD 11)
 set(CMAKE_CXX_STANDARD_REQUIRED ON)
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ touch DESCRIPTION && edit DESCRIPTION
Error: no "edit" mailcap rules found for type "inode/x-empty"
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ touch DESCRIPTION                    
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ touch ChangeLog.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$  export DATE="`LANG=en_US date +'%a %b %d %Y'`"
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$  cat > ChangeLog.md <<EOF
* ${DATE} ${GITHUB_USERNAME} <${GITHUB_EMAIL}> 0.1.0.0
- Initial RPM release
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cat > CPackConfig.cmake <<EOF
include(InstallRequiredSystemLibraries)
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cat >> CPackConfig.cmake <<EOF
set(CPACK_PACKAGE_CONTACT ${GITHUB_EMAIL})
set(CPACK_PACKAGE_VERSION_MAJOR \${PRINT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR \${PRINT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH \${PRINT_VERSION_PATCH})
set(CPACK_PACKAGE_VERSION_TWEAK \${PRINT_VERSION_TWEAK})
set(CPACK_PACKAGE_VERSION \${PRINT_VERSION})
set(CPACK_PACKAGE_DESCRIPTION_FILE \${CMAKE_CURRENT_SOURCE_DIR}/DESCRIPTION)
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "static C++ library for printing")
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cat >> CPackConfig.cmake <<EOF

set(CPACK_RESOURCE_FILE_LICENSE \${CMAKE_CURRENT_SOURCE_DIR}/LICENSE)
set(CPACK_RESOURCE_FILE_README \${CMAKE_CURRENT_SOURCE_DIR}/README.md)
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cat >> CPackConfig.cmake <<EOF

set(CPACK_RPM_PACKAGE_NAME "print-devel")
set(CPACK_RPM_PACKAGE_LICENSE "MIT")
set(CPACK_RPM_PACKAGE_GROUP "print")
set(CPACK_RPM_CHANGELOG_FILE \${CMAKE_CURRENT_SOURCE_DIR}/ChangeLog.md)
set(CPACK_RPM_PACKAGE_RELEASE 1)
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cat >> CPackConfig.cmake <<EOF

set(CPACK_DEBIAN_PACKAGE_NAME "libprint-dev")
set(CPACK_DEBIAN_PACKAGE_PREDEPENDS "cmake >= 3.0")
set(CPACK_DEBIAN_PACKAGE_RELEASE 1)
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cat >> CPackConfig.cmake <<EOF

include(CPack)
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cat >> CMakeLists.txt <<EOF

include(CPackConfig.cmake)
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gsed -i 's/lab05/lab06/g' README.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git add .
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git commit -m"added cpack config"
[main 86aee1c] added cpack config
 5 files changed, 104 insertions(+), 69 deletions(-)
 create mode 100644 CPackConfig.cmake
 create mode 100644 ChangeLog.md
 create mode 100644 DESCRIPTION
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git tag v0.1.0.0
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$  git push origin master --tags
error: src refspec master does not match any
error: failed to push some refs to 'https://github.com/mrglist3431/lab06'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull origin main   
fatal: couldn't find remote ref main
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull origin master
fatal: couldn't find remote ref master
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git branch -a
* main
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git push origin main --tags
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
Enumerating objects: 256, done.
Counting objects: 100% (256/256), done.
Delta compression using up to 16 threads
Compressing objects: 100% (123/123), done.
Writing objects: 100% (256/256), 119.46 KiB | 119.46 MiB/s, done.
Total 256 (delta 110), reused 247 (delta 107), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (110/110), done.
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
remote:        https://github.com/mrglist3431/lab06/security/secret-scanning/unblock-secret/2yJAuWYSdxPGAVbICYVOHc3yfNu
remote:     
remote: 
remote: 
remote: error: GH013: Repository rule violations found for refs/tags/v0.1.0.0.
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
remote:        https://github.com/mrglist3431/lab06/security/secret-scanning/unblock-secret/2yJAuWYSdxPGAVbICYVOHc3yfNu
remote:     
remote: 
remote: 
To https://github.com/mrglist3431/lab06
 ! [remote rejected] main -> main (push declined due to repository rule violations)
 ! [remote rejected] v0.1.0.0 -> v0.1.0.0 (push declined due to repository rule violations)
error: failed to push some refs to 'https://github.com/mrglist3431/lab06'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git push origin main --tags
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
Enumerating objects: 256, done.
Counting objects: 100% (256/256), done.
Delta compression using up to 16 threads
Compressing objects: 100% (123/123), done.
Writing objects: 100% (256/256), 119.46 KiB | 59.73 MiB/s, done.
Total 256 (delta 110), reused 247 (delta 107), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (110/110), done.
To https://github.com/mrglist3431/lab06
 * [new branch]      main -> main
 * [new tag]         v0.1.0.0 -> v0.1.0.0
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cmake -H. -B_build
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
CMake Error at /usr/share/cmake-3.30/Modules/CPack.cmake:688 (message):
  CPack license resource file:                                                                                     
  "/home/kali/mrglist3431/workspace/projects/lab06/LICENSE" could not be                                           
  found.                                                                                                           
Call Stack (most recent call first):                                                                               
  /usr/share/cmake-3.30/Modules/CPack.cmake:693 (cpack_check_file_exists)                                          
  CPackConfig.cmake:24 (include)                                                                                   
  CMakeLists.txt:33 (include)                                                                                      
                                                                                                                   
                                                                                                                   
-- Configuring incomplete, errors occurred!
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cat > LICENSE <<EOF
MIT License

Copyright (c) $(date +%Y) Your Name

Permission is hereby granted...
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ curl -o LICENSE https://www.gnu.org/licenses/gpl-3.0.txt
  % Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
                                 Dload  Upload   Total   Spent    Left  Speed
100 35149  100 35149    0     0  32295      0  0:00:01  0:00:01 --:--:-- 32276
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ curl -o LICENSE https://opensource.org/licenses/MIT
  % Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
                                 Dload  Upload   Total   Spent    Left  Speed
  0     0    0     0    0     0      0      0 --:--:-- --:--:-- --:--:--     0
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cmake -H. -B_build
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/projects/lab06/_build
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cmake --build _build
[ 16%] Building CXX object CMakeFiles/print.dir/sources/print.cpp.o
[ 33%] Linking CXX static library libprint.a
[ 33%] Built target print
[ 50%] Building CXX object CMakeFiles/example1.dir/examples/example1.cpp.o
[ 66%] Linking CXX executable example1
[ 66%] Built target example1
[ 83%] Building CXX object CMakeFiles/example2.dir/examples/example2.cpp.o
[100%] Linking CXX executable example2
[100%] Built target example2
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cd _build
                                                                                                                   
┌──(kali㉿kali)-[~/…/workspace/projects/lab06/_build]
└─$ cpack -G "TGZ"
CPack: Create package using TGZ
CPack: Install projects
CPack: - Run preinstall target for: print
CPack: - Install project: print []
CPack: Create package
CPack: - package: /home/kali/mrglist3431/workspace/projects/lab06/_build/print-0.1.0.0-Linux.tar.gz generated.
                                                                                                                   
┌──(kali㉿kali)-[~/…/workspace/projects/lab06/_build]
└─$ cd ..
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cmake -H. -B_build -DCPACK_GENERATOR="TGZ"
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/projects/lab06/_build
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ cmake --build _build --target package
[ 33%] Built target print
[ 66%] Built target example1
[100%] Built target example2
Run CPack packaging tool...
CPack: Create package using TGZ
CPack: Install projects
CPack: - Run preinstall target for: print
CPack: - Install project: print []
CPack: Create package
CPack: - package: /home/kali/mrglist3431/workspace/projects/lab06/_build/print-0.1.0.0-Linux.tar.gz generated.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ mkdir artifacts
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ mv _build/*.tar.gz artifacts
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$  tree artifacts
artifacts
└── print-0.1.0.0-Linux.tar.gz

1 directory, 1 file
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ 
