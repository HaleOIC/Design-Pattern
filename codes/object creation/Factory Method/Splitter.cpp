#include "Isplitter.cpp"

// some concrete XXXSplitter
class BinarySplitter: public Isplitter {
public:
	BinarySplitter() {}
	~BinarySplitter() {}
};


class FileSplitter: public Isplitter {
public:
	FileSplitter() {}
	~FileSplitter() {}
};

class VideoSplitter: public Isplitter {
public:
	VideoSplitter() {}
	~VideoSplitter() {}
};

// their corresponding concrete XXXFactory
class BinaryFactory: public Ifactory {
public:

	virtual Isplitter* create() {
		// .... some operations
		return new BinarySplitter();
		// .... some operations
	}

	virtual ~BinaryFactory() {}
};


class FileFactory: public Ifactory {
public:

	virtual Isplitter* create() {
		// .... some operations
		return new FileSplitter();
		// .... some operations
	}

	virtual ~FileFactory() {}
};

class VideoFactory: public Ifactory {
public:

	virtual Isplitter* create() {
		// .... some operations
		return new VideoSplitter();
		// .... some operations
	}

	virtual ~VideoFactory() {}
};

// although it seems correct, but it put the 
// responsibility of releasing the memory for the client code.
// a better way is using the dynamic memory manager like shared_ptr.
