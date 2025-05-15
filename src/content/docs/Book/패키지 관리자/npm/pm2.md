---
title: pm2
description: pm2
---

```bash
# 설치
npm install pm2 -g

# 시작
pm2 start npm --name webapp -- run start -- -p 8080

# 재시작
pm2 stop nextjs-app

pm2 stop all
pm2 delete all

# bun
pm2 start bun --name "webapp" -- run start -- --port 8080
```
