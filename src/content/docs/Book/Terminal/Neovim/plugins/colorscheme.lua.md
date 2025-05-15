---
title: colorscheme.lua
description: colorscheme.lua
---

```lua
-- lua/plugins/colorscheme.lua
return {
  -- add
  { "sainnhe/sonokai" },

  -- Configure LazyVim to load sonokai
  {
    "LazyVim/LazyVim",
    opts = {
      colorscheme = "sonokai",
    },
  },
}
```