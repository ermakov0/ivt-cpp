import os
import random

from jinja2 import Environment, FileSystemLoader

random.seed(2026)

COUNT = 30

def code(filename):
    """
    {{ code('01-3-warnings.cpp') }}
    """
    text = open(os.path.join('..', filename)).read()
    # return f'```cpp\n{text}```\n'
    return f'```{{.cpp .numberLines}}\n{text}```\n'


def main():
    lll = (
        '21',
        '22',
        '31',
        '32',
        '33',
        '34',
    )

    variants = {}
    for i in lll:
        lines = open(f'lab{i}.tex').readlines()
        assert len(lines) == COUNT
        random.shuffle(lines)
        variants[f'lab{i}'] = lines

    env = Environment(loader=FileSystemLoader(''))
    env.globals['code'] = code

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
