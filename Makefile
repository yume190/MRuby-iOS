MRUBY_VERSION:=2.0.1

cleanMRuby:
	rm -Rf mruby

cleanSPM:
	rm -Rf Sources/CMRuby/include
	rm -Rf Sources/CMRuby/mruby-compiler
	rm -Rf Sources/CMRuby/src

clean: cleanMRuby cleanSPM
	

download:
	git clone --depth 1 --branch $(MRUBY_VERSION) https://github.com/mruby/mruby

build:
	rake -f mruby/Rakefile

copy:
	cp -R mruby/include							Sources/CMRuby
	cp -R mruby/src 							Sources/CMRuby
	mkdir -p 									Sources/CMRuby/mrbgems/mruby-compiler
	cp -R mruby/mrbgems/mruby-compiler/core 	Sources/CMRuby/mrbgems/mruby-compiler

	# copy build resource
	# cp -R mruby/build/host/include Sources/CMRuby/include
	cp mruby/build/host/mrbgems/mruby-compiler/core/y.tab.c Sources/CMRuby/mrbgems/mruby-compiler/core

	cp files/module.modulemap 					Sources/CMRuby/include
	cp files/public.h 							Sources/CMRuby/include