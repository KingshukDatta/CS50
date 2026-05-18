# Basic Linux Commands Guide

This README provides an overview of common Linux terminal commands for file and directory management, based on standard usage and examples.

## Directory Management

### `cd` (Change Directory)

- [cite_start]**Purpose**: Used to change the current directory[cite: 1].
- **Examples**:
  - [cite_start]`cd hello`: Moves into the "hello" folder[cite: 1].
  - [cite_start]`cd ..`: Navigates to the parent folder[cite: 1].
  - [cite_start]`cd`: Typing this command alone navigates to the default folder[cite: 2].

### `ls` (List)

- **Purpose**: Lists the contents of a folder, which will show folder and file names.
- **Example**:
  - `ls`: Displays the files and directories in the current location.

### `mkdir` (Make Directory)

- **Purpose**: Used to make a new directory or folder.
- **Example**:
  - `mkdir hello`: Creates a new folder named "hello".

### `rmdir` (Remove Directory)

- **Purpose**: Removes a directory/folder.
- **Example**:
  - `rmdir hello`: Removes the directory named "hello".

---

## File Management

### `cp` (Copy)

- [cite_start]**Purpose**: Used to copy a file[cite: 3].
- **Example**:
  - [cite_start]`cp hello.c backup.c`: Copies the file "hello.c" to a new file named "backup.c"[cite: 3].

### `mv` (Move and Rename)

- [cite_start]**Purpose**: Can be used to move a file to a new location or to change file names[cite: 4].
- **Examples**:
  - [cite_start]**Rename**: `mv hello.c old.c` changes the name of the file from "hello.c" to "old.c"[cite: 5].
  - **Move to Folder**: `mv hello.c hello` moves the "hello.c" file into the "hello" folder.
  - **Move to Parent**: `mv hello.c ..` moves the file up to the parent folder. _(Note: A single dot `.` means "this folder", and a double dot `..` means up/parent folder)._

### `rm` (Remove)

- [cite_start]**Purpose**: Used to remove a file[cite: 6].
- **Example**:
  - [cite_start]`rm hello`: Removes the file named "hello"[cite: 6]. _(Note: The terminal may prompt you to confirm the deletion, e.g., `rm: remove regular file 'hello'? y`)_.

---

## Program Compilation and Execution (C/CS50 Environment)

- **Compile**: `make hello` (Compiles the source code into an executable program).
- **Execute**: `./hello` (Runs the compiled program in the current directory).
