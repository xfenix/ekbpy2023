bld:
	docker build . -t debug
run:
	docker run -it --rm debug bash
clean:
	rm -rf *.so
	rm -rf build/
	rm -rf *.build/
	rm -rf .mypy_cache
	rm -rf __pycache__
	rm -rf *.html
	rm -rf *.c # leave the premises!!1111
