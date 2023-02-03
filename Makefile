bld:
	docker build . -t debug
run:
	docker run -it --rm debug bash
