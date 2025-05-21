 
┌──(kali㉿kali)-[~/TP-lab03/lab03]
└─$ export GITHUB_USERNAME=mrglist3431 && cd ~ && mkdir -p ${GITHUB_USERNAME}/workspace && cd ${GITHUB_USERNAME}/workspace && pushd . && git clone "https://mrglist3431:gh@github.com/mrglist3431/lab02.git" projects/lab03 && cd projects/lab03 && git remote remove origin && git remote add origin "https://mrglist3431:g3WeZXrFXSH53@github.com/mrglist3431/lab03.git" && mkdir -p include sources examples && echo "#include <iostream>
#include <fstream>
#include <string>

void print(const std::string& text, std::ofstream& out);
void print(const std::string& text, std::ostream& out = std::cout);" > include/print.hpp && echo '#include "print.hpp"
#include <fstream>
#include <string>

void print(const std::string& text, std::ofstream& out) {
 out << text;
}

void print(const std::string& text, std::ostream& out) {
 out << text;
}' > sources/print.cpp && echo '#include "print.hpp"

int main() {
 print("Hello, World!");
}' > examples/example1.cpp && echo '#include "print.hpp"
#include <fstream>

int main() {
 std::ofstream file("log.txt");
 print("hello", file);
}' > examples/example2.cpp && g++ -std=c++11 -I./include -c sources/print.cpp && ar rvs print.a print.o && g++ -std=c++11 -I./include -c examples/example1.cpp && g++ example1.o print.a -o example1 && ./example1 && g++ -std=c++11 -I./include -c examples/example2.cpp && g++ example2.o print.a -o example2 && ./example2 && cat log.txt && rm -rf *.o *.a example1 example2 log.txt && echo 'cmake_minimum_required(VERSION 3.4)
project(print)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(print STATIC sources/print.cpp)

include_directories(include)

add_executable(example1 examples/example1.cpp)
add_executable(example2 examples/example2.cpp)

target_link_libraries(example1 print)
target_link_libraries(example2 print)' > CMakeLists.txt && cmake -H. -B_build && cmake --build _build && _build/example1 && _build/example2 && cat log.txt && git add . && git commit -m "Complete lab03 implementation" && git push origin master && popd && export LAB_NUMBER=03 && mkdir -p tasks && git clone "https://github.com/tp-labs/lab${LAB_NUMBER}" tasks/lab${LAB_NUMBER} && mkdir -p reports && mkdir -p reports/lab${LAB_NUMBER} && cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md && cd reports/lab${LAB_NUMBER} && echo "Report created" >> REPORT.md
~/mrglist3431/workspace ~/mrglist3431/workspace
fatal: destination path 'projects/lab03' already exists and is not an empty directory.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ ls                      
lab02  lab3  master  node  projects  reports  scripts  tasks
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ projects
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir lab03
rmdir: failed to remove 'lab03': Directory not empty
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ls
homework2  lab02  lab03  lab_2  TP_lab03  TP_lab3
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ lab03
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ ls   
print.a  print.o  README.md  sources
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ rm print.a 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ rm print.o
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ rm README.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ export GITHUB_USERNAME=mrglist3431 && cd ~ && mkdir -p ${GITHUB_USERNAME}/workspace && cd ${GITHUB_USERNAME}/workspace && pushd . && git clone "https://mrglist3431@github.com/mrglist3431/lab02.git" projects/lab03 && cd projects/lab03 && git remote remove origin && git remote add origin "https://mrglist3431:gH53@github.com/mrglist3431/lab03.git" && mkdir -p include sources examples && echo "#include <iostream>
#include <fstream>
#include <string>

void print(const std::string& text, std::ofstream& out);
void print(const std::string& text, std::ostream& out = std::cout);" > include/print.hpp && echo '#include "print.hpp"
#include <fstream>
#include <string>

void print(const std::string& text, std::ofstream& out) {
 out << text;
}

void print(const std::string& text, std::ostream& out) {
 out << text;
}' > sources/print.cpp && echo '#include "print.hpp"

int main() {
 print("Hello, World!");
}' > examples/example1.cpp && echo '#include "print.hpp"
#include <fstream>

int main() {
 std::ofstream file("log.txt");
 print("hello", file);
}' > examples/example2.cpp && g++ -std=c++11 -I./include -c sources/print.cpp && ar rvs print.a print.o && g++ -std=c++11 -I./include -c examples/example1.cpp && g++ example1.o print.a -o example1 && ./example1 && g++ -std=c++11 -I./include -c examples/example2.cpp && g++ example2.o print.a -o example2 && ./example2 && cat log.txt && rm -rf *.o *.a example1 example2 log.txt && echo 'cmake_minimum_required(VERSION 3.4)
project(print)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(print STATIC sources/print.cpp)

include_directories(include)

add_executable(example1 examples/example1.cpp)
add_executable(example2 examples/example2.cpp)

target_link_libraries(example1 print)
target_link_libraries(example2 print)' > CMakeLists.txt && cmake -H. -B_build && cmake --build _build && _build/example1 && _build/example2 && cat log.txt && git add . && git commit -m "Complete lab03 implementation" && git push origin master && popd && export LAB_NUMBER=03 && mkdir -p tasks && git clone "https://github.com/tp-labs/lab${LAB_NUMBER}" tasks/lab${LAB_NUMBER} && mkdir -p reports && mkdir -p reports/lab${LAB_NUMBER} && cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md && cd reports/lab${LAB_NUMBER} && echo "Report created" >> REPORT.md
~/mrglist3431/workspace ~/mrglist3431/workspace ~/mrglist3431/workspace
fatal: destination path 'projects/lab03' already exists and is not an empty directory.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ ls
lab02  lab3  master  node  projects  reports  scripts  tasks
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ projects
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ls
homework2  lab02  lab03  lab_2  TP_lab03  TP_lab3
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ lab03
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ ls   
sources
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ sources                
                                                                                                                   
┌──(kali㉿kali)-[~/…/workspace/projects/lab03/sources]
└─$ ls
print.cpp
                                                                                                                   
┌──(kali㉿kali)-[~/…/workspace/projects/lab03/sources]
└─$ rm print.cpp
                                                                                                                   
┌──(kali㉿kali)-[~/…/workspace/projects/lab03/sources]
└─$ ..
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ ls
sources
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ rmdir sources
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ ..
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ls
homework2  lab02  lab03  lab_2  TP_lab03  TP_lab3
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir lab03  
rmdir: failed to remove 'lab03': Directory not empty
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ lab03
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ ls   
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ ..
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir kab03
rmdir: failed to remove 'kab03': No such file or directory
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir -r lab03
rmdir: invalid option -- 'r'
Try 'rmdir --help' for more information.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir -f lab03
rmdir: invalid option -- 'f'
Try 'rmdir --help' for more information.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir --help                          
Usage: rmdir [OPTION]... DIRECTORY...
Remove the DIRECTORY(ies), if they are empty.

      --ignore-fail-on-non-empty
                    ignore each failure to remove a non-empty directory
  -p, --parents     remove DIRECTORY and its ancestors;
                    e.g., 'rmdir -p a/b' is similar to 'rmdir a/b a'

  -v, --verbose     output a diagnostic for every directory processed
      --help        display this help and exit
      --version     output version information and exit

GNU coreutils online help: <https://www.gnu.org/software/coreutils/>
Full documentation <https://www.gnu.org/software/coreutils/rmdir>
or available locally via: info '(coreutils) rmdir invocation'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir --ignore-fail-on-non-empty lab03
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ls
homework2  lab02  lab03  lab_2  TP_lab03  TP_lab3
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir lab03                           
rmdir: failed to remove 'lab03': Directory not empty
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rm -rf lab03   
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ls
homework2  lab02  lab_2  TP_lab03  TP_lab3
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ export GITHUB_USERNAME=mrglist3431 && cd ~ && mkdir -p ${GITHUB_USERNAME}/workspace && cd ${GITHUB_USERNAME}/workspace && pushd . && git clone "https://mrglist3431:gUSH53@github.com/mrglist3431/lab02.git" projects/lab03 && cd projects/lab03 && git remote remove origin && git remote add origin "https://mrglist3431:gb.com/mrglist3431/lab03.git" && mkdir -p include sources examples && echo "#include <iostream>
#include <fstream>
#include <string>

void print(const std::string& text, std::ofstream& out);
void print(const std::string& text, std::ostream& out = std::cout);" > include/print.hpp && echo '#include "print.hpp"
#include <fstream>
#include <string>

void print(const std::string& text, std::ofstream& out) {
 out << text;
}

void print(const std::string& text, std::ostream& out) {
 out << text;
}' > sources/print.cpp && echo '#include "print.hpp"

int main() {
 print("Hello, World!");
}' > examples/example1.cpp && echo '#include "print.hpp"
#include <fstream>

int main() {
 std::ofstream file("log.txt");
 print("hello", file);
}' > examples/example2.cpp && g++ -std=c++11 -I./include -c sources/print.cpp && ar rvs print.a print.o && g++ -std=c++11 -I./include -c examples/example1.cpp && g++ example1.o print.a -o example1 && ./example1 && g++ -std=c++11 -I./include -c examples/example2.cpp && g++ example2.o print.a -o example2 && ./example2 && cat log.txt && rm -rf *.o *.a example1 example2 log.txt && echo 'cmake_minimum_required(VERSION 3.4)
project(print)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(print STATIC sources/print.cpp)

include_directories(include)

add_executable(example1 examples/example1.cpp)
add_executable(example2 examples/example2.cpp)

target_link_libraries(example1 print)
target_link_libraries(example2 print)' > CMakeLists.txt && cmake -H. -B_build && cmake --build _build && _build/example1 && _build/example2 && cat log.txt && git add . && git commit -m "Complete lab03 implementation" && git push origin master && popd && export LAB_NUMBER=03 && mkdir -p tasks && git clone "https://github.com/tp-labs/lab${LAB_NUMBER}" tasks/lab${LAB_NUMBER} && mkdir -p reports && mkdir -p reports/lab${LAB_NUMBER} && cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md && cd reports/lab${LAB_NUMBER} && echo "Report created" >> REPORT.md
~/mrglist3431/workspace ~/mrglist3431/workspace ~/mrglist3431/workspace ~/mrglist3431/workspace
Cloning into 'projects/lab03'...
remote: Enumerating objects: 18, done.
remote: Counting objects: 100% (18/18), done.
remote: Compressing objects: 100% (12/12), done.
remote: Total 18 (delta 0), reused 9 (delta 0), pack-reused 0 (from 0)
Receiving objects: 100% (18/18), 6.43 KiB | 6.43 MiB/s, done.
ar: creating print.a
a - print.o
Hello, World!helloCMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
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
-- Configuring done (0.5s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/projects/lab03/_build
[ 16%] Building CXX object CMakeFiles/print.dir/sources/print.cpp.o
[ 33%] Linking CXX static library libprint.a
[ 33%] Built target print
[ 50%] Building CXX object CMakeFiles/example1.dir/examples/example1.cpp.o
[ 66%] Linking CXX executable example1
[ 66%] Built target example1
[ 83%] Building CXX object CMakeFiles/example2.dir/examples/example2.cpp.o
[100%] Linking CXX executable example2
[100%] Built target example2
Hello, World!hello[main 117d268] Complete lab03 implementation
 6 files changed, 45 insertions(+)
 create mode 100644 CMakeLists.txt
 create mode 100644 examples/example1.cpp
 create mode 100644 examples/example2.cpp
 create mode 100644 include/print.hpp
 create mode 100644 log.txt
 create mode 100644 sources/print.cpp
error: src refspec master does not match any
error: failed to push some refs to 'https://github.com/mrglist3431/lab03.git'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git branch -M main                                                   
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git push -u origin main
To https://github.com/mrglist3431/lab03.git
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'https://github.com/mrglist3431/lab03.git'
hint: Updates were rejected because the remote contains work that you do not                                       
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git push -u origin main --force
Enumerating objects: 20, done.
Counting objects: 100% (20/20), done.
Delta compression using up to 16 threads
Compressing objects: 100% (14/14), done.
Writing objects: 100% (20/20), 6.49 KiB | 6.49 MiB/s, done.
Total 20 (delta 2), reused 8 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (2/2), done.
To https://github.com/mrglist3431/lab03.git
 + be6e1e6...117d268 main -> main (forced update)
branch 'main' set up to track 'origin/main'.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ export GITHUB_USERNAME=mrglist3431 && cd ~ && mkdir -p ${GITHUB_USERNAME}/workspace && cd ${GITHUB_USERNAME}/workspace && pushd . && git clone "https://mrglist3431:g@github.com/mrglist3431/lab02.git" projects/lab03 && cd projects/lab03 && git remote remove origin && git remote add origin "https://mrglist3431:ghthub.com/mrglist3431/lab03.git" && mkdir -p include sources examples && echo "#include <iostream>
#include <fstream>
#include <string>

void print(const std::string& text, std::ofstream& out);
void print(const std::string& text, std::ostream& out = std::cout);" > include/print.hpp && echo '#include "print.hpp"
#include <fstream>
#include <string>

void print(const std::string& text, std::ofstream& out) {
 out << text;
}

void print(const std::string& text, std::ostream& out) {
 out << text;
}' > sources/print.cpp && echo '#include "print.hpp"

int main() {
 print("Hello, World!");
}' > examples/example1.cpp && echo '#include "print.hpp"
#include <fstream>

int main() {
 std::ofstream file("log.txt");
 print("hello", file);
}' > examples/example2.cpp && g++ -std=c++11 -I./include -c sources/print.cpp && ar rvs print.a print.o && g++ -std=c++11 -I./include -c examples/example1.cpp && g++ example1.o print.a -o example1 && ./example1 && g++ -std=c++11 -I./include -c examples/example2.cpp && g++ example2.o print.a -o example2 && ./example2 && cat log.txt && rm -rf *.o *.a example1 example2 log.txt && echo 'cmake_minimum_required(VERSION 3.4)
project(print)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(print STATIC sources/print.cpp)

include_directories(include)

add_executable(example1 examples/example1.cpp)
add_executable(example2 examples/example2.cpp)

target_link_libraries(example1 print)
target_link_libraries(example2 print)' > CMakeLists.txt && cmake -H.
~/mrglist3431/workspace ~/mrglist3431/workspace ~/mrglist3431/workspace ~/mrglist3431/workspace ~/mrglist3431/workspace
fatal: destination path 'projects/lab03' already exists and is not an empty directory.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ popd && \
export LAB_NUMBER=03 && \
mkdir -p tasks && \
git clone "https://github.com/tp-labs/lab${LAB_NUMBER}" tasks/lab${LAB_NUMBER} && \
mkdir -p reports && \
mkdir -p reports/lab${LAB_NUMBER} && \
cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md && \
cd reports/lab${LAB_NUMBER} && \
echo "Report created" >> REPORT.md
~/mrglist3431/workspace ~/mrglist3431/workspace ~/mrglist3431/workspace ~/mrglist3431/workspace
Cloning into 'tasks/lab03'...
remote: Enumerating objects: 91, done.
remote: Counting objects: 100% (30/30), done.
remote: Compressing objects: 100% (9/9), done.
remote: Total 91 (delta 23), reused 21 (delta 21), pack-reused 61 (from 1)
Receiving objects: 100% (91/91), 1.02 MiB | 3.07 MiB/s, done.
Resolving deltas: 100% (41/41), done.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ cd ~/mrglist3431/workspace/reports/lab03
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ cat REPORT.md
## Laboratory work III

Данная лабораторная работа посвещена изучению систем автоматизации сборки проекта на примере **CMake**

```sh
$ open https://cmake.org/
```

## Tasks

- [ ] 1. Создать публичный репозиторий с названием **lab03** на сервисе **GitHub**
- [ ] 2. Ознакомиться со ссылками учебного материала
- [ ] 3. Выполнить инструкцию учебного материала
- [ ] 4. Составить отчет и отправить ссылку личным сообщением в **Slack**

## Tutorial

```sh
$ export GITHUB_USERNAME=<имя_пользователя>
```

```sh
$ cd ${GITHUB_USERNAME}/workspace
$ pushd .
$ source scripts/activate
```

```sh
$ git clone https://github.com/${GITHUB_USERNAME}/lab02.git projects/lab03
$ cd projects/lab03
$ git remote remove origin
$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab03.git
```

```sh
$ g++ -std=c++11 -I./include -c sources/print.cpp
$ ls print.o
$ nm print.o | grep print
$ ar rvs print.a print.o
$ file print.a
$ g++ -std=c++11 -I./include -c examples/example1.cpp
$ ls example1.o
$ g++ example1.o print.a -o example1
$ ./example1 && echo
```

```sh
$ g++ -std=c++11 -I./include -c examples/example2.cpp
$ nm example2.o
$ g++ example2.o print.a -o example2
$ ./example2
$ cat log.txt && echo
```

```sh
$ rm -rf example1.o example2.o print.o
$ rm -rf print.a
$ rm -rf example1 example2
$ rm -rf log.txt
```

```sh
$ cat > CMakeLists.txt <<EOF
cmake_minimum_required(VERSION 3.4)
project(print)
EOF
```

```sh
$ cat >> CMakeLists.txt <<EOF
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
EOF
```

```sh
$ cat >> CMakeLists.txt <<EOF
add_library(print STATIC \${CMAKE_CURRENT_SOURCE_DIR}/sources/print.cpp)
EOF
```

```sh
$ cat >> CMakeLists.txt <<EOF
include_directories(\${CMAKE_CURRENT_SOURCE_DIR}/include)
EOF
```

```sh
$ cmake -H. -B_build
$ cmake --build _build
```

```sh
$ cat >> CMakeLists.txt <<EOF

add_executable(example1 \${CMAKE_CURRENT_SOURCE_DIR}/examples/example1.cpp)
add_executable(example2 \${CMAKE_CURRENT_SOURCE_DIR}/examples/example2.cpp)
EOF
```

```sh
$ cat >> CMakeLists.txt <<EOF

target_link_libraries(example1 print)
target_link_libraries(example2 print)
EOF
```

```sh
$ cmake --build _build
$ cmake --build _build --target print
$ cmake --build _build --target example1
$ cmake --build _build --target example2
```

```sh
$ ls -la _build/libprint.a
$ _build/example1 && echo
hello
$ _build/example2
$ cat log.txt && echo
hello
$ rm -rf log.txt
```

```sh
$ git clone https://github.com/tp-labs/lab03 tmp
$ mv -f tmp/CMakeLists.txt .
$ rm -rf tmp
```

```sh
$ cat CMakeLists.txt
$ cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=_install
$ cmake --build _build --target install
$ tree _install
```

```sh
$ git add CMakeLists.txt
$ git commit -m"added CMakeLists.txt"
$ git push origin master
```

## Report

```sh
$ popd
$ export LAB_NUMBER=03
$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER}
$ mkdir reports/lab${LAB_NUMBER}
$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md
$ cd reports/lab${LAB_NUMBER}
$ edit REPORT.md
$ gist REPORT.md
```

## Homework

Представьте, что вы стажер в компании "Formatter Inc.".
### Задание 1
Вам поручили перейти на систему автоматизированной сборки **CMake**.
Исходные файлы находятся в директории [formatter_lib](formatter_lib).
В этой директории находятся файлы для статической библиотеки *formatter*.
Создайте `CMakeList.txt` в директории [formatter_lib](formatter_lib),
с помощью которого можно будет собирать статическую библиотеку *formatter*.

### Задание 2
У компании "Formatter Inc." есть перспективная библиотека,
которая является расширением предыдущей библиотеки. Т.к. вы уже овладели
навыком созданием `CMakeList.txt` для статической библиотеки *formatter*, ваш 
руководитель поручает заняться созданием `CMakeList.txt` для библиотеки 
*formatter_ex*, которая в свою очередь использует библиотеку *formatter*.

### Задание 3
Конечно же ваша компания предоставляет примеры использования своих библиотек.
Чтобы продемонстрировать как работать с библиотекой *formatter_ex*,
вам необходимо создать два `CMakeList.txt` для двух простых приложений:
* *hello_world*, которое использует библиотеку *formatter_ex*;
* *solver*, приложение которое испольует статические библиотеки *formatter_ex* и *solver_lib*.

**Удачной стажировки!**

## Links
- [Основы сборки проектов на С/C++ при помощи CMake](https://eax.me/cmake/)
- [CMake Tutorial](http://neerc.ifmo.ru/wiki/index.php?title=CMake_Tutorial)
- [C++ Tutorial - make & CMake](https://www.bogotobogo.com/cplusplus/make.php)
- [Autotools](http://www.gnu.org/software/automake/manual/html_node/Autotools-Introduction.html)
- [CMake](https://cgold.readthedocs.io/en/latest/index.html)

```
Copyright (c) 2015-2021 The ISC Authors
```
Report created
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ nano REPORT.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git -C ~/mrglist3431/workspace/projects/lab03 status
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git add REPORT.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git commit -m "Добавлен отчёт по lab03"
[master (root-commit) 3d4a6c2] Добавлен отчёт по lab03
 1 file changed, 183 insertions(+)
 create mode 100644 reports/lab03/REPORT.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git push origin main
error: src refspec main does not match any
error: failed to push some refs to 'origin'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git branch -a
* master
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git checkout -b main
Switched to a new branch 'main'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git add .
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git commit -m "Initial commit"
On branch main
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        ../../lab02/
        ../../master/
        ../../node/
        ../../projects/
        ../lab01/
        ../lab02/
        ../lab_2/
        ../../scripts/
        ../../tasks/

nothing added to commit but untracked files present (use "git add" to track)
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ ls -la 
total 16
drwxrwxr-x 2 kali kali 4096 May 21 03:55 .
drwxrwxr-x 6 kali kali 4096 May 21 03:52 ..
-rw-rw-r-- 1 kali kali 5266 May 21 03:55 REPORT.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git add REPORT.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git commit -m "Добавлен отчет по lab03"
On branch main
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        ../../lab02/
        ../../master/
        ../../node/
        ../../projects/
        ../lab01/
        ../lab02/
        ../lab_2/
        ../../scripts/
        ../../tasks/

nothing added to commit but untracked files present (use "git add" to track)
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ it remote add origin https://mrglist3431:@github.com/mrglist3431/lab03.git
it: command not found
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git remote add origin https://mrglist3431:gh@github.com/mrglist3431/lab03.git
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git push -u origin main        
To https://github.com/mrglist3431/lab03.git
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'https://github.com/mrglist3431/lab03.git'
hint: Updates were rejected because the remote contains work that you do not                                       
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ rm -rf ~/mrglist3431/workspace/reports/lab03/.git
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ cd ~/mrglist3431/workspace/reports/lab03
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint:
hint:   git config --global init.defaultBranch <name>
hint:
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint:
hint:   git branch -m <name>
Initialized empty Git repository in /home/kali/mrglist3431/workspace/reports/lab03/.git/
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git branch -m main
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git add REPORT.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git commit -m "Initial commit for lab03 report"
[main (root-commit) a86ea22] Initial commit for lab03 report
 1 file changed, 183 insertions(+)
 create mode 100644 REPORT.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git remote add origin https://mrglist3431:53@github.com/mrglist3431/lab03.git
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git push -u origin main
To https://github.com/mrglist3431/lab03.git
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'https://github.com/mrglist3431/lab03.git'
hint: Updates were rejected because the remote contains work that you do not                                       
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git pull origin main --allow-unrelated-histories
remote: Enumerating objects: 20, done.
remote: Counting objects: 100% (20/20), done.
remote: Compressing objects: 100% (12/12), done.
remote: Total 20 (delta 2), reused 20 (delta 2), pack-reused 0 (from 0)
Unpacking objects: 100% (20/20), 6.47 KiB | 2.16 MiB/s, done.
From https://github.com/mrglist3431/lab03
 * branch            main       -> FETCH_HEAD
 * [new branch]      main       -> origin/main
hint: You have divergent branches and need to specify how to reconcile them.
hint: You can do so by running one of the following commands sometime before
hint: your next pull:
hint:
hint:   git config pull.rebase false  # merge
hint:   git config pull.rebase true   # rebase
hint:   git config pull.ff only       # fast-forward only
hint:
hint: You can replace "git config" with "git config --global" to set a default
hint: preference for all repositories. You can also pass --rebase, --no-rebase,
hint: or --ff-only on the command line to override the configured default per
hint: invocation.
fatal: Need to specify how to reconcile divergent branches.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git pull origin main --no-rebase
From https://github.com/mrglist3431/lab03
 * branch            main       -> FETCH_HEAD
fatal: refusing to merge unrelated histories
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git config --global pull.rebase false  # или true, если предпочитаете rebase
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git status
On branch main
nothing to commit, working tree clean
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git log --oneline --graph --all
* a86ea22 (HEAD -> main) Initial commit for lab03 report
* 117d268 (origin/main) Complete lab03 implementation
* 19be38b Update README.md
* 91cac6e Create .gitignore
* 680c164 Initial commit
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git remote -v
origin  https://mrglist3431:ggithub.com/mrglist3431/lab03.git (fetch)
origin  https://mrglist3431:g53@github.com/mrglist3431/lab03.git (push)
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ nano README.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git push -u origin main         
To https://github.com/mrglist3431/lab03.git
 ! [rejected]        main -> main (non-fast-forward)
error: failed to push some refs to 'https://github.com/mrglist3431/lab03.git'
hint: Updates were rejected because the tip of your current branch is behind                                       
hint: its remote counterpart. If you want to integrate the remote changes,
hint: use 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git pull origin main            
From https://github.com/mrglist3431/lab03
 * branch            main       -> FETCH_HEAD
fatal: refusing to merge unrelated histories
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git commit -m "README update"                                               
On branch main
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        README.md

nothing added to commit but untracked files present (use "git add" to track)
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git add README.md            
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git commit -m "README update"
[main 2cac56d] README update
 1 file changed, 819 insertions(+)
 create mode 100644 README.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git pull origin main         
From https://github.com/mrglist3431/lab03
 * branch            main       -> FETCH_HEAD
fatal: refusing to merge unrelated histories
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git pull origin main --no-rebase
From https://github.com/mrglist3431/lab03
 * branch            main       -> FETCH_HEAD
fatal: refusing to merge unrelated histories
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git pull origin main --allow-unrelated-histories
From https://github.com/mrglist3431/lab03
 * branch            main       -> FETCH_HEAD
Auto-merging README.md
CONFLICT (add/add): Merge conflict in README.md
Automatic merge failed; fix conflicts and then commit the result.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ ^[[200~git add .~
zsh: bad pattern: ^[[200~git
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git add .
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git commit -m "Объединение независимых историй"
[main 6f2b9be] Объединение независимых историй
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git push origin main
Enumerating objects: 11, done.
Counting objects: 100% (11/11), done.
Delta compression using up to 16 threads
Compressing objects: 100% (8/8), done.
Writing objects: 100% (9/9), 10.88 KiB | 10.88 MiB/s, done.
Total 9 (delta 2), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (2/2), completed with 1 local object.
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
remote:          - commit: 6f2b9be9f72b0e99e53247053aa8f3a8c227fa27
remote:            path: README.md:3
remote:          - commit: 6f2b9be9f72b0e99e53247053aa8f3a8c227fa27
remote:            path: README.md:3
remote:          - commit: 6f2b9be9f72b0e99e53247053aa8f3a8c227fa27
remote:            path: README.md:78
remote:          - commit: 6f2b9be9f72b0e99e53247053aa8f3a8c227fa27
remote:            path: README.md:78
remote:          - commit: 6f2b9be9f72b0e99e53247053aa8f3a8c227fa27
remote:            path: README.md:230
remote:     
remote:        (?) To push, remove secret from commit(s) or follow this URL to allow the secret.
remote:        https://github.com/mrglist3431/lab03/security/secret-scanning/unblock-secret/2xNrqKvzu8AhKn1jpl0wXNDz3uF
remote:     
remote: 
remote: 
To https://github.com/mrglist3431/lab03.git
 ! [remote rejected] main -> main (push declined due to repository rule violations)
error: failed to push some refs to 'https://github.com/mrglist3431/lab03.git'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git push -uf origin main
Enumerating objects: 11, done.
Counting objects: 100% (11/11), done.
Delta compression using up to 16 threads
Compressing objects: 100% (8/8), done.
Writing objects: 100% (9/9), 10.88 KiB | 10.88 MiB/s, done.
Total 9 (delta 2), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (2/2), completed with 1 local object.
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
remote:          - commit: 6f2b9be9f72b0e99e53247053aa8f3a8c227fa27
remote:            path: README.md:3
remote:          - commit: 6f2b9be9f72b0e99e53247053aa8f3a8c227fa27
remote:            path: README.md:3
remote:          - commit: 6f2b9be9f72b0e99e53247053aa8f3a8c227fa27
remote:            path: README.md:78
remote:          - commit: 6f2b9be9f72b0e99e53247053aa8f3a8c227fa27
remote:            path: README.md:78
remote:          - commit: 6f2b9be9f72b0e99e53247053aa8f3a8c227fa27
remote:            path: README.md:230
remote:     
remote:        (?) To push, remove secret from commit(s) or follow this URL to allow the secret.
remote:        https://github.com/mrglist3431/lab03/security/secret-scanning/unblock-secret/2xNrqKvzu8AhKn1jpl0wXNDz3uF
remote:     
remote: 
remote: 
To https://github.com/mrglist3431/lab03.git
 ! [remote rejected] main -> main (push declined due to repository rule violations)
error: failed to push some refs to 'https://github.com/mrglist3431/lab03.git'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git filter-repo --force --replace-text <(echo "gSH53==>REDACTED")
git: 'filter-repo' is not a git command. See 'git --help'.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ sudo apt update
sudo apt install git-filter-repo
[sudo] password for kali: 
Get:1 https://repo.steampowered.com/steam stable InRelease [2,858 B]
Get:2 http://kali.download/kali kali-rolling InRelease [41.5 kB]
Err:2 http://kali.download/kali kali-rolling InRelease
  Sub-process /usr/bin/sqv returned an error code (1), error message is: Missing key 827C8569F2518CC677FECA1AED65462EC8D5E4C5, which is needed to verify signature.
Fetched 44.3 kB in 1s (30.4 kB/s)
1382 packages can be upgraded. Run 'apt list --upgradable' to see them.
Warning: An error occurred during the signature verification. The repository is not updated and the previous index files will be used. GPG error: http://kali.download/kali kali-rolling InRelease: Sub-process /usr/bin/sqv returned an error code (1), error message is: Missing key 827C8569F2518CC677FECA1AED65462EC8D5E4C5, which is needed to verify signature.
Warning: Failed to fetch http://http.kali.org/kali/dists/kali-rolling/InRelease  Sub-process /usr/bin/sqv returned an error code (1), error message is: Missing key 827C8569F2518CC677FECA1AED65462EC8D5E4C5, which is needed to verify signature.
Warning: Some index files failed to download. They have been ignored, or old ones used instead.
Installing:                     
  git-filter-repo
                                                                                                                   
Summary:
  Upgrading: 0, Installing: 1, Removing: 0, Not Upgrading: 1382
  Download size: 133 kB
  Space needed: 420 kB / 331 GB available

Get:1 http://kali.download/kali kali-rolling/main amd64 git-filter-repo all 2.47.0-2 [133 kB]
Fetched 133 kB in 1s (118 kB/s)           
Selecting previously unselected package git-filter-repo.
(Reading database ... 410659 files and directories currently installed.)
Preparing to unpack .../git-filter-repo_2.47.0-2_all.deb ...
Unpacking git-filter-repo (2.47.0-2) ...
Setting up git-filter-repo (2.47.0-2) ...
Processing triggers for man-db (2.13.0-1) ...
Processing triggers for kali-menu (2024.4.0) ...
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git filter-repo --force \
  --replace-text <(echo "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==>REDACTED")
NOTICE: Removing 'origin' remote; see 'Why is my origin removed?'
        in the manual if you want to push back there.
        (was https://mrglist3431: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@github.com/mrglist3431/lab03.git)
Parsed 7 commits
New history written in 0.03 seconds; now repacking/cleaning...
Repacking your repo and cleaning out old unneeded objects
HEAD is now at cdaa997 Объединение независимых историй
Enumerating objects: 29, done.
Counting objects: 100% (29/29), done.
Delta compression using up to 16 threads
Compressing objects: 100% (22/22), done.
Writing objects: 100% (29/29), done.
Total 29 (delta 5), reused 0 (delta 0), pack-reused 0 (from 0)
Completely finished after 0.10 seconds.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git remote add origin https://github.com/mrglist3431/lab03.git
git push -uf origin main
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/mrglist3431/lab03.git/'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git remote add origin https://github.com/mrglist3431/lab03.git
git push -uf origin main
error: remote origin already exists.
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
Enumerating objects: 29, done.
Counting objects: 100% (29/29), done.
Delta compression using up to 16 threads
Compressing objects: 100% (17/17), done.
Writing objects: 100% (29/29), 12.68 KiB | 12.68 MiB/s, done.
Total 29 (delta 5), reused 29 (delta 5), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (5/5), done.
To https://github.com/mrglist3431/lab03.git
 + 117d268...cdaa997 main -> main (forced update)
branch 'main' set up to track 'origin/main'.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ mkdir -p formatter_lib && cd formatter_lib && echo 'cmake_minimum_required(VERSION 3.4)
project(formatter_lib)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_library(formatter_lib STATIC formatter.cpp)' > CMakeLists.txt && echo '#include "formatter.h"

std::string formatter(const std::string& text) {
    return "Formatted: " + text;
}' > formatter.cpp && echo '#pragma once
#include <string>
std::string formatter(const std::string& text);' > formatter.h && cmake -B build && cmake --build build && cd ..
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
-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/reports/lab03/formatter_lib/build
[ 50%] Building CXX object CMakeFiles/formatter_lib.dir/formatter.cpp.o
[100%] Linking CXX static library libformatter_lib.a
[100%] Built target formatter_lib
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ mkdir -p formatter_ex_lib && cd formatter_ex_lib && echo 'cmake_minimum_required(VERSION 3.4)
project(formatter_ex_lib)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(../formatter_lib formatter_lib_dir)
add_library(formatter_ex_lib STATIC formatter_ex.cpp)
target_include_directories(formatter_ex_lib PUBLIC ../formatter_lib)
target_link_libraries(formatter_ex_lib formatter_lib)' > CMakeLists.txt && echo '#include "formatter_ex.h"
#include "formatter.h"

std::string formatter_ex(const std::string& text) {
    return "[" + formatter(text) + "]";
}' > formatter_ex.cpp && echo '#pragma once
#include <string>
std::string formatter_ex(const std::string& text);' > formatter_ex.h && cmake -B build && cmake --build build && cd ..
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
CMake Deprecation Warning at /home/kali/mrglist3431/workspace/reports/lab03/formatter_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/reports/lab03/formatter_ex_lib/build
[ 25%] Building CXX object formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o
[ 50%] Linking CXX static library libformatter_lib.a
[ 50%] Built target formatter_lib
[ 75%] Building CXX object CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o
[100%] Linking CXX static library libformatter_ex_lib.a
[100%] Built target formatter_ex_lib
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ mkdir -p hello_world_application && cd hello_world_application && echo 'cmake_minimum_required(VERSION 3.4)
project(hello_world)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(../formatter_ex_lib formatter_ex_lib_dir)
add_executable(hello_world hello_world.cpp)
target_include_directories(hello_world PUBLIC ../formatter_ex_lib)
target_link_libraries(hello_world formatter_ex_lib)' > CMakeLists.txt && echo '#include "formatter_ex.h"
#include <iostream>

int main() {
    std::cout << formatter_ex("Hello, World!") << std::endl;
    return 0;
}' > hello_world.cpp && cmake -B build && cmake --build build && ./build/hello_world && cd ..
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
CMake Deprecation Warning at /home/kali/mrglist3431/workspace/reports/lab03/formatter_ex_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at /home/kali/mrglist3431/workspace/reports/lab03/formatter_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/reports/lab03/hello_world_application/build
[ 16%] Building CXX object formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o
[ 33%] Linking CXX static library libformatter_lib.a
[ 33%] Built target formatter_lib
[ 50%] Building CXX object formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o
[ 66%] Linking CXX static library libformatter_ex_lib.a
[ 66%] Built target formatter_ex_lib
[ 83%] Building CXX object CMakeFiles/hello_world.dir/hello_world.cpp.o
[100%] Linking CXX executable hello_world
[100%] Built target hello_world
[Formatted: Hello, World!]
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ mkdir -p solver_lib && cd solver_lib && echo 'cmake_minimum_required(VERSION 3.4)
project(solver_lib)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_library(solver_lib STATIC solver.cpp)' > CMakeLists.txt && echo '#include "solver.h"
#include <stdexcept>
#include <cmath>

void solve(float a, float b, float c, float& x1, float& x2) {
    float d = (b * b) - (4 * a * c);
    if (d < 0) throw std::logic_error{"error: discriminant < 0"};
    x1 = (-b - std::sqrt(d)) / (2 * a);
    x2 = (-b + std::sqrt(d)) / (2 * a);
}' > solver.cpp && echo '#pragma once
#include <stdexcept>
void solve(float a, float b, float c, float& x1, float& x2);' > solver.h && cd ..

mkdir -p solver_application && cd solver_application && echo 'cmake_minimum_required(VERSION 3.4)
project(solver)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(../formatter_ex_lib formatter_ex_lib_dir)
add_subdirectory(../solver_lib solver_lib_dir)
add_executable(solver equation.cpp)
target_include_directories(solver PUBLIC ../formatter_ex_lib ../solver_lib)
target_link_libraries(solver formatter_ex_lib solver_lib)' > CMakeLists.txt && echo '#include "formatter_ex.h"
#include "solver.h"
#include <iostream>

int main() {
    float a, b, c, x1, x2;
    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;
    
    try {
        solve(a, b, c, x1, x2);
        std::cout << formatter_ex("Solution: x1 = " + std::to_string(x1) + ", x2 = " + std::to_string(x2)) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}' > equation.cpp && cmake -B build && cmake --build build && echo -e "1\n-5\n6\n" | ./build/solver && cd ..
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
CMake Deprecation Warning at /home/kali/mrglist3431/workspace/reports/lab03/formatter_ex_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at /home/kali/mrglist3431/workspace/reports/lab03/formatter_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at /home/kali/mrglist3431/workspace/reports/lab03/solver_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/reports/lab03/solver_application/build
[ 12%] Building CXX object solver_lib_dir/CMakeFiles/solver_lib.dir/solver.cpp.o
[ 25%] Linking CXX static library libsolver_lib.a
[ 25%] Built target solver_lib
[ 37%] Building CXX object formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o
[ 50%] Linking CXX static library libformatter_lib.a
[ 50%] Built target formatter_lib
[ 62%] Building CXX object formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o
[ 75%] Linking CXX static library libformatter_ex_lib.a
[ 75%] Built target formatter_ex_lib
[ 87%] Building CXX object CMakeFiles/solver.dir/equation.cpp.o
[100%] Linking CXX executable solver
[100%] Built target solver
Enter a, b, c: [Formatted: Solution: x1 = 2.000000, x2 = 3.000000]
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ echo "Проверка всех заданий:" && \
echo "1. Библиотека formatter_lib:" && ls -la formatter_lib/build/libformatter_lib.a && \
echo "2. Библиотека formatter_ex_lib:" && ls -la formatter_ex_lib/build/libformatter_ex_lib.a && \
echo "3.1 Приложение hello_world:" && hello_world_application/build/hello_world && \
echo "3.2 Приложение solver:" && echo -e "1\n-5\n6\n" | solver_application/build/solver
Проверка всех заданий:
1. Библиотека formatter_lib:
-rw-rw-r-- 1 kali kali 6374 May 21 04:11 formatter_lib/build/libformatter_lib.a
2. Библиотека formatter_ex_lib:
-rw-rw-r-- 1 kali kali 5132 May 21 04:11 formatter_ex_lib/build/libformatter_ex_lib.a
3.1 Приложение hello_world:
[Formatted: Hello, World!]
3.2 Приложение solver:
Enter a, b, c: [Formatted: Solution: x1 = 2.000000, x2 = 3.000000]
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git add formatter_lib/ formatter_ex_lib/ hello_world_application/ solver_lib/ solver_application/
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   formatter_ex_lib/CMakeLists.txt
        new file:   formatter_ex_lib/formatter_ex.cpp
        new file:   formatter_ex_lib/formatter_ex.h
        new file:   formatter_lib/CMakeLists.txt
        new file:   formatter_lib/formatter.cpp
        new file:   formatter_lib/formatter.h
        new file:   hello_world_application/CMakeLists.txt
        new file:   hello_world_application/hello_world.cpp
        new file:   solver_application/CMakeLists.txt
        new file:   solver_application/equation.cpp
        new file:   solver_lib/CMakeLists.txt
        new file:   solver_lib/solver.cpp
        new file:   solver_lib/solver.h

                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ git commit -m "Добавлены все файлы для homework: библиотеки formatter, formatter_ex и приложения hello_world, solver"
[main 9b8ca17] Добавлены все файлы для homework: библиотеки formatter, formatter_ex и приложения hello_world, solver
 13 files changed, 89 insertions(+)
 create mode 100644 formatter_ex_lib/CMakeLists.txt
 create mode 100644 formatter_ex_lib/formatter_ex.cpp
 create mode 100644 formatter_ex_lib/formatter_ex.h
 create mode 100644 formatter_lib/CMakeLists.txt
 create mode 100644 formatter_lib/formatter.cpp
 create mode 100644 formatter_lib/formatter.h
 create mode 100644 hello_world_application/CMakeLists.txt
 create mode 100644 hello_world_application/hello_world.cpp
 create mode 100644 solver_application/CMakeLists.txt
 create mode 100644 solver_application/equation.cpp
 create mode 100644 solver_lib/CMakeLists.txt
 create mode 100644 solver_lib/solver.cpp
 create mode 100644 solver_lib/solver.h
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ # Переходим в директорию с отчетом
cd ~/mrglist3431/workspace/reports/lab03

# Добавляем раздел с homework
echo -e "\n## Homework\n\n### Задание 1: Статическая библиотека formatter\n\nДобавлен CMakeLists.txt для сборки статической библиотеки formatter.\n\n### Задание 2: Библиотека formatter_ex\n\nСоздан CMakeLists.txt для библиотеки-расширения, использующей formatter.\n\n### Задание 3: Примеры использования\n\n1. Приложение hello_world - демонстрирует работу с formatter_ex\n2. Приложение solver - решает квадратные уравнения, используя formatter_ex и solver_lib\n\nВсе файлы успешно собраны и проверены." >> REPORT.md

# Добавляем отчет в Git
git add REPORT.md
git commit -m "Добавлен отчет по homework в REPORT.md"
[main b65e024] Добавлен отчет по homework в REPORT.md
 1 file changed, 17 insertions(+)
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab03]
└─$ cd ~/mrglist3431/workspace/projects/lab03
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git push origin main
To https://github.com/mrglist3431/lab03.git
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'https://github.com/mrglist3431/lab03.git'
hint: Updates were rejected because the remote contains work that you do not                                       
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git pull origin main --allow-unrelated-histories
remote: Enumerating objects: 29, done.
remote: Counting objects: 100% (29/29), done.
remote: Compressing objects: 100% (17/17), done.
remote: Total 29 (delta 5), reused 29 (delta 5), pack-reused 0 (from 0)
Unpacking objects: 100% (29/29), 12.66 KiB | 288.00 KiB/s, done.
From https://github.com/mrglist3431/lab03
 * branch            main       -> FETCH_HEAD
 + 117d268...cdaa997 main       -> origin/main  (forced update)
Auto-merging README.md
CONFLICT (add/add): Merge conflict in README.md
Automatic merge failed; fix conflicts and then commit the result.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git pull origin main                            
error: Pulling is not possible because you have unmerged files.
hint: Fix them up in the work tree, and then use 'git add/rm <file>'
hint: as appropriate to mark resolution and make a commit.
fatal: Exiting because of an unresolved conflict.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git push -uf origin main
Enumerating objects: 20, done.
Counting objects: 100% (20/20), done.
Delta compression using up to 16 threads
Compressing objects: 100% (14/14), done.
Writing objects: 100% (20/20), 6.49 KiB | 6.49 MiB/s, done.
Total 20 (delta 2), reused 8 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (2/2), done.
To https://github.com/mrglist3431/lab03.git
 + cdaa997...117d268 main -> main (forced update)
branch 'main' set up to track 'origin/main'.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git status
git log --oneline --graph --all
On branch main
Your branch is up to date with 'origin/main'.

You have unmerged paths.
  (fix conflicts and run "git commit")
  (use "git merge --abort" to abort the merge)

Changes to be committed:
        new file:   REPORT.md

Unmerged paths:
  (use "git add <file>..." to mark resolution)
        both added:      README.md

* 117d268 (HEAD -> main, origin/main) Complete lab03 implementation
* 19be38b Update README.md
* 91cac6e Create .gitignore
* 680c164 Initial commit
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ # Возвращаемся в корень репозитория
cd ~/mrglist3431/workspace/projects/lab03

# Отправляем изменения
git push origin main
Everything up-to-date
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ # Проверяем статус
git status

# Смотрим историю коммитов
git log --oneline -n 3
On branch main
Your branch is up to date with 'origin/main'.

You have unmerged paths.
  (fix conflicts and run "git commit")
  (use "git merge --abort" to abort the merge)

Changes to be committed:
        new file:   REPORT.md

Unmerged paths:
  (use "git add <file>..." to mark resolution)
        both added:      README.md

117d268 (HEAD -> main, origin/main) Complete lab03 implementation
19be38b Update README.md
91cac6e Create .gitignore
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ # Переходим в корень репозитория
cd ~/mrglist3431/workspace/projects/lab03

# Пробуем найти последний коммит
git reflog

# Восстанавливаем последнее состояние (замените HASH на последний коммит из reflog)
git reset --hard HEAD@{1}
117d268 (HEAD -> main, origin/main) HEAD@{0}: Branch: renamed refs/heads/main to refs/heads/main
117d268 (HEAD -> main, origin/main) HEAD@{2}: commit: Complete lab03 implementation
19be38b HEAD@{3}: clone: from https://github.com/mrglist3431/lab02.git
warning: log for ref HEAD has gap after Wed, 21 May 2025 03:50:08 +0300
warning: log for ref HEAD has gap after Wed, 21 May 2025 03:50:08 +0300
fatal: Could not parse object 'HEAD@{1}'.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ cd ~/mrglist3431/workspace/projects/lab03
git status
git log --oneline
On branch main
Your branch is up to date with 'origin/main'.

You have unmerged paths.
  (fix conflicts and run "git commit")
  (use "git merge --abort" to abort the merge)

Changes to be committed:
        new file:   REPORT.md

Unmerged paths:
  (use "git add <file>..." to mark resolution)
        both added:      README.md

117d268 (HEAD -> main, origin/main) Complete lab03 implementation
19be38b Update README.md
91cac6e Create .gitignore
680c164 Initial commit
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git reset --hard 117d268
HEAD is now at 117d268 Complete lab03 implementation
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ cd ~/mrglist3431/workspace/projects
rm -rf lab03
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ # Создаем корневую директорию
mkdir -p ~/mrglist3431/workspace/projects/lab03
cd ~/mrglist3431/workspace/projects/lab03
git init
git branch -M main

# Создаем базовую структуру
mkdir -p formatter_lib formatter_ex_lib hello_world_application solver_lib solver_application
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint:
hint:   git config --global init.defaultBranch <name>
hint:
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint:
hint:   git branch -m <name>
Initialized empty Git repository in /home/kali/mrglist3431/workspace/projects/lab03/.git/
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git config --global init.defaultBranch main
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git branch -m main
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ # Создаем структуру проекта
mkdir -p formatter_lib formatter_ex_lib hello_world_application solver_lib solver_application

# Создаем файлы для formatter_lib
cat > formatter_lib/CMakeLists.txt << 'EOF'
cmake_minimum_required(VERSION 3.4)
project(formatter_lib)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_library(formatter_lib STATIC formatter.cpp)
EOF

cat > formatter_lib/formatter.h << 'EOF'
#pragma once
#include <string>
std::string formatter(const std::string& text);
EOF

cat > formatter_lib/formatter.cpp << 'EOF'
#include "formatter.h"
std::string formatter(const std::string& text) {
    return "Formatted: " + text;
}
EOF

# Продолжаем создавать остальные файлы как в предыдущем руководстве...
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ # CMakeLists.txt
cat > formatter_ex_lib/CMakeLists.txt << 'EOF'
cmake_minimum_required(VERSION 3.4)
project(formatter_ex_lib)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(../formatter_lib formatter_lib_dir)
add_library(formatter_ex_lib STATIC formatter_ex.cpp)
target_include_directories(formatter_ex_lib PUBLIC ../formatter_lib)
target_link_libraries(formatter_ex_lib formatter_lib)
EOF

# formatter_ex.h
cat > formatter_ex_lib/formatter_ex.h << 'EOF'
#pragma once
#include <string>
std::string formatter_ex(const std::string& text);
EOF

# formatter_ex.cpp
cat > formatter_ex_lib/formatter_ex.cpp << 'EOF'
#include "formatter_ex.h"
#include "formatter.h"
std::string formatter_ex(const std::string& text) {
    return "[" + formatter(text) + "]";
}
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ # CMakeLists.txt
cat > hello_world_application/CMakeLists.txt << 'EOF'
cmake_minimum_required(VERSION 3.4)
project(hello_world)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(../formatter_ex_lib formatter_ex_lib_dir)
add_executable(hello_world hello_world.cpp)
target_include_directories(hello_world PUBLIC ../formatter_ex_lib)
target_link_libraries(hello_world formatter_ex_lib)
EOF

# hello_world.cpp
cat > hello_world_application/hello_world.cpp << 'EOF'
#include "formatter_ex.h"
#include <iostream>
int main() {
    std::cout << formatter_ex("Hello, World!") << std::endl;
    return 0;
}
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ # solver_lib/CMakeLists.txt
cat > solver_lib/CMakeLists.txt << 'EOF'
cmake_minimum_required(VERSION 3.4)
project(solver_lib)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_library(solver_lib STATIC solver.cpp)
EOF

# solver.h
cat > solver_lib/solver.h << 'EOF'
#pragma once
#include <stdexcept>
void solve(float a, float b, float c, float& x1, float& x2);
EOF

# solver.cpp
cat > solver_lib/solver.cpp << 'EOF'
#include "solver.h"
#include <stdexcept>
#include <cmath>
void solve(float a, float b, float c, float& x1, float& x2) {
    float d = (b * b) - (4 * a * c);
    if (d < 0) throw std::logic_error{"error: discriminant < 0"};
    x1 = (-b - std::sqrt(d)) / (2 * a);
    x2 = (-b + std::sqrt(d)) / (2 * a);
}
EOF

# solver_application/CMakeLists.txt
cat > solver_application/CMakeLists.txt << 'EOF'
cmake_minimum_required(VERSION 3.4)
project(solver)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(../formatter_ex_lib formatter_ex_lib_dir)
add_subdirectory(../solver_lib solver_lib_dir)
add_executable(solver equation.cpp)
target_include_directories(solver PUBLIC ../formatter_ex_lib ../solver_lib)
target_link_libraries(solver formatter_ex_lib solver_lib)
EOF

# equation.cpp
cat > solver_application/equation.cpp << 'EOF'
#include "formatter_ex.h"
#include "solver.h"
#include <iostream>
int main() {
    float a, b, c, x1, x2;
    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;
    try {
        solve(a, b, c, x1, x2);
        std::cout << formatter_ex("Solution: x1 = " + std::to_string(x1) + 
                     ", x2 = " + std::to_string(x2)) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ # Форматирующий модуль
cd formatter_lib && cmake -B build && cmake --build build && cd ..

# Расширенный форматирующий модуль
cd formatter_ex_lib && cmake -B build && cmake --build build && cd ..

# Приложение hello_world
cd hello_world_application && cmake -B build && cmake --build build && ./build/hello_world && cd ..

# Приложение solver
cd solver_application && cmake -B build && cmake --build build && echo -e "1\n-5\n6" | ./build/solver && cd ..
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
-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/projects/lab03/formatter_lib/build
[ 50%] Building CXX object CMakeFiles/formatter_lib.dir/formatter.cpp.o
[100%] Linking CXX static library libformatter_lib.a
[100%] Built target formatter_lib
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
CMake Deprecation Warning at /home/kali/mrglist3431/workspace/projects/lab03/formatter_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/projects/lab03/formatter_ex_lib/build
[ 25%] Building CXX object formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o
[ 50%] Linking CXX static library libformatter_lib.a
[ 50%] Built target formatter_lib
[ 75%] Building CXX object CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o
[100%] Linking CXX static library libformatter_ex_lib.a
[100%] Built target formatter_ex_lib
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
CMake Deprecation Warning at /home/kali/mrglist3431/workspace/projects/lab03/formatter_ex_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at /home/kali/mrglist3431/workspace/projects/lab03/formatter_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/projects/lab03/hello_world_application/build
[ 16%] Building CXX object formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o
[ 33%] Linking CXX static library libformatter_lib.a
[ 33%] Built target formatter_lib
[ 50%] Building CXX object formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o
[ 66%] Linking CXX static library libformatter_ex_lib.a
[ 66%] Built target formatter_ex_lib
[ 83%] Building CXX object CMakeFiles/hello_world.dir/hello_world.cpp.o
[100%] Linking CXX executable hello_world
[100%] Built target hello_world
[Formatted: Hello, World!]
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
CMake Deprecation Warning at /home/kali/mrglist3431/workspace/projects/lab03/formatter_ex_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at /home/kali/mrglist3431/workspace/projects/lab03/formatter_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at /home/kali/mrglist3431/workspace/projects/lab03/solver_lib/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/kali/mrglist3431/workspace/projects/lab03/solver_application/build
[ 12%] Building CXX object solver_lib_dir/CMakeFiles/solver_lib.dir/solver.cpp.o
[ 25%] Linking CXX static library libsolver_lib.a
[ 25%] Built target solver_lib
[ 37%] Building CXX object formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o
[ 50%] Linking CXX static library libformatter_lib.a
[ 50%] Built target formatter_lib
[ 62%] Building CXX object formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o
[ 75%] Linking CXX static library libformatter_ex_lib.a
[ 75%] Built target formatter_ex_lib
[ 87%] Building CXX object CMakeFiles/solver.dir/equation.cpp.o
[100%] Linking CXX executable solver
[100%] Built target solver
Enter a, b, c: [Formatted: Solution: x1 = 2.000000, x2 = 3.000000]
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git add .
git commit -m "Complete lab03 homework implementation"
git remote add origin https://github.com/mrglist3431/lab03.git
git push -u origin main
[main (root-commit) 1dd08a7] Complete lab03 homework implementation
 241 files changed, 18821 insertions(+)
 create mode 100644 formatter_ex_lib/CMakeLists.txt
 create mode 100644 formatter_ex_lib/build/CMakeCache.txt
 create mode 100644 formatter_ex_lib/build/CMakeFiles/3.30.5/CMakeCCompiler.cmake
 create mode 100644 formatter_ex_lib/build/CMakeFiles/3.30.5/CMakeCXXCompiler.cmake
 create mode 100755 formatter_ex_lib/build/CMakeFiles/3.30.5/CMakeDetermineCompilerABI_C.bin
 create mode 100755 formatter_ex_lib/build/CMakeFiles/3.30.5/CMakeDetermineCompilerABI_CXX.bin
 create mode 100644 formatter_ex_lib/build/CMakeFiles/3.30.5/CMakeSystem.cmake
 create mode 100644 formatter_ex_lib/build/CMakeFiles/3.30.5/CompilerIdC/CMakeCCompilerId.c
 create mode 100755 formatter_ex_lib/build/CMakeFiles/3.30.5/CompilerIdC/a.out
 create mode 100644 formatter_ex_lib/build/CMakeFiles/3.30.5/CompilerIdCXX/CMakeCXXCompilerId.cpp
 create mode 100755 formatter_ex_lib/build/CMakeFiles/3.30.5/CompilerIdCXX/a.out
 create mode 100644 formatter_ex_lib/build/CMakeFiles/CMakeConfigureLog.yaml
 create mode 100644 formatter_ex_lib/build/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 formatter_ex_lib/build/CMakeFiles/Makefile.cmake
 create mode 100644 formatter_ex_lib/build/CMakeFiles/Makefile2
 create mode 100644 formatter_ex_lib/build/CMakeFiles/TargetDirectories.txt
 create mode 100644 formatter_ex_lib/build/CMakeFiles/cmake.check_cache
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/DependInfo.cmake
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/build.make
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/cmake_clean.cmake
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/cmake_clean_target.cmake
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/compiler_depend.make
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/compiler_depend.ts
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/depend.make
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/flags.make
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o.d
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/link.txt
 create mode 100644 formatter_ex_lib/build/CMakeFiles/formatter_ex_lib.dir/progress.make
 create mode 100644 formatter_ex_lib/build/CMakeFiles/progress.marks
 create mode 100644 formatter_ex_lib/build/Makefile
 create mode 100644 formatter_ex_lib/build/cmake_install.cmake
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/DependInfo.cmake
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/build.make
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/cmake_clean.cmake
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/cmake_clean_target.cmake
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/compiler_depend.make
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/compiler_depend.ts
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/depend.make
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/flags.make
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o.d
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/link.txt
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/formatter_lib.dir/progress.make
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/CMakeFiles/progress.marks
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/Makefile
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/cmake_install.cmake
 create mode 100644 formatter_ex_lib/build/formatter_lib_dir/libformatter_lib.a
 create mode 100644 formatter_ex_lib/build/libformatter_ex_lib.a
 create mode 100644 formatter_ex_lib/formatter_ex.cpp
 create mode 100644 formatter_ex_lib/formatter_ex.h
 create mode 100644 formatter_lib/CMakeLists.txt
 create mode 100644 formatter_lib/build/CMakeCache.txt
 create mode 100644 formatter_lib/build/CMakeFiles/3.30.5/CMakeCCompiler.cmake
 create mode 100644 formatter_lib/build/CMakeFiles/3.30.5/CMakeCXXCompiler.cmake
 create mode 100755 formatter_lib/build/CMakeFiles/3.30.5/CMakeDetermineCompilerABI_C.bin
 create mode 100755 formatter_lib/build/CMakeFiles/3.30.5/CMakeDetermineCompilerABI_CXX.bin
 create mode 100644 formatter_lib/build/CMakeFiles/3.30.5/CMakeSystem.cmake
 create mode 100644 formatter_lib/build/CMakeFiles/3.30.5/CompilerIdC/CMakeCCompilerId.c
 create mode 100755 formatter_lib/build/CMakeFiles/3.30.5/CompilerIdC/a.out
 create mode 100644 formatter_lib/build/CMakeFiles/3.30.5/CompilerIdCXX/CMakeCXXCompilerId.cpp
 create mode 100755 formatter_lib/build/CMakeFiles/3.30.5/CompilerIdCXX/a.out
 create mode 100644 formatter_lib/build/CMakeFiles/CMakeConfigureLog.yaml
 create mode 100644 formatter_lib/build/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 formatter_lib/build/CMakeFiles/Makefile.cmake
 create mode 100644 formatter_lib/build/CMakeFiles/Makefile2
 create mode 100644 formatter_lib/build/CMakeFiles/TargetDirectories.txt
 create mode 100644 formatter_lib/build/CMakeFiles/cmake.check_cache
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/DependInfo.cmake
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/build.make
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/cmake_clean.cmake
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/cmake_clean_target.cmake
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/compiler_depend.make
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/compiler_depend.ts
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/depend.make
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/flags.make
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/formatter.cpp.o
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/formatter.cpp.o.d
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/link.txt
 create mode 100644 formatter_lib/build/CMakeFiles/formatter_lib.dir/progress.make
 create mode 100644 formatter_lib/build/CMakeFiles/progress.marks
 create mode 100644 formatter_lib/build/Makefile
 create mode 100644 formatter_lib/build/cmake_install.cmake
 create mode 100644 formatter_lib/build/libformatter_lib.a
 create mode 100644 formatter_lib/formatter.cpp
 create mode 100644 formatter_lib/formatter.h
 create mode 100644 hello_world_application/CMakeLists.txt
 create mode 100644 hello_world_application/build/CMakeCache.txt
 create mode 100644 hello_world_application/build/CMakeFiles/3.30.5/CMakeCCompiler.cmake
 create mode 100644 hello_world_application/build/CMakeFiles/3.30.5/CMakeCXXCompiler.cmake
 create mode 100755 hello_world_application/build/CMakeFiles/3.30.5/CMakeDetermineCompilerABI_C.bin
 create mode 100755 hello_world_application/build/CMakeFiles/3.30.5/CMakeDetermineCompilerABI_CXX.bin
 create mode 100644 hello_world_application/build/CMakeFiles/3.30.5/CMakeSystem.cmake
 create mode 100644 hello_world_application/build/CMakeFiles/3.30.5/CompilerIdC/CMakeCCompilerId.c
 create mode 100755 hello_world_application/build/CMakeFiles/3.30.5/CompilerIdC/a.out
 create mode 100644 hello_world_application/build/CMakeFiles/3.30.5/CompilerIdCXX/CMakeCXXCompilerId.cpp
 create mode 100755 hello_world_application/build/CMakeFiles/3.30.5/CompilerIdCXX/a.out
 create mode 100644 hello_world_application/build/CMakeFiles/CMakeConfigureLog.yaml
 create mode 100644 hello_world_application/build/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 hello_world_application/build/CMakeFiles/Makefile.cmake
 create mode 100644 hello_world_application/build/CMakeFiles/Makefile2
 create mode 100644 hello_world_application/build/CMakeFiles/TargetDirectories.txt
 create mode 100644 hello_world_application/build/CMakeFiles/cmake.check_cache
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/DependInfo.cmake
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/build.make
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/cmake_clean.cmake
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/compiler_depend.make
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/compiler_depend.ts
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/depend.make
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/flags.make
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/hello_world.cpp.o
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/hello_world.cpp.o.d
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/link.txt
 create mode 100644 hello_world_application/build/CMakeFiles/hello_world.dir/progress.make
 create mode 100644 hello_world_application/build/CMakeFiles/progress.marks
 create mode 100644 hello_world_application/build/Makefile
 create mode 100644 hello_world_application/build/cmake_install.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/DependInfo.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/build.make
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/cmake_clean.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/cmake_clean_target.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/compiler_depend.make
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/compiler_depend.ts
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/depend.make
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/flags.make
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o.d
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/link.txt
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/progress.make
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/CMakeFiles/progress.marks
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/Makefile
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/cmake_install.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/DependInfo.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/build.make
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/cmake_clean.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/cmake_clean_target.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/compiler_depend.make
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/compiler_depend.ts
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/depend.make
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/flags.make
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o.d
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/link.txt
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/progress.make
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/progress.marks
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/Makefile
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/cmake_install.cmake
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/formatter_lib_dir/libformatter_lib.a
 create mode 100644 hello_world_application/build/formatter_ex_lib_dir/libformatter_ex_lib.a
 create mode 100755 hello_world_application/build/hello_world
 create mode 100644 hello_world_application/hello_world.cpp
 create mode 100644 solver_application/CMakeLists.txt
 create mode 100644 solver_application/build/CMakeCache.txt
 create mode 100644 solver_application/build/CMakeFiles/3.30.5/CMakeCCompiler.cmake
 create mode 100644 solver_application/build/CMakeFiles/3.30.5/CMakeCXXCompiler.cmake
 create mode 100755 solver_application/build/CMakeFiles/3.30.5/CMakeDetermineCompilerABI_C.bin
 create mode 100755 solver_application/build/CMakeFiles/3.30.5/CMakeDetermineCompilerABI_CXX.bin
 create mode 100644 solver_application/build/CMakeFiles/3.30.5/CMakeSystem.cmake
 create mode 100644 solver_application/build/CMakeFiles/3.30.5/CompilerIdC/CMakeCCompilerId.c
 create mode 100755 solver_application/build/CMakeFiles/3.30.5/CompilerIdC/a.out
 create mode 100644 solver_application/build/CMakeFiles/3.30.5/CompilerIdCXX/CMakeCXXCompilerId.cpp
 create mode 100755 solver_application/build/CMakeFiles/3.30.5/CompilerIdCXX/a.out
 create mode 100644 solver_application/build/CMakeFiles/CMakeConfigureLog.yaml
 create mode 100644 solver_application/build/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 solver_application/build/CMakeFiles/Makefile.cmake
 create mode 100644 solver_application/build/CMakeFiles/Makefile2
 create mode 100644 solver_application/build/CMakeFiles/TargetDirectories.txt
 create mode 100644 solver_application/build/CMakeFiles/cmake.check_cache
 create mode 100644 solver_application/build/CMakeFiles/progress.marks
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/DependInfo.cmake
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/build.make
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/cmake_clean.cmake
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/compiler_depend.make
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/compiler_depend.ts
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/depend.make
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/equation.cpp.o
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/equation.cpp.o.d
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/flags.make
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/link.txt
 create mode 100644 solver_application/build/CMakeFiles/solver.dir/progress.make
 create mode 100644 solver_application/build/Makefile
 create mode 100644 solver_application/build/cmake_install.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/DependInfo.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/build.make
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/cmake_clean.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/cmake_clean_target.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/compiler_depend.make
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/compiler_depend.ts
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/depend.make
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/flags.make
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/formatter_ex.cpp.o.d
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/link.txt
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/formatter_ex_lib.dir/progress.make
 create mode 100644 solver_application/build/formatter_ex_lib_dir/CMakeFiles/progress.marks
 create mode 100644 solver_application/build/formatter_ex_lib_dir/Makefile
 create mode 100644 solver_application/build/formatter_ex_lib_dir/cmake_install.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/DependInfo.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/build.make
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/cmake_clean.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/cmake_clean_target.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/compiler_depend.make
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/compiler_depend.ts
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/depend.make
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/flags.make
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/formatter.cpp.o.d
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/link.txt
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/formatter_lib.dir/progress.make
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/CMakeFiles/progress.marks
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/Makefile
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/cmake_install.cmake
 create mode 100644 solver_application/build/formatter_ex_lib_dir/formatter_lib_dir/libformatter_lib.a
 create mode 100644 solver_application/build/formatter_ex_lib_dir/libformatter_ex_lib.a
 create mode 100755 solver_application/build/solver
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/progress.marks
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/DependInfo.cmake
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/build.make
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/cmake_clean.cmake
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/cmake_clean_target.cmake
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/compiler_depend.make
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/compiler_depend.ts
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/depend.make
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/flags.make
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/link.txt
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/progress.make
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/solver.cpp.o
 create mode 100644 solver_application/build/solver_lib_dir/CMakeFiles/solver_lib.dir/solver.cpp.o.d
 create mode 100644 solver_application/build/solver_lib_dir/Makefile
 create mode 100644 solver_application/build/solver_lib_dir/cmake_install.cmake
 create mode 100644 solver_application/build/solver_lib_dir/libsolver_lib.a
 create mode 100644 solver_application/equation.cpp
 create mode 100644 solver_lib/CMakeLists.txt
 create mode 100644 solver_lib/solver.cpp
 create mode 100644 solver_lib/solver.h
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
To https://github.com/mrglist3431/lab03.git
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'https://github.com/mrglist3431/lab03.git'
hint: Updates were rejected because the remote contains work that you do not                                       
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git stash
No local changes to save
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git pull origin main --allow-unrelated-histories
remote: Enumerating objects: 20, done.
remote: Counting objects: 100% (20/20), done.
remote: Compressing objects: 100% (12/12), done.
remote: Total 20 (delta 2), reused 20 (delta 2), pack-reused 0 (from 0)
Unpacking objects: 100% (20/20), 6.47 KiB | 2.16 MiB/s, done.
From https://github.com/mrglist3431/lab03
 * branch            main       -> FETCH_HEAD
 * [new branch]      main       -> origin/main
Merge made by the 'ort' strategy.
 .gitignore            |   4 +
 CMakeLists.txt        |  15 +++
 README.md             | 466 +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 examples/example1.cpp |   5 +
 examples/example2.cpp |   7 ++
 include/print.hpp     |   6 ++
 log.txt               |   1 +
 sources/print.cpp     |  11 ++
 8 files changed, 515 insertions(+)
 create mode 100644 .gitignore
 create mode 100644 CMakeLists.txt
 create mode 100644 README.md
 create mode 100644 examples/example1.cpp
 create mode 100644 examples/example2.cpp
 create mode 100644 include/print.hpp
 create mode 100644 log.txt
 create mode 100644 sources/print.cpp
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git add .
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git commit
On branch main
nothing to commit, working tree clean
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ git push origin main
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
Enumerating objects: 190, done.
Counting objects: 100% (190/190), done.
Delta compression using up to 16 threads
Compressing objects: 100% (178/178), done.
Writing objects: 100% (189/189), 81.25 KiB | 4.06 MiB/s, done.
Total 189 (delta 91), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (91/91), done.
To https://github.com/mrglist3431/lab03.git
   117d268..ee4051b  main -> main
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab03]
└─$ 
