SHELL := /usr/local/bin/zsh

.PHONY: lint
lint:
	find . -path ./cmake-build-debug -prune -o -iname '*.h' -print -o -iname '*.cpp' -print | xargs clang-format -i