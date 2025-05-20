---
title: oil.lua
description: oil.lua
---

```lua
return {
  "stevearc/oil.nvim",
  dependencies = { "nvim-tree/nvim-web-devicons" },
  config = function()
    require("oil").setup({
      -- 기본 파일 탐색기 설정
      default_file_explorer = true,
      columns = { "icon", "permissions", "size" },
      view_options = {
        show_hidden = true,
      },
    })

    -- 🔥 '-' 키로 oil.nvim 파일 탐색기 열도록 설정
    vim.keymap.set("n", "-", "<cmd>Oil<CR>", { silent = true })
  end,
}
```