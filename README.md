# ft_printf
> 이 프로젝트의 목적은 `printf` 함수를 똑같이 구현하는 것입니다. 당신은 주로 **가변인자**를 어떻게 사용하는지 배우게 될 것입니다.

## 1. Common Instructions



- 프로젝트는 Norm 규칙에 맞춰 작성되어야 합니다. 보너스 파일/함수가 있는 경우, 해당 파일/함수들은 norm 검사에 포함되며, norm error가 있을 시, 0점을 받게 될것 입니다.
- 함수들은 정의되지 않은 행동들과는 별개로 예기치 않게 중단되어서는 안 됩니다. (예를 들어, segmentation fault, bus error, double free 등)
- 필요한 경우 heap에 할당된 모든 메모리 공간은 적절하게 해제되어야 합니다. 메모리 누수는 용납되지 않을 것입니다.
- 그 과제가 필요하다면, Makefile을 제출해야 합니다. 그것은 `-Wall -Wextra -Werror` 플래그를 지정하여 컴파일할 것입니다. 그리고 Makefile은 `relink` 되어서는 안됩니다.
- Makefile은 최소한 `$(NAME)`, `all`, `clean`, `fclean`, `re`를 포함해야 합니다.
- 프로젝트에서 당신의 libft를 허용한다면, 소스들과 그것과 연관된 Makefile을 연관 된 Makefile과 함께 libft폴더에 복사해야 합니다. 프로젝트의 Makefile은 Makefile 을 사용하여 라이브러리를 컴파일한 다음, 프로젝트를 컴파일해야 합니다.

</br>

## 2. Mandatory part



**Program name** 

`libftprintf.a`

**Turn in ﬁles** 

- .c, */*.c, *.h, */*.h, Makefile

**Makeﬁle** 

all, clean, fclean, re, bonus

**External functs.** 

malloc, free, write, va_start, va_arg, va_copy, va_end

**Libft authorized** 

yes

## **Description**

Write a library that contains ft_printf, a function that will mimic the real printf

- ft_printf의 프로토타입은 `int ft_printf(const char *, …);` 이여야 합니다.
- 당신은 libc의 printf 함수를 recode해야 합니다.
- 원래의 printf 함수처럼 buffer 관리를 해서는 안 됩니다.
- 다음과 같은 conversions를 관리 할 것입니다 : `cspdiuxX%`
- 모든 conversions에서 ‘`-0.*`’ 플래그와 minimum field width의 조합을 관리 할 것입니다.
- 원래의 printf 함수와 비교될 것입니다.

</br>

## 3. 선행지식

- [가변인자](https://velog.io/@hidaehyunlee/가변인자-Variadic-Arguments)
- [형식태그와 서식지정자](https://velog.io/@hidaehyunlee/형식태그와-서식지정자-printf-함수의-옵션을-알아보자)
- [외부 라이브러리 컴파일](https://velog.io/@hidaehyunlee/외부-라이브러리-GCC로-컴파일-하기)


