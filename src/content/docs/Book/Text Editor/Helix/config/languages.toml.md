---
title: language.toml
description: language.toml
---

```toml
# Typescript
[language-server.typescript-language-server]
command = "typescript-language-server"
args = ["--stdio"]

[language-server.typescript-language-server.config]
hostInfo = "helix"
preferences = { importModuleSpecifierPreference = "relative" }

# Tailwindcss
[language-server.tailwindcss-ls]
command = "tailwindcss-language-server"
args = ["--stdio"]

[language-server.tailwindcss-ls.config]
userLanguages = { typescript = "javascript", typescriptreact = "javascriptreact", html = "html" }

# HTML
[language-server.vscode-html-language-server]
command = "vscode-html-language-server"
args = ["--stdio"]

# CSS
[language-server.vscode-css-language-server]
command = "vscode-css-language-server"
args = ["--stdio"]

# Yaml
[language-server.yaml-language-server]
command = "yaml-language-server"
args = ["--stdio"]

# Zig
[language-server.zls]
command = "/opt/homebrew/bin/zls"
config.zig_exe_path = "/opt/homebrew/bin/zig"

# Language configurations - defined without duplication #

# .tsx
[[language]]
name = "tsx"
scope = "source.tsx"
injection-regex = "tsx"
file-types = ["tsx"]
language-servers = ["typescript-language-server", "tailwindcss-ls", "vscode-html-language-server"]
formatter = { command = "prettier", args = ["--parser", "typescript"] }
auto-format = true

# .ts
[[language]]
name = "typescript"
scope = "source.ts"
injection-regex = "ts"
file-types = ["ts"]
language-servers = ["typescript-language-server", "tailwindcss-ls"]
formatter = { command = "prettier", args = ["--parser", "typescript"] }
auto-format = true

# .html
[[language]]
name = "html"
scope = "text.html"
file-types = ["html"]
language-servers = ["vscode-html-language-server", "tailwindcss-ls"]
formatter = { command = "prettier", args = ["--parser", "html"] }
auto-format = true

# .css
[[language]]
name = "css"
scope = "source.css"
file-types = ["css"]
language-servers = ["vscode-css-language-server", "tailwindcss-ls"]
formatter = { command = "prettier", args = ["--parser", "css"] }
auto-format = true

# .yaml
[[language]]
name = "yaml"
scope = "source.yaml"
file-types = ["yaml", "yml"]
auto-format = true
formatter = { command = "prettier", args = ["--parser", "yaml"] }
```