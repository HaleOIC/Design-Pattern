//业务操作
class Stream{
public:
    virtual char Read(int number)=0;
    virtual void Seek(int position)=0;
    virtual void Write(char data)=0;
    
    virtual ~Stream(){}
};

//主体类
class FileStream: public Stream{
public:
    virtual char Read(int number){
        //读文件流
    }
    virtual void Seek(int position){
        //定位文件流
    }
    virtual void Write(char data){
        //写文件流
    }

};

class NetworkStream :public Stream{
public:
    virtual char Read(int number){
        //读网络流
    }
    virtual void Seek(int position){
        //定位网络流
    }
    virtual void Write(char data){
        //写网络流
    }
    
};

class MemoryStream :public Stream{
public:
    virtual char Read(int number){
        //读内存流
    }
    virtual void Seek(int position){
        //定位内存流
    }
    virtual void Write(char data){
        //写内存流
    }
    
};

//扩展操作
// Exitension operations
class CryptoStream: public Stream{ // for the interfaces conformation.
    
    Stream* m_stream;                    // has-a relationship

public:
    CryptoStream(Stream* stm): Stream(stm) {

    }

    virtual char Read(int number){
        //额外的加密操作...
        stm->Read(number);
    }
    virtual void Seek(int position){
        //额外的加密操作...
        stm->Seek(position);
        //额外的加密操作...
    }
    virtual void Write(byte data){
        //额外的加密操作...
        stm->Write(data);
        //额外的加密操作...
    }
};


class BufferedStream: public Stream {

    Stream* m_stream;               // has-a relationship

public:
    BufferedStream(Stream* stm): Stream(stm) {

    }

    virtual char Read(int number){
        //额外的缓冲操作...
        stm->Read(number);
    }
    virtual void Seek(int position){
        //额外的缓冲操作...
        stm->Seek(position);
        //额外的缓冲操作...
    }
    virtual void Write(byte data){
        //额外的缓冲操作...
        stm->Write(data);
        //额外的缓冲操作...
    }
};



void Process(){

    //when running the object loads.

    Stream* s1 = new FileStream();

    CryptoStream* s2 = new CryptoStream(s1);
    BufferedStream* s3 = new BufferedStream(s1);
    BufferedStream* s4 = new BufferedStream(s2); // CryptoBufferedStream

}