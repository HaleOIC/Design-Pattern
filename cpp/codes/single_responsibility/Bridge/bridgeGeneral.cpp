/**
 * By using the bridge design pattern
 * the total number of Classes decrease from 1 + n + n * m
 * to 1 + n + m, what an amazing thing!
 */

// Seperate the Messager class and MessagerImp class.
#include <iostream>
#include <string>

using namespace std;

// Forward declaration of MessagerImp to be used in Messager
class MessagerImp;

class Messager
{
  protected:
    MessagerImp *m_mip; // Pointer to the implementation

  public:
    Messager(MessagerImp *mip) : m_mip(mip) {} // Constructor to set the implementation

    virtual void Login(string username, string password) = 0;
    virtual void SendMessage(string message) = 0;
    virtual void SendPicture(string image) = 0;

    virtual ~Messager() {}
};

class MessagerImp
{
  public:
    MessagerImp() {}

    virtual void PlaySound() = 0;
    virtual void DrawShape() = 0;
    virtual void WriteText() = 0;
    virtual void Connect() = 0;

    virtual ~MessagerImp() {}
};

// Platform-specific implementations
class PCMessagerImp : public MessagerImp
{
  public:
    virtual void PlaySound()
    {
        cout << "Playing sound on PC" << endl;
    }
    virtual void DrawShape()
    {
        cout << "Drawing shape on PC" << endl;
    }
    virtual void WriteText()
    {
        cout << "Writing text on PC" << endl;
    }
    virtual void Connect()
    {
        cout << "Connecting on PC" << endl;
    }
};

class MobileMessagerImp : public MessagerImp
{
  public:
    virtual void PlaySound()
    {
        cout << "Playing sound on Mobile" << endl;
    }
    virtual void DrawShape()
    {
        cout << "Drawing shape on Mobile" << endl;
    }
    virtual void WriteText()
    {
        cout << "Writing text on Mobile" << endl;
    }
    virtual void Connect()
    {
        cout << "Connecting on Mobile" << endl;
    }
};

// Business logic abstractions
class MessagerLite : public Messager
{
  public:
    MessagerLite(MessagerImp *mip) : Messager(mip) {}

    virtual void Login(string username, string password)
    {
        m_mip->Connect();
        cout << "Login in Lite mode with username: " << username << endl;
    }
    virtual void SendMessage(string message)
    {
        m_mip->WriteText();
        cout << "Sending message in Lite mode: " << message << endl;
    }
    virtual void SendPicture(string image)
    {
        m_mip->DrawShape();
        cout << "Sending picture in Lite mode: " << image << endl;
    }
};

class MessagerPerfect : public Messager
{
  public:
    MessagerPerfect(MessagerImp *mip) : Messager(mip) {}

    virtual void Login(string username, string password)
    {
        m_mip->PlaySound();
        m_mip->Connect();
        cout << "Login in Perfect mode with username: " << username << endl;
    }
    virtual void SendMessage(string message)
    {
        m_mip->PlaySound();
        m_mip->WriteText();
        cout << "Sending message in Perfect mode: " << message << endl;
    }
    virtual void SendPicture(string image)
    {
        m_mip->PlaySound();
        m_mip->DrawShape();
        cout << "Sending picture in Perfect mode: " << image << endl;
    }
};

int main()
{
    // Create a platform-specific implementation
    MessagerImp *mip = new PCMessagerImp();

    // Create a messager with the desired implementation
    Messager *m = new MessagerPerfect(mip);

    // Use the messager
    m->Login("user", "password");
    m->SendMessage("Hello, World!");
    m->SendPicture("Image.png");

    // Clean up
    delete m;
    delete mip;
    return 0;
}
