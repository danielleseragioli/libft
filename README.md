# Libft
<img align="right" height="200" width="200" src="https://spotty-grenadilla-d26.notion.site/image/attachment%3Aacb73e23-d9c7-4fb8-b226-6f2ec737067b%3Alibft_selo.png?table=block&id=296113de-b78e-80dc-a9b6-fd2e8a69586a&spaceId=d1b02b65-6f05-41fb-9868-69f5ce300038&width=300&userId=&cache=v2">
 

**Libft** is the first project at **42 School** where you create your own C library, a personal <br> collection of essential functions that will be reused throughout your future projects.
<br> It’s designed to deepen your understanding of standard C functions by re-implementing <br> them from scratch and expanding them with additional and bonus features.

This project helped me strengthen my knowledge in:

* Memory management and pointers
* String and array manipulation
* Function implementation and optimization
* Static libraries and compilation with Makefiles
* Data structures and linked list management

> “Build your own foundation — one function at a time.”

✅ Project completed 125% successfully as part of my 42 journey.<br>
💻 **Language:** C

<div align="left">
 
 ![Funny GIF](https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExNXQ3Y2x5NmE1cXoxcjhtM2JzdXRrZWRmZ3pwemRydjB1bmprem93YSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/wjsxICjfkEUEdWHsA9/giphy.gif
)
</div>

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
