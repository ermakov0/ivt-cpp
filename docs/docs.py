#!/usr/bin/env python3
import os
import random
import re
from pathlib import Path

from jinja2 import Environment, FileSystemLoader

random.seed(2026)

COUNT = 30

def code(filename):
    """
    {{ code('01-3-warnings.cpp') }}
    """
    text = open(Path('..') / filename).read()
    # return f'```cpp\n{text}```\n'
    return f'```{{.cpp .numberLines}}\n{text}```'


def puml(filename):
    """
    {{ puml('01-1-hello') }}
    """
    text = open(Path('..') / 'uml' / f'{filename}.svg').read()
    text = re.sub(r'<\?plantuml[^?]*\?>', '', text)
    return f'<center>{text}</center>\n'


def main():
    lll = (
        '21', '22', '31', '32', '33', '34', '41', '42', '51', '52',
        '61', '62', '71', '72', '73',
    )

    variants = {}
    for i in lll:
        lines = open(f'lab{i}.tex').readlines()
        assert len(lines) == COUNT
        random.shuffle(lines)
        variants[f'lab{i}'] = lines

    env = Environment(loader=FileSystemLoader('.'))
    env.globals['code'] = code
    env.globals['puml'] = puml

    template = env.get_template('template.md')

    variant = 0
    context = {
        'variant': variant + 1,
    }
    for i in lll:
        context[f'lab{i}'] = variants[f'lab{i}'][variant].strip()

    open(f'cpp-{variant + 1}.md', 'w').write(template.render(context))


if __name__ == '__main__':
    main()
