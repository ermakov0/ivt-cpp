DPI = 300

SVG := $(shell find images -type f -name '*.svg')
DIA := $(shell find images -type f -name '*.dia')
SOURCES := $(shell find . -type f -name '*.tex')

SVG2PNG := $(SVG:images/%.svg=images-gen/svg_%.png)
DIA2PNG := $(DIA:images/%.dia=images-gen/dia_%.png)

#all: main.pdf

main.pdf: $(SVG2PNG) $(DIA2PNG) $(SOURCES)
	lualatex main.tex
	lualatex main.tex
	cp $@ $(shell date +%Y%m%d)_$@

book: main.pdf
	pdfbook --short-edge $<

# todo include

images-gen/dia_%.eps: images/%.dia
	dia $< -e $@

images-gen/svg_%.png: images/%.svg
	convert -density $(DPI) -monochrome $< $@

images-gen/dia_%.png: images-gen/dia_%.eps
	convert -density $(DPI) -monochrome $< $@

clean:
	rm -f *.aux *.log *.nav *.snm *.toc *.vrb *.out
	find images-gen -type f -not -name '.placeholder' -exec rm {} \;
#	find examples -type f -not -name '*.c' -exec rm {} \;
