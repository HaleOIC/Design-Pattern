/**
 * By using the bridge design pattern
 * the total number of Classes decrease from 1 + n + n * m 
 * to 1 + n + m, what an amazing thing!
 */

// Seperate the Messager class and MessagerImp class.
class Messager{
protected:

    MessagerImp* m_mip; // .... the implementation plane to change

public:

    virtual void Login(string username, string password)=0;
    virtual void SendMessage(string message)=0;
    virtual void SendPicture(Image image)=0;
    
    virtual ~Messager(){}
};


class MessagerImp{
public:

    MessagerImp() {}

    virtual void PlaySound()=0;
    virtual void DrawShape()=0;
    virtual void WriteText()=0;
    virtual void Connect()=0;

    virtual ~MessagerImp(){}
};


//平台实现 plane implementation
class PCMessagerImp: public MessagerImp{       // PC plane abstraction
public:
    
    virtual void PlaySound(){
        //**********
    }
    virtual void DrawShape(){
        //**********
    }
    virtual void WriteText(){
        //**********
    }
    virtual void Connect(){
        //**********
    }
};

class MobileMessagerImp: public MessagerImp{     // Mobile plane abstraction
public:
    
    virtual void PlaySound(){
        //==========
    }
    virtual void DrawShape(){
        //==========
    }
    virtual void WriteText(){
        //==========
    }
    virtual void Connect(){
        //==========
    }
};



//业务抽象 abstraction for concrete events.

class MessagerLite: public Messager {
public:

    virtual void Login(string username, string password) {
        m_mip->Connect();
        // .....
    }
    virtual void SendMessage(string message){
        
        m_mip->WriteText();
        //........
    }
    virtual void SendPicture(Image image){
        
        m_mip->DrawShape();
        //........
    }
};



class MessagerPerfect: public Messager {
public:
    
    virtual void Login(string username, string password){
        
        m_mip->PlaySound();
        //********
        m_mip->Connect();
        //........
    }
    virtual void SendMessage(string message){
        
        m_mip->PlaySound();
        //********
        m_mip->WriteText();
        //........
    }
    virtual void SendPicture(Image image){
        
        m_mip->PlaySound();
        //********
        m_mip->DrawShape();
        //........
    }
};

void Process(){
    // loads when running

    MessagerImp* mip = new PCMessagerImp();

    Messager *m = new MessagerPerfect(mip);

    return 0;
}

