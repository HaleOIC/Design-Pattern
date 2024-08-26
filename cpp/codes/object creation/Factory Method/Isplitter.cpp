class Isplitter {
public:

	virtual ~Isplitter() {}
};

class Ifactory {
public:

	virtual Isplitter* create() = 0;
	virtual ~Ifactory() {}

};