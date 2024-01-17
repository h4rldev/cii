src := "./src"
out := "./out"

default: run

@run file="main":
  just build {{file}}
  ./{{file}}

@build file="main":
  gcc -O3 {{src}}/{{file}}.c -o {{out}}/{{file}}
  cp {{out}}/{{file}} .

