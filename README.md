# lab06
┌──(kali㉿kali)-[~]
└─$ export GITHUB_USERNAME=mrglist3431       
                                                                                                                   
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
└─$ cd projects/lab06              
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gsed -i 's/\(DCMAKE_INSTALL_PREFIX=_install\)/\1 -DBUILD_TESTS=ON/' .travis.yml
sed: can't read .travis.yml: No such file or directory
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$     cat > .travis.yml <<EOF
language: cpp

compiler:
  - gcc

script:
  - cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=_install -DBUILD_TESTS=ON
  - cmake --build _build --target install
  - cmake --build _build --target test -- ARGS=--verbose
EOF
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gsed -i 's/\(DCMAKE_INSTALL_PREFIX=_install\)/\1 -DBUILD_TESTS=ON/' .travis.yml
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gsed -i '/cmake --build _build --target install/a\
- cmake --build _build --target test -- ARGS=--verbose
' .travis.yml
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ travis lint

  ________                                 __
 /        |                               /  |
 ########/ ______    ______    __     __  ##/    _______
    ## |  /      \  /      \  /  \   /  | /  |  /       |
    ## | /######  | ######  | ##  \ /##/  ## | /#######/
    ## | ## |  ##/  /    ## |  ##  /##/   ## | ##      \
    ## | ## |      /####### |   ## ##/    ## |  ######  |
    ## | ## |      ##    ## |    ###/     ## | /     ##/
    ##/  ##/        #######/      #/      ##/  #######/

    TRajectory Analyzer and VISualizer  -  Open-source free software under GNU GPL v3

    Copyright (c) Martin Brehm      (2009-2022), University of Halle (Saale)
                  Martin Thomas     (2012-2022)
                  Sascha Gehrke     (2016-2022), University of Bonn
                  Barbara Kirchner  (2009-2022), University of Bonn

    http://www.travis-analyzer.de
                                                                                                                   
    Please cite: J. Chem. Phys. 2020, 152 (16), 164105.         (DOI 10.1063/5.0005078 )                           
                 J. Chem. Inf. Model. 2011, 51 (8), 2007-2023.  (DOI 10.1021/ci200217w )

    There is absolutely no warranty on any results obtained from TRAVIS.

 #  Running on kali at Tue Jun 10 10:16:11 2025 (PID 7302)
 #  Running in /home/kali/mrglist3431/workspace/projects/lab06
 #  Version: Jul 29 2022, built at Jan 14 2023, 12:32:45, compiler "12.2.0", GCC 12.2.0
 #  Target platform: Linux, __cplusplus=201703L, Compile flags: NEW_CHARGEVAR DEBUG_ARRAYS 
 #  Compiled with OpenMP, but USE_OMP not switched on in "config.h"!
 #  Machine: x86_64, char=1b, int=4b, long=8b, addr=8b, 0xA0B0C0D0=D0,C0,B0,A0.                                    
 #  Home: /home/kali,  Executable: /usr/bin/travis
 #  Input from terminal,  Output to terminal

    >>> Please use a color scheme with dark background or specify "-nocolor"! <<<

    Loading configuration from /home/kali/.travis.conf ...

Unknown parameter: "lint".
                                                                                                                   
    List of supported command line options:                                                                        
                                                                                                                   
      -p <file>       Load position data from specified trajectory file.                                           
                      Format may be *.xyz, *.pdb, *.lmp (LAMMPS), HISTORY (DLPOLY), POSCAR/XDATCAR (VASP),
                                    *.gro, *.dcd, or *.prmtop/*.mdcrd (Amber).
                      The bqb format (*.bqb, *.btr, *.emp, *.blist) as well as *.voronoi are also supported.
      -vel <file>     Read atom velocities from a file in addition to the position trajectory.
                      Currently, only .xyz format is supported for velocity data.
      -i <file>       Read input from specified text file.
      -c <file>       Read and execute control file (experimental).
      cubetool        Execute the CubeTool for modifying Gaussian Cube files.
      -sankey <file>  Create Sankey diagrams (file name is optional).
      -ramanfrompola  Compute Raman spectra from existing polarizability time series.
      (de-)compress   Start built-in bqbtool (compress trajectories to BQB format).
      check           Check BQB file integrity.

      -config <file>  Load the specified configuration file.
      -stream         Treat input trajectory as a stream (e.g. named pipe): No fseek, etc.
      -showconf       Show a tree structure of the configuration file.
      -writeconf      Write the default configuration file, including all defines values.

      -verbose        Show detailed information about what's going on.
      -nocolor        Execute TRAVIS in monochrome mode (suitable for white background).
      -dimcolor       Use dim instead of bright colors.

      -credits        Display a list of persons who contributed to TRAVIS.
      -help, -?       Shows this help.

    If only one argument is specified, it is assumed to be the name of a trajectory file.
    If no argument is specified at all, TRAVIS asks for the trajectory file to open.

    Note: To show a list of all persons who contributed to TRAVIS,
          please add "-credits" to your command line arguments, or set the
          variable "SHOWCREDITS" to "TRUE" in your travis.conf file.

    Source code from other projects used in TRAVIS:
      - lmfit     from Joachim Wuttke
      - kiss_fft  from Mark Borgerding                                                                             
      - voro++    from Chris Rycroft                                                                               
                                                                                                                   
    http://www.travis-analyzer.de
                                                                                                                   
    Please cite all of the following articles for the analyses you have used:                                      
                                                                                                                   
  * For TRAVIS in general:                                                                                         
                                                                                                                   
    "TRAVIS - A Free Analyzer for Trajectories from Molecular Simulation",                                         
    M. Brehm, M. Thomas, S. Gehrke, B. Kirchner; J. Chem. Phys. 2020, 152 (16), 164105.   (DOI 10.1063/5.0005078 ) 

    "TRAVIS - A Free Analyzer and Visualizer for Monte Carlo and Molecular Dynamics Trajectories",
    M. Brehm, B. Kirchner; J. Chem. Inf. Model. 2011, 51 (8), pp 2007-2023.   (DOI 10.1021/ci200217w )             

*** The End ***
                                                                                                                   
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$  git add .travis.yml
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git add tests
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git add -p
diff --git a/CMakeLists.txt b/CMakeLists.txt
index 76e55eb..ee61cab 100644
--- a/CMakeLists.txt
+++ b/CMakeLists.txt
@@ -13,3 +13,12 @@ add_executable(example2 examples/example2.cpp)
 
 target_link_libraries(example1 print)
 target_link_libraries(example2 print)
+
+if(BUILD_TESTS)
+  enable_testing()
+  add_subdirectory(third-party/gtest)
+  file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)
+  add_executable(check ${${PROJECT_NAME}_TEST_SOURCES})
+  target_link_libraries(check ${PROJECT_NAME} gtest_main)
+  add_test(NAME check COMMAND check)
+endif()
(1/1) Stage this hunk [y,n,q,a,d,e,p,?]? y

                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git commit -m"added tests"
[main e68f8f8] added tests
 3 files changed, 38 insertions(+)
 create mode 100644 .travis.yml
 create mode 100644 tests/test1.cpp
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git push origin master
error: src refspec master does not match any
error: failed to push some refs to 'https://github.com/mrglist3431/lab06'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ A
A: command not found
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$                                                                         gem install travis
^CERROR:  Interrupted
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ gem install travis
Fetching launchy-2.4.3.gem
Fetching faraday-retry-1.0.3.gem
Fetching websocket-1.2.11.gem
Fetching pusher-client-0.6.2.gem
Fetching json_pure-2.8.1.gem
Fetching net-http-pipeline-1.0.1.gem
Fetching net-http-persistent-2.9.4.gem
Fetching highline-2.1.0.gem
Fetching faraday-rack-1.0.0.gem
Fetching faraday-patron-1.0.0.gem
Fetching faraday-net_http_persistent-1.2.0.gem
Fetching faraday-net_http-1.0.2.gem
Fetching multipart-post-2.4.1.gem
Fetching faraday-multipart-1.1.0.gem
Fetching faraday-httpclient-1.0.1.gem
Fetching faraday-excon-1.1.0.gem
Fetching faraday-em_synchrony-1.0.0.gem
Fetching faraday-em_http-1.0.0.gem
Fetching faraday-1.10.4.gem
Fetching faraday_middleware-1.2.1.gem
Fetching thread_safe-0.3.6.gem
Fetching tzinfo-1.2.11.gem
Fetching concurrent-ruby-1.3.5.gem
Fetching activesupport-5.2.8.1.gem
Fetching travis-1.11.1.gem
Fetching gh-0.18.0.gem
ERROR:  While executing gem ... (Gem::FilePermissionError)
    You don't have write permissions for the /var/lib/gems/3.1.0 directory.
        /usr/lib/ruby/vendor_ruby/rubygems/installer.rb:713:in `verify_gem_home'
        /usr/lib/ruby/vendor_ruby/rubygems/installer.rb:903:in `pre_install_checks'
        /usr/lib/ruby/vendor_ruby/rubygems/installer.rb:303:in `install'
        /usr/lib/ruby/vendor_ruby/rubygems/resolver/specification.rb:105:in `install'
        /usr/lib/ruby/vendor_ruby/rubygems/request_set.rb:195:in `block in install'
        /usr/lib/ruby/vendor_ruby/rubygems/request_set.rb:183:in `each'
        /usr/lib/ruby/vendor_ruby/rubygems/request_set.rb:183:in `install'
        /usr/lib/ruby/vendor_ruby/rubygems/commands/install_command.rb:215:in `install_gem'
        /usr/lib/ruby/vendor_ruby/rubygems/commands/install_command.rb:231:in `block in install_gems'
        /usr/lib/ruby/vendor_ruby/rubygems/commands/install_command.rb:224:in `each'
        /usr/lib/ruby/vendor_ruby/rubygems/commands/install_command.rb:224:in `install_gems'
        /usr/lib/ruby/vendor_ruby/rubygems/commands/install_command.rb:170:in `execute'
        /usr/lib/ruby/vendor_ruby/rubygems/command.rb:328:in `invoke_with_build_args'
        /usr/lib/ruby/vendor_ruby/rubygems/command_manager.rb:253:in `invoke_command'
        /usr/lib/ruby/vendor_ruby/rubygems/command_manager.rb:193:in `process_args'
        /usr/lib/ruby/vendor_ruby/rubygems/command_manager.rb:151:in `run'
        /usr/lib/ruby/vendor_ruby/rubygems/gem_runner.rb:52:in `run'
        /usr/bin/gem:12:in `<main>'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git branch -M main
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git push -u origin main
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
To https://github.com/mrglist3431/lab06
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'https://github.com/mrglist3431/lab06'
hint: Updates were rejected because the remote contains work that you do not                                       
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull orign         
fatal: 'orign' does not appear to be a git repository
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull       
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Unpacking objects: 100% (3/3), 852 bytes | 852.00 KiB/s, done.
From https://github.com/mrglist3431/lab06
 * [new branch]      main       -> origin/main
There is no tracking information for the current branch.
Please specify which branch you want to merge with.
See git-pull(1) for details.

    git pull <remote> <branch>

If you wish to set tracking information for this branch you can do so with:

    git branch --set-upstream-to=origin/<branch> main

                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull master
fatal: 'master' does not appear to be a git repository
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull origin main  
From https://github.com/mrglist3431/lab06
 * branch            main       -> FETCH_HEAD
fatal: refusing to merge unrelated histories
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git add .travis.yml tests CMakeLists.txt
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git commit -m"added tests"
On branch main
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        README.md
        file.txt
        input.txt
        travis.log

nothing added to commit but untracked files present (use "git add" to track)
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git add README.md file.txt input.txt travis.log
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git commit -m"update"                          
[main 343f73d] update
 4 files changed, 102 insertions(+)
 create mode 100644 README.md
 create mode 100644 file.txt
 create mode 100644 input.txt
 create mode 100644 travis.log
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git push -u origin main
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
To https://github.com/mrglist3431/lab06
 ! [rejected]        main -> main (non-fast-forward)
error: failed to push some refs to 'https://github.com/mrglist3431/lab06'
hint: Updates were rejected because the tip of your current branch is behind                                       
hint: its remote counterpart. If you want to integrate the remote changes,
hint: use 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull origin main   
From https://github.com/mrglist3431/lab06
 * branch            main       -> FETCH_HEAD
fatal: refusing to merge unrelated histories
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git branch -M main  
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull origin main
From https://github.com/mrglist3431/lab06
 * branch            main       -> FETCH_HEAD
fatal: refusing to merge unrelated histories
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git commit -m"update"
On branch main
nothing to commit, working tree clean
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull             
There is no tracking information for the current branch.
Please specify which branch you want to merge with.
See git-pull(1) for details.

    git pull <remote> <branch>

If you wish to set tracking information for this branch you can do so with:

    git branch --set-upstream-to=origin/<branch> main

                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull origin main 
From https://github.com/mrglist3431/lab06
 * branch            main       -> FETCH_HEAD
fatal: refusing to merge unrelated histories
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git pull origin main --allow-unrelated-histories
From https://github.com/mrglist3431/lab06
 * branch            main       -> FETCH_HEAD
Auto-merging README.md
Merge made by the 'ort' strategy.
 README.md | 1 +
 1 file changed, 1 insertion(+)
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git push -u origin main                         
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
Enumerating objects: 246, done.
Counting objects: 100% (246/246), done.
Delta compression using up to 16 threads
Compressing objects: 100% (119/119), done.
Writing objects: 100% (244/244), 109.97 KiB | 109.97 MiB/s, done.
Total 244 (delta 106), reused 225 (delta 101), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (106/106), done.
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
remote:        https://github.com/mrglist3431/lab06/security/secret-scanning/unblock-secret/2yJ7oaHkv3quTuEMmvgLAjOmSwc
remote:     
remote: 
remote: 
To https://github.com/mrglist3431/lab06
 ! [remote rejected] main -> main (push declined due to repository rule violations)
error: failed to push some refs to 'https://github.com/mrglist3431/lab06'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ nano README.md            
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ 
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git push -u origin main
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
Enumerating objects: 246, done.
Counting objects: 100% (246/246), done.
Delta compression using up to 16 threads
Compressing objects: 100% (119/119), done.
Writing objects: 100% (244/244), 109.97 KiB | 109.97 MiB/s, done.
Total 244 (delta 106), reused 225 (delta 101), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (106/106), done.
To https://github.com/mrglist3431/lab06
   18c9dba..7302d55  main -> main
branch 'main' set up to track 'origin/main'.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ git push origin master 
error: src refspec master does not match any
error: failed to push some refs to 'https://github.com/mrglist3431/lab06'
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ travis login --auto
[Renaming existing File travis.log to #1#travis.log ...OK.]
                                                                                                                   
  ________                                 __
 /        |                               /  |                                                                     
 ########/ ______    ______    __     __  ##/    _______                                                           
    ## |  /      \  /      \  /  \   /  | /  |  /       |                                                          
    ## | /######  | ######  | ##  \ /##/  ## | /#######/                                                           
    ## | ## |  ##/  /    ## |  ##  /##/   ## | ##      \                                                           
    ## | ## |      /####### |   ## ##/    ## |  ######  |                                                          
    ## | ## |      ##    ## |    ###/     ## | /     ##/                                                           
    ##/  ##/        #######/      #/      ##/  #######/                                                            
                                                                                                                   
    TRajectory Analyzer and VISualizer  -  Open-source free software under GNU GPL v3                              
                                                                                                                   
    Copyright (c) Martin Brehm      (2009-2022), University of Halle (Saale)                                       
                  Martin Thomas     (2012-2022)
                  Sascha Gehrke     (2016-2022), University of Bonn
                  Barbara Kirchner  (2009-2022), University of Bonn

    http://www.travis-analyzer.de
                                                                                                                   
    Please cite: J. Chem. Phys. 2020, 152 (16), 164105.         (DOI 10.1063/5.0005078 )                           
                 J. Chem. Inf. Model. 2011, 51 (8), 2007-2023.  (DOI 10.1021/ci200217w )

    There is absolutely no warranty on any results obtained from TRAVIS.

 #  Running on kali at Tue Jun 10 10:39:17 2025 (PID 20682)
 #  Running in /home/kali/mrglist3431/workspace/projects/lab06
 #  Version: Jul 29 2022, built at Jan 14 2023, 12:32:45, compiler "12.2.0", GCC 12.2.0
 #  Target platform: Linux, __cplusplus=201703L, Compile flags: NEW_CHARGEVAR DEBUG_ARRAYS 
 #  Compiled with OpenMP, but USE_OMP not switched on in "config.h"!
 #  Machine: x86_64, char=1b, int=4b, long=8b, addr=8b, 0xA0B0C0D0=D0,C0,B0,A0.                                    
 #  Home: /home/kali,  Executable: /usr/bin/travis
 #  Input from terminal,  Output to terminal

    >>> Please use a color scheme with dark background or specify "-nocolor"! <<<

    Loading configuration from /home/kali/.travis.conf ...

[Renaming existing File input.txt to #1#input.txt ...OK.]
Unknown parameter: "login".                                                                                        
                                                                                                                   
    List of supported command line options:                                                                        
                                                                                                                   
      -p <file>       Load position data from specified trajectory file.                                           
                      Format may be *.xyz, *.pdb, *.lmp (LAMMPS), HISTORY (DLPOLY), POSCAR/XDATCAR (VASP),
                                    *.gro, *.dcd, or *.prmtop/*.mdcrd (Amber).
                      The bqb format (*.bqb, *.btr, *.emp, *.blist) as well as *.voronoi are also supported.
      -vel <file>     Read atom velocities from a file in addition to the position trajectory.
                      Currently, only .xyz format is supported for velocity data.
      -i <file>       Read input from specified text file.
      -c <file>       Read and execute control file (experimental).
      cubetool        Execute the CubeTool for modifying Gaussian Cube files.
      -sankey <file>  Create Sankey diagrams (file name is optional).
      -ramanfrompola  Compute Raman spectra from existing polarizability time series.
      (de-)compress   Start built-in bqbtool (compress trajectories to BQB format).
      check           Check BQB file integrity.

      -config <file>  Load the specified configuration file.
      -stream         Treat input trajectory as a stream (e.g. named pipe): No fseek, etc.
      -showconf       Show a tree structure of the configuration file.
      -writeconf      Write the default configuration file, including all defines values.

      -verbose        Show detailed information about what's going on.
      -nocolor        Execute TRAVIS in monochrome mode (suitable for white background).
      -dimcolor       Use dim instead of bright colors.

      -credits        Display a list of persons who contributed to TRAVIS.
      -help, -?       Shows this help.

    If only one argument is specified, it is assumed to be the name of a trajectory file.
    If no argument is specified at all, TRAVIS asks for the trajectory file to open.

    Note: To show a list of all persons who contributed to TRAVIS,
          please add "-credits" to your command line arguments, or set the
          variable "SHOWCREDITS" to "TRUE" in your travis.conf file.

    Source code from other projects used in TRAVIS:
      - lmfit     from Joachim Wuttke
      - kiss_fft  from Mark Borgerding                                                                             
      - voro++    from Chris Rycroft                                                                               
                                                                                                                   
    http://www.travis-analyzer.de
                                                                                                                   
    Please cite all of the following articles for the analyses you have used:                                      
                                                                                                                   
  * For TRAVIS in general:                                                                                         
                                                                                                                   
    "TRAVIS - A Free Analyzer for Trajectories from Molecular Simulation",                                         
    M. Brehm, M. Thomas, S. Gehrke, B. Kirchner; J. Chem. Phys. 2020, 152 (16), 164105.   (DOI 10.1063/5.0005078 ) 

    "TRAVIS - A Free Analyzer and Visualizer for Monte Carlo and Molecular Dynamics Trajectories",
    M. Brehm, B. Kirchner; J. Chem. Inf. Model. 2011, 51 (8), pp 2007-2023.   (DOI 10.1021/ci200217w )             

*** The End ***
                                                                                                                   
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ travis enable
[Renaming existing File travis.log to #2#travis.log ...OK.]
                                                                                                                   
  ________                                 __
 /        |                               /  |                                                                     
 ########/ ______    ______    __     __  ##/    _______                                                           
    ## |  /      \  /      \  /  \   /  | /  |  /       |                                                          
    ## | /######  | ######  | ##  \ /##/  ## | /#######/                                                           
    ## | ## |  ##/  /    ## |  ##  /##/   ## | ##      \                                                           
    ## | ## |      /####### |   ## ##/    ## |  ######  |                                                          
    ## | ## |      ##    ## |    ###/     ## | /     ##/                                                           
    ##/  ##/        #######/      #/      ##/  #######/                                                            
                                                                                                                   
    TRajectory Analyzer and VISualizer  -  Open-source free software under GNU GPL v3                              
                                                                                                                   
    Copyright (c) Martin Brehm      (2009-2022), University of Halle (Saale)                                       
                  Martin Thomas     (2012-2022)
                  Sascha Gehrke     (2016-2022), University of Bonn
                  Barbara Kirchner  (2009-2022), University of Bonn

    http://www.travis-analyzer.de
                                                                                                                   
    Please cite: J. Chem. Phys. 2020, 152 (16), 164105.         (DOI 10.1063/5.0005078 )                           
                 J. Chem. Inf. Model. 2011, 51 (8), 2007-2023.  (DOI 10.1021/ci200217w )

    There is absolutely no warranty on any results obtained from TRAVIS.

 #  Running on kali at Tue Jun 10 10:39:26 2025 (PID 20765)
 #  Running in /home/kali/mrglist3431/workspace/projects/lab06
 #  Version: Jul 29 2022, built at Jan 14 2023, 12:32:45, compiler "12.2.0", GCC 12.2.0
 #  Target platform: Linux, __cplusplus=201703L, Compile flags: NEW_CHARGEVAR DEBUG_ARRAYS 
 #  Compiled with OpenMP, but USE_OMP not switched on in "config.h"!
 #  Machine: x86_64, char=1b, int=4b, long=8b, addr=8b, 0xA0B0C0D0=D0,C0,B0,A0.                                    
 #  Home: /home/kali,  Executable: /usr/bin/travis
 #  Input from terminal,  Output to terminal

    >>> Please use a color scheme with dark background or specify "-nocolor"! <<<

    Loading configuration from /home/kali/.travis.conf ...

[Renaming existing File input.txt to #2#input.txt ...OK.]
Unknown parameter: "enable".                                                                                       
                                                                                                                   
    List of supported command line options:                                                                        
                                                                                                                   
      -p <file>       Load position data from specified trajectory file.                                           
                      Format may be *.xyz, *.pdb, *.lmp (LAMMPS), HISTORY (DLPOLY), POSCAR/XDATCAR (VASP),
                                    *.gro, *.dcd, or *.prmtop/*.mdcrd (Amber).
                      The bqb format (*.bqb, *.btr, *.emp, *.blist) as well as *.voronoi are also supported.
      -vel <file>     Read atom velocities from a file in addition to the position trajectory.
                      Currently, only .xyz format is supported for velocity data.
      -i <file>       Read input from specified text file.
      -c <file>       Read and execute control file (experimental).
      cubetool        Execute the CubeTool for modifying Gaussian Cube files.
      -sankey <file>  Create Sankey diagrams (file name is optional).
      -ramanfrompola  Compute Raman spectra from existing polarizability time series.
      (de-)compress   Start built-in bqbtool (compress trajectories to BQB format).
      check           Check BQB file integrity.

      -config <file>  Load the specified configuration file.
      -stream         Treat input trajectory as a stream (e.g. named pipe): No fseek, etc.
      -showconf       Show a tree structure of the configuration file.
      -writeconf      Write the default configuration file, including all defines values.

      -verbose        Show detailed information about what's going on.
      -nocolor        Execute TRAVIS in monochrome mode (suitable for white background).
      -dimcolor       Use dim instead of bright colors.

      -credits        Display a list of persons who contributed to TRAVIS.
      -help, -?       Shows this help.

    If only one argument is specified, it is assumed to be the name of a trajectory file.
    If no argument is specified at all, TRAVIS asks for the trajectory file to open.

    Note: To show a list of all persons who contributed to TRAVIS,
          please add "-credits" to your command line arguments, or set the
          variable "SHOWCREDITS" to "TRUE" in your travis.conf file.

    Source code from other projects used in TRAVIS:
      - lmfit     from Joachim Wuttke
      - kiss_fft  from Mark Borgerding                                                                             
      - voro++    from Chris Rycroft                                                                               
                                                                                                                   
    http://www.travis-analyzer.de
                                                                                                                   
    Please cite all of the following articles for the analyses you have used:                                      
                                                                                                                   
  * For TRAVIS in general:                                                                                         
                                                                                                                   
    "TRAVIS - A Free Analyzer for Trajectories from Molecular Simulation",                                         
    M. Brehm, M. Thomas, S. Gehrke, B. Kirchner; J. Chem. Phys. 2020, 152 (16), 164105.   (DOI 10.1063/5.0005078 ) 

    "TRAVIS - A Free Analyzer and Visualizer for Monte Carlo and Molecular Dynamics Trajectories",
    M. Brehm, B. Kirchner; J. Chem. Inf. Model. 2011, 51 (8), pp 2007-2023.   (DOI 10.1021/ci200217w )             

*** The End ***
                                                                                                                   
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ travis enable
[Renaming existing File travis.log to #3#travis.log ...OK.]
                                                                                                                   
  ________                                 __
 /        |                               /  |                                                                     
 ########/ ______    ______    __     __  ##/    _______                                                           
    ## |  /      \  /      \  /  \   /  | /  |  /       |                                                          
    ## | /######  | ######  | ##  \ /##/  ## | /#######/                                                           
    ## | ## |  ##/  /    ## |  ##  /##/   ## | ##      \                                                           
    ## | ## |      /####### |   ## ##/    ## |  ######  |                                                          
    ## | ## |      ##    ## |    ###/     ## | /     ##/                                                           
    ##/  ##/        #######/      #/      ##/  #######/                                                            
                                                                                                                   
    TRajectory Analyzer and VISualizer  -  Open-source free software under GNU GPL v3                              
                                                                                                                   
    Copyright (c) Martin Brehm      (2009-2022), University of Halle (Saale)                                       
                  Martin Thomas     (2012-2022)
                  Sascha Gehrke     (2016-2022), University of Bonn
                  Barbara Kirchner  (2009-2022), University of Bonn

    http://www.travis-analyzer.de
                                                                                                                   
    Please cite: J. Chem. Phys. 2020, 152 (16), 164105.         (DOI 10.1063/5.0005078 )                           
                 J. Chem. Inf. Model. 2011, 51 (8), 2007-2023.  (DOI 10.1021/ci200217w )

    There is absolutely no warranty on any results obtained from TRAVIS.

 #  Running on kali at Tue Jun 10 10:39:28 2025 (PID 20794)
 #  Running in /home/kali/mrglist3431/workspace/projects/lab06
 #  Version: Jul 29 2022, built at Jan 14 2023, 12:32:45, compiler "12.2.0", GCC 12.2.0
 #  Target platform: Linux, __cplusplus=201703L, Compile flags: NEW_CHARGEVAR DEBUG_ARRAYS 
 #  Compiled with OpenMP, but USE_OMP not switched on in "config.h"!
 #  Machine: x86_64, char=1b, int=4b, long=8b, addr=8b, 0xA0B0C0D0=D0,C0,B0,A0.                                    
 #  Home: /home/kali,  Executable: /usr/bin/travis
 #  Input from terminal,  Output to terminal

    >>> Please use a color scheme with dark background or specify "-nocolor"! <<<

    Loading configuration from /home/kali/.travis.conf ...

[Renaming existing File input.txt to #3#input.txt ...OK.]
Unknown parameter: "enable".                                                                                       
                                                                                                                   
    List of supported command line options:                                                                        
                                                                                                                   
      -p <file>       Load position data from specified trajectory file.                                           
                      Format may be *.xyz, *.pdb, *.lmp (LAMMPS), HISTORY (DLPOLY), POSCAR/XDATCAR (VASP),
                                    *.gro, *.dcd, or *.prmtop/*.mdcrd (Amber).
                      The bqb format (*.bqb, *.btr, *.emp, *.blist) as well as *.voronoi are also supported.
      -vel <file>     Read atom velocities from a file in addition to the position trajectory.
                      Currently, only .xyz format is supported for velocity data.
      -i <file>       Read input from specified text file.
      -c <file>       Read and execute control file (experimental).
      cubetool        Execute the CubeTool for modifying Gaussian Cube files.
      -sankey <file>  Create Sankey diagrams (file name is optional).
      -ramanfrompola  Compute Raman spectra from existing polarizability time series.
      (de-)compress   Start built-in bqbtool (compress trajectories to BQB format).
      check           Check BQB file integrity.

      -config <file>  Load the specified configuration file.
      -stream         Treat input trajectory as a stream (e.g. named pipe): No fseek, etc.
      -showconf       Show a tree structure of the configuration file.
      -writeconf      Write the default configuration file, including all defines values.

      -verbose        Show detailed information about what's going on.
      -nocolor        Execute TRAVIS in monochrome mode (suitable for white background).
      -dimcolor       Use dim instead of bright colors.

      -credits        Display a list of persons who contributed to TRAVIS.
      -help, -?       Shows this help.

    If only one argument is specified, it is assumed to be the name of a trajectory file.
    If no argument is specified at all, TRAVIS asks for the trajectory file to open.

    Note: To show a list of all persons who contributed to TRAVIS,
          please add "-credits" to your command line arguments, or set the
          variable "SHOWCREDITS" to "TRUE" in your travis.conf file.

    Source code from other projects used in TRAVIS:
      - lmfit     from Joachim Wuttke
      - kiss_fft  from Mark Borgerding                                                                             
      - voro++    from Chris Rycroft                                                                               
                                                                                                                   
    http://www.travis-analyzer.de
                                                                                                                   
    Please cite all of the following articles for the analyses you have used:                                      
                                                                                                                   
  * For TRAVIS in general:                                                                                         
                                                                                                                   
    "TRAVIS - A Free Analyzer for Trajectories from Molecular Simulation",                                         
    M. Brehm, M. Thomas, S. Gehrke, B. Kirchner; J. Chem. Phys. 2020, 152 (16), 164105.   (DOI 10.1063/5.0005078 ) 

    "TRAVIS - A Free Analyzer and Visualizer for Monte Carlo and Molecular Dynamics Trajectories",
    M. Brehm, B. Kirchner; J. Chem. Inf. Model. 2011, 51 (8), pp 2007-2023.   (DOI 10.1021/ci200217w )             

*** The End ***
                                                                                                                   
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ mkdir artifacts
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ sleep 20s && gnome-screenshot --file artifacts/screenshot.png
Command 'gnome-screenshot' not found, but can be installed with:
sudo apt install gnome-screenshot
Do you want to install it? (N/y)y
sudo apt install gnome-screenshot
[sudo] password for kali: 
Installing:                     
  gnome-screenshot
                                                                                                                   
Summary:
  Upgrading: 0, Installing: 1, Removing: 0, Not Upgrading: 1379
  Download size: 162 kB
  Space needed: 1,142 kB / 318 GB available

Get:1 http://kali.download/kali kali-rolling/main amd64 gnome-screenshot amd64 41.0-3 [162 kB]
Fetched 162 kB in 2s (77.7 kB/s)         
Selecting previously unselected package gnome-screenshot.
(Reading database ... 411193 files and directories currently installed.)
Preparing to unpack .../gnome-screenshot_41.0-3_amd64.deb ...
Unpacking gnome-screenshot (41.0-3) ...
Setting up gnome-screenshot (41.0-3) ...
Processing triggers for libglib2.0-0t64:amd64 (2.82.2-2) ...
Processing triggers for mailcap (3.74) ...
Processing triggers for kali-menu (2024.4.0) ...
Processing triggers for desktop-file-utils (0.27-2) ...
Processing triggers for hicolor-icon-theme (0.18-1) ...
Processing triggers for man-db (2.13.0-1) ...
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ sleep 20s && gnome-screenshot --file artifacts/screenshot.png
** Message: 10:40:37.630: Unable to use GNOME Shell's builtin screenshot interface, resorting to fallback X11.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab06]
└─$ popd
~/mrglist3431/workspace
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ export LAB_NUMBER=05
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER}
Cloning into 'tasks/lab06'...
remote: Enumerating objects: 137, done.
remote: Counting objects: 100% (25/25), done.
remote: Compressing objects: 100% (9/9), done.
remote: Total 137 (delta 18), reused 16 (delta 16), pack-reused 112 (from 1)
Receiving objects: 100% (137/137), 918.92 KiB | 329.00 KiB/s, done.
Resolving deltas: 100% (60/60), done.
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ mkdir reports/lab${LAB_NUMBER}
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ cd reports/lab${LAB_NUMBER}
                                                                                                                   
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab06]
└─$ edit REPORT.md

zsh: suspended  edit REPORT.md
                                           
