.PHONY: docker
docker:
	docker run -it --mount src=`pwd`,target=/home/proj,type=bind osll/mooc_linux_programming /bin/bash
