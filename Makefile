TARGET= cppSamples/var_args

all:
	make -C $(TARGET) run

clean:
	make -C $(TARGET) clean
