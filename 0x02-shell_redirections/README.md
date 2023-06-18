This file is for the second part of the alx-system_engineering that requires learning shell, input and output redirections as well as filters

Task 0-hello_world - Created a script that prints "Hello, World" followed by a new line to the standard output using the code 'echo 'Hello, World \n'.

Task 1-confused_smiley - created a script that displays a confused smiley "(Ôo)'. using the code' echo "\"(Ôo)'" '

Task 2-hellofile- Created as script that Display the content of the /etc/passwd file. using the code 'cat /etc/passwd'

Task 3-twofiles- Created a script that Display the content of /etc/passwd and /etc/hosts. Using the code 'cat /etc/passwd /etc/hosts'

Task 4-lastlines- Created a script that Display the last 10 lines of /etc/passwd . Using the code 'tail /etc/passwd'

Task 5-firstlines- Created a script that Display the first 10 lines of /etc/passwd. using the code 'head /etc/passwd'.

Task 6-third _line- Created a script that displays the third line of the file iacta. Using the  code 'head -n 3 iacta | tail -1'

Task 7-file- Created a shell script that creates a file named exactly \*\\'"Best School"\'\\*$\?\*\*\*\*\*:) containing the text Best School ending by a new line. using the code ' echo 'Best School'  >> "\*\\'"Best School"\'\\*$\?\*\*\*\*\*:)"

Task 8-cwd_state- Created a shell script that writes into the file ls_cwd_content the result of the command ls -la. If the file ls_cwd_content already exists, it should be overwritten. If the file ls_cwd_content does not exist, create it. using the code 'ls -la > ls_cwd_content'

Task 9-duplicate_last_line- Created a shell script that duplicates the last line of the file iacta using the code 'tail -n 1 iacta >> iacta'

Task 10-no_more_js- Created a shell script that deletes all the regular files (not the directories) with a .js extension that are present in the current directory and all its subfolders.
using the code 'find . -name "*.js" -type f -delete'

Task 11-directories- Created a script that counts the number of directories and sub-directories in the current directory. Using the code 'find . -mindepth 1 -type d | wc -l'
