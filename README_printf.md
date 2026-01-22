<img align="center" src="https://spotty-grenadilla-d26.notion.site/image/attachment%3A0ff880fd-4f71-436c-9bd8-e1620c981f15%3ALinkedIn_cover_-_12.png?table=block&id=2ab113de-b78e-807b-b545-f1ab43957221&spaceId=d1b02b65-6f05-41fb-9868-69f5ce300038&width=1360&userId=&cache=v2">


<img align="right" src="https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExc2V3cG4wOTN6Njl6bjk0MWxvaWw2d3k4bnZxcmhrZHg5eHVsYTVuYSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/xT3i0UBxgPRl3ui8tG/giphy.gif" width="380">


Project where I recreated the famous  C function `printf()` <br>
from the standard library (`<stdio.h>`). <br>

This project helped me strengthen my understanding of:

* Variadic arguments (`va_list`, `va_start`, `va_arg`, `va_end`)
* Data conversion and formatting
* Efficient output using file descriptors
* Modular code design and organization
* Strict adherence to formatting rules and specifications
<br>

---

✅ **Project completed successfullyas part of my 42 journey** <br>
💻 **Language:** C
<br><br>
<img src="https://github.com/danielleseragioli/42_duck_badges/blob/main/badges/printf_pin.png">
<br>

---

## Project Overview

The main objective is to recreate a simplified version of the `printf()` function with support for the following **format specifiers**:

| Category                         | Description                                                     | Examples         | External Functions Allowed |
| -------------------------------- | --------------------------------------------------------------- | ---------------- | -------------------------- |
| **Character & String**           | Print single characters and strings.                            | `%c`, `%s`       | `write`                    |
| **Pointer**                      | Print memory addresses in hexadecimal format.                   | `%p`             | `write`                    |
| **Integer (Decimal & Unsigned)** | Print signed and unsigned integers.                             | `%d`, `%i`, `%u` | `write`                    |
| **Hexadecimal**                  | Print numbers in base 16, using lowercase or uppercase letters. | `%x`, `%X`       | `write`                    |
| **Percent**                      | Print the literal `%` character.                                | `%%`             | `write`                    |

The function must replicate the behavior of `printf()`, following the same format and returning the total number of characters printed.

---

**Usage Example:**

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! The number is %d and hex is %x\n", "world", 42, 42);
    return (0);
}
```


