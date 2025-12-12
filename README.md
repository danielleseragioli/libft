<img align="center" src="https://spotty-grenadilla-d26.notion.site/image/attachment%3A7f106996-bc3a-4f1e-9396-dc9ddaf038d6%3ALinkedIn_cover_-_9_(1).png?table=block&id=2ab113de-b78e-80bc-a1da-fae930e63142&spaceId=d1b02b65-6f05-41fb-9868-69f5ce300038&width=1360&userId=&cache=v2">

<img align="right" src="https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExNXQ3Y2x5NmE1cXoxcjhtM2JzdXRrZWRmZ3pwemRydjB1bmprem93YSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/wjsxICjfkEUEdWHsA9/giphy.gif" width="450" style="margin-left: 500px; margin-bottom: 10px;">

<div style="max-width: 50%;">

Libft is the first 42 project where you create your own C library by rebuilding key functions from scratch, helping you understand C fundamentals and providing a base for future projects.
This project helped me strengthen my knowledge in:

* Memory and pointer management  
* String and array handling  
* Function design and optimization  
* Makefile compilation and static libraries  
* Basic data structures (linked lists)

</div>

---

✅ Project completed 125% successfully as part of my 42 journey.<br>
💻 **Language:** C
<br><br>
<img src="https://github.com/danielleseragioli/42_duck_badges/blob/main/badges/libft_pin_bonus.png">
<br>

---
## Project Overview (Mandatory & Bonus)

The project is structured into two mandatory parts and one bonus part.

### 📚 Mandatory Part (Chapters IV.2 & IV.3)

| Category | Description | Examples (Source Functions) | External Functions Allowed |
| :--- | :--- | :--- | :--- |
| **Part 1: Libc Functions** | Reimplementation of a set of functions from the libc. Prototypes and behaviors must match the originals (e.g., `strlen` becomes `ft_strlen`). | `ft_isalpha`, `ft_strlen`, `ft_memset`, `ft_memcpy`, `ft_strncmp`, `ft_atoi`. | None (for most). `malloc()` for `ft_calloc` and `ft_strdup`. |
| **Part 2: Memory Allocation** | Functions designed to allocate and manipulate memory dynamically using `malloc(3)`. | `ft_substr` (substring starting at `start` index), `ft_strjoin` (concatenates two strings), `ft_split` (splits string by a delimiter `c`). | `malloc`, `free` (for `ft_split`). |
| **Part 2: String Utilities** | Additional functions for string conversion and manipulation. | `ft_strtrim` (removes characters from a set at ends), `ft_itoa` (converts integer `n` to string, handles negatives). | `malloc`. |
| **Part 2: Iteration** | Functions that apply a specified function to each character of a string, potentially creating a new string (`strmapi`) or modifying the original (`striteri`). | `ft_strmapi`, `ft_striteri`. | `malloc` (for `ft_strmapi`). |
| **Part 2: File Descriptor I/O** | Functions to output data to a specified file descriptor (`fd`). | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd` (with newline), `ft_putnbr_fd`. | `write`. |

### ⭐ Bonus Part (Chapter V: Linked Lists)

| Function Category | Purpose | Examples | External Functions Allowed |
| :--- | :--- | :--- | :--- |
| **Node Management** | Creating and destroying individual nodes or the entire list. The structure `t_list` uses `void *content` to store any type of data. | `ft_lstnew` (allocates and initializes a new node), `ft_lstdelone` (frees content using a function `del`, then frees the node itself), `ft_lstclear` (deletes the node and all successors). | `malloc`, `free`. |
| **List Manipulation** | Adding, navigating, and measuring the list. | `ft_lstadd_front` (adds node at the beginning), `ft_lstlast` (returns the last node), `ft_lstadd_back` (adds node at the end), `ft_lstsize` (counts nodes). | None. |
| **List Iteration/Mapping** | Applying a function to the content of list nodes. | `ft_lstiter` (applies function `f` to the content of each node), `ft_lstmap` (applies function `f` and creates a **new list** resulting from the applications). | `malloc`, `free` (for `ft_lstmap`). |
