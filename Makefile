CMD = /home/hugo-lopes/arduino/arduino-cli
COMPILER = compile 
BOARD_FLAGS = -b
PORT_FLAGS = -p
PORT = /dev/ttyACM0
BOARD = arduino:avr:uno
SRC_DIR = watch
SKETCH = watch.ino
SKETCH_PATH = $(SRC_DIR)/$(SKETCH)
BUILD_DIR = build


all:
	$(CMD) $(COMPILER) $(BOARD_FLAGS) $(BOARD) $(SKETCH_PATH)  --build-path $(BUILD_DIR) 

upload:
	$(CMD) upload $(BOARD_FLAGS) $(BOARD) $(PORT_FLAGS) $(PORT) --input-dir $(BUILD_DIR) -v

clean:
	rm -rf $(BUILD_DIR)

re: clean all
