# lab_2
                                                                             ┌──(kali㉿kali)-[~]
└─$ export GITHUB_TOKEN=

                                                                             
┌──(kali㉿kali)-[~]
└─$ export GITHUB_EMAIL=ifedotov236@gmail.com  
                                                                             
┌──(kali㉿kali)-[~]
└─$ export GITHUB_USERNAME=mrglist3431       
                                                                             
┌──(kali㉿kali)-[~]
└─$ cd ${GITHUB_USERNAME}/workspace
                                                                             
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ source scripts/activate
                                                                             
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ mkdir ~/.config
mkdir: cannot create directory ‘/home/kali/.config’: File exists
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ cd                             
                                                                                                                    
┌──(kali㉿kali)-[~]
└─$ cd ${GITHUB_USERNAME}/workspace
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ ls
lab02  lab3  node  projects  reports  scripts  tasks
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ mkdir ~/.config                
mkdir: cannot create directory ‘/home/kali/.config’: File exists
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git mkdir ~/.config     
git: 'mkdir' is not a git command. See 'git --help'.
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ mkdir .config  
mkdir: cannot create directory ‘.config’: File exists
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ ls -ald ~/.config
drwxr-xr-x 16 kali kali 4096 Mar 31 19:05 /home/kali/.config
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ cat > ~/.config/hub <<EOF
github.com:
- user: ${GITHUB_USERNAME}
  oauth_token: ${GITHUB_TOKEN}
  protocol: https
EOF
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git config --global hub.protocol https
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ mkdir projects/lab02 && cd projects/lab02
mkdir: cannot create directory ‘projects/lab02’: File exists
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
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
Initialized empty Git repository in /home/kali/mrglist3431/workspace/.git/
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git init master
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
Initialized empty Git repository in /home/kali/mrglist3431/workspace/master/.git/
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git master init    
git: 'master' is not a git command. See 'git --help'.

The most similar command is
        restore
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ cd projects/lab02              
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab02]
└─$ .. 
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir lab02
rmdir: failed to remove 'lab02': Directory not empty
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir -r lab02
rmdir: invalid option -- 'r'
Try 'rmdir --help' for more information.
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir -R lab02
rmdir: invalid option -- 'R'
Try 'rmdir --help' for more information.
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ lab02            
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab02]
└─$ ls               
lab02  README.md
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab02]
└─$ rmdir lab02   
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab02]
└─$ rmdir README.md
rmdir: failed to remove 'README.md': Not a directory
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab02]
└─$ ..
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ rmdir lab02    
rmdir: failed to remove 'lab02': Directory not empty
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ..
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ mkdir projects/lab_2 && cd projects/lab_2
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
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
Initialized empty Git repository in /home/kali/mrglist3431/workspace/projects/lab_2/.git/
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git -c init.defaultBranch=master init
Reinitialized existing Git repository in /home/kali/mrglist3431/workspace/projects/lab_2/.git/
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git config --global user.name ${GITHUB_USERNAME}
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git config --global user.email ${GITHUB_EMAIL}
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git config -e --global
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab_2.git
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git pull origin master
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
remote: Repository not found.
fatal: repository 'https://github.com/mrglist3431/lab_2.git/' not found
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git pull origin master
fatal: couldn't find remote ref master
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab_2.git
error: remote origin already exists.
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git pull origin master                                               
fatal: couldn't find remote ref master
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ 
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git pull              
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Unpacking objects: 100% (3/3), 853 bytes | 853.00 KiB/s, done.
From https://github.com/mrglist3431/lab_2
 * [new branch]      main       -> origin/main
There is no tracking information for the current branch.
Please specify which branch you want to merge with.
See git-pull(1) for details.

    git pull <remote> <branch>

If you wish to set tracking information for this branch you can do so with:

    git branch --set-upstream-to=origin/<branch> master

                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git pull origin master
fatal: couldn't find remote ref master
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git pull origin main  
From https://github.com/mrglist3431/lab_2
 * branch            main       -> FETCH_HEAD
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ touch README.md                        
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git status          
On branch master
nothing to commit, working tree clean
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git pull master     
fatal: 'master' does not appear to be a git repository
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git pull origin master
fatal: couldn't find remote ref master
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git status            
On branch master
nothing to commit, working tree clean
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git aad README.md     
git: 'aad' is not a git command. See 'git --help'.

The most similar command is
        add
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git add README.md     
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git commit -m"added README.md"                
On branch master
nothing to commit, working tree clean
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git push origin master        
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
Total 0 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
remote: 
remote: Create a pull request for 'master' on GitHub by visiting:
remote:      https://github.com/mrglist3431/lab_2/pull/new/master
remote: 
To https://github.com/mrglist3431/lab_2.git
 * [new branch]      master -> master
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git commit -m"added README.md"
On branch master
nothing to commit, working tree clean
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git add README.md             
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git commit -m"added README.md"
On branch master
nothing to commit, working tree clean
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git pull origin master        
From https://github.com/mrglist3431/lab_2
 * branch            master     -> FETCH_HEAD
Already up to date.
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git log                     
commit 680c16436d957a8a764ebd6c580c7d36b36de90c (HEAD -> master, origin/master, origin/main)
Author: mrglist3431 <ifedotov236@gmail.com>
Date:   Mon Apr 7 14:59:09 2025 +0300

    Initial commit
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ mkdir sources                            
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ mkdir include
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ mkdir examples
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ cat > sources/print.cpp <<EOF
#include <print.hpp>

void print(const std::string& text, std::ostream& out)
{
  out << text;
}

void print(const std::string& text, std::ofstream& out)
{
  out << text;
}
EOF
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ cat > include/print.hpp <<EOF
#include <fstream>
#include <iostream>
#include <string>

void print(const std::string& text, std::ofstream& out);
void print(const std::string& text, std::ostream& out = std::cout);
EOF
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ cat > examples/example2.cpp <<EOF
#include <print.hpp>

#include <fstream>

int main(int argc, char** argv)
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            
zsh: suspended  edit README.md
                                                                                                                                                                                                                                            
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git status
On branch master
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        .README.md.swp
        examples/
        include/
        sources/

nothing added to commit but untracked files present (use "git add" to track)
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git add .        
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git commit -m"added sources"  
[master 7ae8a6e] added sources
 4 files changed, 26 insertions(+)
 create mode 100644 .README.md.swp
 create mode 100644 examples/example2.cpp
 create mode 100644 include/print.hpp
 create mode 100644 sources/print.cpp
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git pull origin master      
From https://github.com/mrglist3431/lab_2
 * branch            master     -> FETCH_HEAD
Already up to date.
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ git push origin master
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
Enumerating objects: 10, done.
Counting objects: 100% (10/10), done.
Delta compression using up to 16 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (9/9), 1.02 KiB | 1.02 MiB/s, done.
Total 9 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To https://github.com/mrglist3431/lab_2.git
   680c164..7ae8a6e  master -> master
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ cd ~/workspace/
cd: no such file or directory: /home/kali/workspace/
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects/lab_2]
└─$ ..
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/projects]
└─$ ..
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ export LAB_NUMBER=_2
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ git clone https://github.com/tp-labs/lab${LAB_NUMBER}.git tasks/lab${LAB_NUMBER}
Cloning into 'tasks/lab_2'...
Username for 'https://github.com': mrglist3431
Password for 'https://mrglist3431@github.com': 
remote: Repository not found.
fatal: repository 'https://github.com/tp-labs/lab_2.git/' not found
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ 
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$  mkdir reports/lab${LAB_NUMBER}
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md
cp: cannot stat 'tasks/lab_2/README.md': No such file or directory
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace]
└─$ cd reports/lab${LAB_NUMBER}
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab_2]
└─$ edit REPORT.md

zsh: suspended  edit REPORT.md
                                                                                                                    
┌──(kali㉿kali)-[~/mrglist3431/workspace/reports/lab_2]
└─$ gist REPORT.md                                                                  
gist: (WARNING) unable to open CGM input file: REPORT.md
gist>   
