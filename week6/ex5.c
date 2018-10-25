-bash: kill: (13446) - No such process
root@Rome001:~/Linux/os_labs/week6# kill -SIGUSR1 23446

SIGUSR1 Catched!
root@Rome001:~/Linux/os_labs/week6# kill 23446
root@Rome001:~/Linux/os_labs/week6# ./ex4 &
[3] 23447
[2]   Terminated              ./ex4
root@Rome001:~/Linux/os_labs/week6# kill 23447
root@Rome001:~/Linux/os_labs/week6# tasklist
tasklist: command not found
[3]-  Terminated              ./ex4
[3]-  Terminated              ./ex4
root@Rome001:~/Linux/os_labs/week6# stdout > kek.txt
stdout: command not found
root@Rome001:~/Linux/os_labs/week6# ./ex4 &
[2] 23452
root@Rome001:~/Linux/os_labs/week6# ^C
root@Rome001:~/Linux/os_labs/week6# kill - SIGUSR1 23452
-bash: kill: : invalid signal specification
root@Rome001:~/Linux/os_labs/week6# kill -SIGUSR1 23452

SIGUSR1 Catched!
root@Rome001:~/Linux/os_labs/week6# clear
root@Rome001:~/Linux/os_labs/week6# ./ex4 &
root@Rome001:~/Linux/os_labs/week6# ./ex4 &
[3] 23454
root@Rome001:~/Linux/os_labs/week6# kill -SIGUSR1 23454
root@Rome001:~/Linux/os_labs/week6#
SIGUSR1 Catched!
^C
root@Rome001:~/Linux/os_labs/week6# ls
ex1  ex1.c  ex2  ex2.c  ex3  ex3.c  ex4  ex4.c  kek.txt
root@Rome001:~/Linux/os_labs/week6# rm kek.txt
root@Rome001:~/Linux/os_labs/week6# vim ex4.txt
root@Rome001:~/Linux/os_labs/week6# ls
ex1  ex1.c  ex2  ex2.c  ex3  ex3.c  ex4  ex4.c  ex4.txt
root@Rome001:~/Linux/os_labs/week6# git add ./
root@Rome001:~/Linux/os_labs/week6# git commit
[master a5ac9b9] Task 4 added!
 3 files changed, 38 insertions(+)
 create mode 100755 week6/ex4
 create mode 100644 week6/ex4.c
 create mode 100644 week6/ex4.txt
root@Rome001:~/Linux/os_labs/week6# git push
warning: push.default is unset; its implicit value has changed in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the traditional behavior, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:


  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

Since Git 2.0, Git defaults to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Username for 'https://github.com': Rome314
Password for 'https://Rome314@github.com':
Counting objects: 6, done.
Delta compression using up to 2 threads.
Compressing objects: 100% (6/6), done.
Writing objects: 100% (6/6), 3.13 KiB | 0 bytes/s, done.
Total 6 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Rome314/os_labs.git
   0389c94..a5ac9b9  master -> master
root@Rome001:~/Linux/os_labs/week6# vim ex4.c
root@Rome001:~/Linux/os_labs/week6# gcc ex4.c -o ex4
root@Rome001:~/Linux/os_labs/week6# git commit
On branch master
Your branch is up-to-date with 'origin/master'.
Changes not staged for commit:
	deleted:    ../week3/.ex3.c.swo
	modified:   ex4
	modified:   ex4.c

no changes added to commit
root@Rome001:~/Linux/os_labs/week6# git add ./
root@Rome001:~/Linux/os_labs/week6# git commit
[master 3090d27] Task 4 fixed
 2 files changed, 3 insertions(+), 3 deletions(-)
root@Rome001:~/Linux/os_labs/week6# git push
warning: push.default is unset; its implicit value has changed in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the traditional behavior, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

    int child;
When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

Since Git 2.0, Git defaults to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Username for 'https://github.com': Rome314
Password for 'https://Rome314@github.com':
#include <stdio.h>
Counting objects: 5, done.
Delta compression using up to 2 threads.
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 545 bytes | 0 bytes/s, done.
Total 5 (delta 4), reused 0 (delta 0)
remote: Resolving deltas: 100% (4/4), completed with 4 local objects.
To https://github.com/Rome314/os_labs.git
   a5ac9b9..3090d27  master -> master
root@Rome001:~/Linux/os_labs/week6# ls
ex1  ex1.c  ex2  ex2.c  ex3  ex3.c  ex4  ex4.c  ex4.txt
root@Rome001:~/Linux/os_labs/week6# vim ex5.c
root@Rome001:~/Linux/os_labs/week6# gcc ex5.c -o ex5
root@Rome001:~/Linux/os_labs/week6# ./ex5
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I killed my child! [23496]root@Rome001:~/Linux/os_labs/week6# vim ex5.c
root@Rome001:~/Linux/os_labs/week6# gcc ex5.c -o ex5
root@Rome001:~/Linux/os_labs/week6# ./ex5
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I killed my child! [23504]
root@Rome001:~/Linux/os_labs/week6# git add ./
root@Rome001:~/Linux/os_labs/week6# git commit
[master 5f1868e] Task 5 added
 2 files changed, 31 insertions(+)
 create mode 100755 week6/ex5
 create mode 100644 week6/ex5.c
root@Rome001:~/Linux/os_labs/week6# git push
warning: push.default is unset; its implicit value has changed in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the traditional behavior, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

Since Git 2.0, Git defaults to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Username for 'https://github.com': Rome314
Password for 'https://Rome314@github.com':
Counting objects: 5, done.
Delta compression using up to 2 threads.
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 3.19 KiB | 0 bytes/s, done.
Total 5 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Rome314/os_labs.git
   3090d27..5f1868e  master -> master
root@Rome001:~/Linux/os_labs/week6# cat ex5.c
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int child;
    child = fork();

    if (child == -1){
        printf("Error!\n");
        exit(0);
    }
    else if(child != 0){
        sleep(10);
        kill(child, SIGTERM);
        printf("I killed my child! [%d]\n",getpid() );

    }
            waitpid(child2,&status,0);
    else{
        while(1){
         printf("I'm Alive!\n");
         sleep(1);
        }

    }


    return 0;
}
root@Rome001:~/Linux/os_labs/week6# ./ex5
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I'm Alive!
I killed my child! [23525]
root@Rome001:~/Linux/os_labs/week6# vim ex6.c
root@Rome001:~/Linux/os_labs/week6# gcc ex6.c -o ex6
ex6.c: In function 'main':
ex6.c:25:34: warning: passing argument 2 of 'write' makes pointer from integer without a cast [-Wint-conversion]
             write(descriptors[1],wr_PID,sizeof(wr_PID));
                                  ^
In file included from ex6.c:4:0:
/usr/include/unistd.h:369:16: note: expected 'const void *' but argument is of type 'int'
 extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur;
                ^
ex6.c:27:13: warning: implicit declaration of function 'waitpid' [-Wimplicit-function-declaration]
             waitpid(child2,&status,0);
             ^
root@Rome001:~/Linux/os_labs/week6# ./ex6
First fork is executed!
Second fork is executed!
Second child is working...
Second child's PID moved to buffer!
Second fork is executed!
root@Rome001:~/Linux/os_labs/week6# First fork is executed!
First child is working...
Second child's PID recieved: [0]

root@Rome001:~/Linux/os_labs/week6# git add ./
root@Rome001:~/Linux/os_labs/week6# git commit
[master 399c26e] Task 6 is added!
 2 files changed, 50 insertions(+)
 create mode 100755 week6/ex6
 create mode 100644 week6/ex6.c
root@Rome001:~/Linux/os_labs/week6# git push
warning: push.default is unset; its implicit value has changed in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the traditional behavior, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int main(){

    int child;
    child = fork();

    if (child == -1){
        printf("Error!\n");
        exit(0);
    }
    else if(child != 0){
        sleep(10);
        kill(child, SIGTERM);
        printf("I killed my child! [%d]\n",getpid() );

    }
    else{
        while(1){
         printf("I'm Alive!\n");
         sleep(1);
-- INSERT --                                                  1,1           Top
