This readme file is for all the shell permissions  code in this directory

0- Created a script '0-iam_bety' that switches the current user to the user betty using the command  'su betty'.

1- Created the 1-who_am_i file that contains the code for printing the effective username of the current user of a file.

2- Created script or bash file that prints all the groups the current user is part of using the command 'groups'.

3- Created a script that changes the owner of a file hello to the user betty using the code 'su chown hello betty'.

4-Created a script that creates an empty file called hello using the command 'touch hello'

5-Created a script that adds execute permission to the owner of the file hello using the command 'chmod u+x hello'

6-Created a script that adds execute permission to the owner and the group owner, and read permission to other users to the file hello.

7- Created a s script that adds execute permissions to the owner, group and others for the file hello

8- Created the 8-james_bond file for giving the permisson to read write and execute to only the others group using the chmod 007 hello command

9- Created the 9-John_Doe file for giving permission to rwxr-x-wx permission to the hello file - tis means that chmod 753 hello

10 Created the 10-mirror_permission file that mirrors the permission of the olleh file to the hello file - this is done using the 'chmod stat -c olleh hello' command

11- Created the 11-directories_permissions file that adds execute permission to all subdirectories of the current directory for the owner, the group owner and all other users using the command chmod -R a+x */

12- Created the 12-directory_permissions file that creates a directory called my_dir with permissons 751 in the working directory

13- Created a cript that changes the group owner to school for the file hello

14- Created a script that moves all the files beginning with an uppercase letter to the directory using the code 'mv [[:upper:]]* /tmp/u'

15- Created a script that changes the file owner and group owner of all files and directory in a folder from vincent to staff using the code 'chown -R vincent:staff ./*'

16- Created a script that changes the file owner and the owner and group owner of _hello to vincent and staff using the code 'chown -h vincent:staff _hello'

