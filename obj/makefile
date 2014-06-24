VPATH=$(SRCDIR)

all: $(OBJECTS)
	$(CXX) -o $(BASEDIR)/nereid $(OBJECTS)
%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(INC) -c -o $@ $< 
check:
	echo "IMPLEMENT ME!"
clean:
	rm $(OBJECTS)	
install:
	echo "IMPLEMENT ME!"
