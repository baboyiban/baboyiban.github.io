---
title: 배포 (bun)
description: 배포 (bun)
---

```bash
bun run build
```

```bash
bun run start
```

```bash
bun run start -p 8080
```

# PM2 배포

```bash
bun run build
```

```bash
export NODE_ENV=production # mac, linux
set NODE_ENV=production # window
```

```bash
bun i -g pm2
```

```bash
sudo apt update
sudo apt install npm
sudo npm cache clean --force
sudo npm install -g n
sudo n stable
sudo npm install -g npm
```

```bash
pm2 start bun --name nextjs-app -- run start -- -p 8080
```
# PM2 기능

```bash
pm2 list nextjs-app
```

```bash
pm2 stop nextjs-app
```

```bash
pm2 start nextjs-app
```

```bash
pm2 restart nextjs-app
```

```bash
pm2 delete nextjs-app
```

참고사이트
https://medium.com/@mudasirhaji/deploying-a-next-js-app-manually-on-aws-ec2-a-step-by-step-guide-58b266ff1c52
