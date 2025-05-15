---
title: zshrc
description: zshrc
---

```zsh
# Powerlevel10k Instant Prompt
if [[ -r "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh" ]]; then
  source "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh"
fi

# Oh My Zsh Setup
export ZSH="$HOME/.oh-my-zsh"
ZSH_THEME="powerlevel10k/powerlevel10k"

# Plugins
plugins=(
  git
  zsh-autosuggestions
  zsh-syntax-highlighting
  # 필요한 다른 플러그인 추가
)

source $ZSH/oh-my-zsh.sh

# Homebrew completions
if type brew &>/dev/null; then
  FPATH=$(brew --prefix)/share/zsh/site-functions:$FPATH
fi

# Tool Initializations & Paths
[ -s "/Users/choidaruhan/.bun/_bun" ] && source "/Users/choidaruhan/.bun/_bun"
export BUN_INSTALL="$HOME/.bun"
export PATH="$BUN_INSTALL/bin:$PATH"

export PATH="$PATH:/Users/choidaruhan/.cache/lm-studio/bin"

source <(ng completion script)

# Conda Init (Installer Managed)
__conda_setup="$('/Users/choidaruhan/miniconda3/bin/conda' 'shell.zsh' 'hook' 2> /dev/null)"
if [ $? -eq 0 ]; then
    eval "$__conda_setup"
else
    if [ -f "/Users/choidaruhan/miniconda3/etc/profile.d/conda.sh" ]; then
        . "/Users/choidaruhan/miniconda3/etc/profile.d/conda.sh"
    else
        export PATH="/Users/choidaruhan/miniconda3/bin:$PATH"
    fi
fi
unset __conda_setup

# Pyenv Init
export PYENV_ROOT="$HOME/.pyenv"
command -v pyenv >/dev/null || export PATH="$PYENV_ROOT/bin:$PATH"
eval "$(pyenv init -)"

# NVM Init
export NVM_DIR="$HOME/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh"
[ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion"

# Java/Android/Dart/Pub Paths
export JAVA_HOME=$(/usr/libexec/java_home -v 17)
export PATH="$JAVA_HOME/bin:$PATH"
export ANDROID_HOME=/Users/choidaruhan/Library/Android/sdk
export ANDROID_SDK_ROOT="/Users/choidaruhan/Library/Android/sdk"
export ANDROID_NDK_HOME="$ANDROID_HOME/ndk/27.0.12077973"
export NDK_HOME="$ANDROID_NDK_HOME"
export PATH="$PATH:$ANDROID_SDK_ROOT/emulator:$ANDROID_SDK_ROOT/platform-tools"
export PATH=$PATH:$HOME/.pub-cache/bin

# Dart completion
[[ -f /Users/choidaruhan/.dart-cli-completion/zsh-config.zsh ]] && . /Users/choidaruhan/.dart-cli-completion/zsh-config.zsh || true

# Powerlevel10k config (Should be near the end)
[[ ! -f ~/.p10k.zsh ]] || source ~/.p10k.zsh
```