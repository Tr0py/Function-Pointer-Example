objects = fp fp1 fp2 fp3 fp4

all: $(objects)

$(objects): 

run: all
	for obj in $(objects); do echo ./$$obj; ./$$obj; done

clean:
	rm $(objects)
