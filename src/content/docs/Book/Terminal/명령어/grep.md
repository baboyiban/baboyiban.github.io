---
title: grep
description: grep
---

```shell
grep
```

## 예제

```shell
-E # 확장 정규 표현식
echo -e "a\nab\nabc" | grep -E "abc?"
```

```
ab
abc
```