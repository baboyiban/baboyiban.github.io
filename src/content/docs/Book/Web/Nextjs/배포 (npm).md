---
title: 배포 (npm)
description: 배포 (npm)
---

```bash
sudo apt update
sudo apt install npm
sudo npm cache clean --force
sudo npm install -g n
sudo n stable
sudo npm install -g npm

npm run build

npm install -g pm2
pm2 start npm --name nextjs-app -- run start -- -p 8080
```

```bash
pm2 restart nextjs-app
```
